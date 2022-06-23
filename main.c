#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include "libft.h"

// Writes a random string of size 'lenght' to a pointer
void	randstr(char *randomString, size_t length)
{
	static char	*charset;
	int			l;
	int			n;
	int			key;

	charset = " !\"#$%&'()*+,-./0123456789:;<=>?@ABCDEFGH\
IJKLMNOPQRSTUVWXYZ[\\]^_`abcdefghijklmnopqrstuvwxyz{|}~";
	l = strlen(charset);
	n = -1;
	key = 0;
	if (length && randomString)
	{
		while (n++ < (int)length)
		{
			key = arc4random_uniform(l);
			randomString[n] = charset[key];
		}
		randomString[length] = '\0';
	}
}

// Return a random printable number
int	randisprint(void)
{
	int i;

	while (1)
	{
		i = arc4random_uniform(128);
		if (isprint(i))
			return (i);
	}
}

int	main(void)
{
	int		i;
	int		j;
	int		k;
	int		l;
	int		err;
	char	a;
	char	*str;
	char	*str2;
	char	*str3;
	char	*str4;
	char	*str5;

////////////////////////
////////////////////////	ISALPHA	TEST
////////////////////////
	i = -1;				
	err = 0;
	printf("testing isalpha... ");
	while (i++ < 127)
	{
		if (ft_isalpha(i) != isalpha(i))
		{
			err = 1;
			printf("\tOOPS! AN ERROR!\n");
			printf("\t\t\t%i ft_isalpha: %i\n", i, ft_isalpha(i));
			printf("\t\t\t%i isalpha:    %i\n", i, isalpha(i));
		}
	}
	if (!err)
		printf("OK!\n");

////////////////////////
////////////////////////	ISDIGIT	TEST
////////////////////////
	i = -1;
	err = 0;
	printf("testing isdigit... ");
	while (i++ < 127)
	{
		if (ft_isdigit(i) != isdigit(i))
		{
			err = 1;
			printf("\tOOPS! AN ERROR!\n");
			printf("\t\t\t%i ft_isdigit: %i\n", i, ft_isdigit(i));
			printf("\t\t\t%i isdigit:    %i\n\n", i, isdigit(i));
		}
	}
	if (!err)
		printf("OK!\n");

////////////////////////
////////////////////////	ISALNUM	TEST
////////////////////////
	i = -1;
	err = 0;
	printf("testing isalnum... ");
	while (i++ < 127)
	{
		if (ft_isalnum(i) != isalnum(i))
		{
			err = 1;
			printf("\tOOPS! AN ERROR!\n");
			printf("\t\t\t%i ft_isalnum: %i\n", i, ft_isalnum(i));
			printf("\t\t\t%i isalnum:    %i\n", i, isalnum(i));
		}
	}
	if (!err)
		printf("OK!\n");

////////////////////////
////////////////////////	ISASCII	TEST
////////////////////////
	i = -1;
	err = 0;
	printf("testing isascii... ");
	while (i++ < 127)
	{
		if (ft_isascii(i) != isascii(i))
		{
			err = 1;
			printf("\tOOPS! AN ERROR!\n");
			printf("\t\t\t%i ft_isascii: %i\n", i, ft_isascii(i));
			printf("\t\t\t%i isascii:    %i\n", i, isascii(i));
		}
	}
	if (!err)
		printf("OK!\n");

////////////////////////
////////////////////////	ISPRINT	TEST
////////////////////////
	i = -1;
	err = 0;
	printf("testing isprint... ");
	while (i++ < 127)
	{
		if (ft_isprint(i) != isprint(i))
		{
			err = 1;
			printf("\tOOPS! AN ERROR!\n");
			printf("\t\t\t%i ft_isprint: %i\n", i, ft_isprint(i));
			printf("\t\t\t%i isprint:    %i\n", i, isprint(i));
		}
	}
	if (!err)
		printf("OK!\n");

////////////////////////
////////////////////////	STRLEN	TEST
////////////////////////
	i = 0;
	err = 0;
	printf("testing strlen... ");
	while (i++ < 30)
	{
		str = malloc(i + 1);
		if (!str)
			continue ;
		randstr(str, i);
		if (ft_strlen(str) != strlen(str))
		{
			err = 1;
			printf("\tOOPS! AN ERROR!\n");
			printf("\t\t\tft_strlen: %zu\n", ft_strlen(str));
			printf("\t\t\tstrlen:    %zu\n", strlen(str));
			printf("\t\t\tstr: %s\n", str);
		}
//		printf("\t\t\tstr: %zu %s\n", ft_strlen(str), str);
		free(str);
	}
	if (!err)
		printf("OK!\n");

////////////////////////
////////////////////////	MEMSET	TEST
////////////////////////
	i = 0;
	j = 0;
	a = 0;
	err = 0;
	printf("testing memset... ");
	while (i++ < 25)
	{
		str = malloc(i + 1);
		if (!str)
			continue ;
		randstr(str, i);
		str2 = strdup(str);
		str3 = strdup(str); // storing to print error msg
		a = randisprint();
		j = arc4random_uniform(i);
//		printf("\nstr:\t%s\nstr2:\t%s\n", str, str2);
		ft_memset(str, a, j);
		memset(str2, a, j);
//		printf("%i\nc: %c (%i times)\n", strcmp(str, str2), a, j);
//		printf(" ft_:\t%s\norig:\t%s\n", str, str2);
		if (strcmp(str, str2))
		{
			err = 1;
			printf("\n\t   OOPS! AN ERROR!\n");
			printf("str:\t   %s\n", str3);
			printf("ft_memset: %s\nc:\t   %c\nlen:\t   %i\n", str, a, j);
			printf("memset:\t   %s\nc:\t   %c\nlen:\t   %i\n\n", str2, a, j);
		}
		free(str);
		free(str2);
		free(str3);
	}
	if (!err)
		printf("OK!\n");

////////////////////////
////////////////////////	BZERO	TEST
////////////////////////
	i = 0;
	j = 0;
	err = 0;
	printf("testing bzero... ");
	while (i++ < 15)
	{
		str = malloc(i + 1);
		if (!str)
			continue ;
		randstr(str, i);
		str2 = strdup(str);
		str3 = strdup(str); // storing to print error msg
		j = arc4random_uniform(i);
//		printf("\nstr:\t%s\nstr2:\t%s\n", str, str2);
		ft_bzero(str, j);
		bzero(str2, j);
//		printf("%i\n", strcmp(str, str2));
//		printf("str    ft:  %s\nstr2 orig:  %s\tn=%i\n", str, str2, j);
		if (strcmp(str, str2))
		{
			err = 1;
			printf("\n\t   OOPS! AN ERROR!\n");
			printf("str:\t   %s\n", str3);
			printf("ft_bzero:  %s\nlen:\t   %i\n", str, j);
			printf("bzero:\t   %s\nlen:\t   %i\n\n", str2, j);
		}
		free(str);
		free(str2);
		free(str3);
	}
	if (!err)
		printf("OK!\n");

////////////////////////
////////////////////////	MEMCPY	TEST
////////////////////////
	i = 0;
	j = 0;
	err = 0;
	printf("testing memcpy... ");
	while (i++ < 30)
	{
		str = malloc(i + 1);
		str2 = malloc(i + 1);
		str3 = malloc(i + 1);
		if (!str || !str2 || !str3)
			continue ;
		randstr(str, i);
		j = arc4random_uniform(i);
//		printf("\nstr: %s\n", str);
		ft_memcpy((void *)str2, (const void *)str, i+1);
		memcpy((void *)str3, (const void *)str, i+1);
//		printf("%i\n", strcmp(str2, str3));
//		printf("str2   ft:  %s\nstr3 orig:  %s\nn=%i\n", str2, str3, i);
		if (strcmp(str2, str3))
		{
			err = 1;
			printf("\n\t   OOPS! AN ERROR!\n");
			printf("str:\t   %s\n", str);
			printf("ft_memcpy:  %s\nlen:\t   %i\n", str2, i);
			printf("memcpy:\t   %s\nlen:\t   %i\n\n", str3, i);
		}
		free(str);
		free(str2);
		free(str3);
	}
	if (!err)
		printf("OK!\n");

////////////////////////
////////////////////////	MEMMOVE	TEST
////////////////////////
	i = 0;
	j = 0;
	k = 0;
	l = 0;
	err = 0;
	printf("testing memmove... ");
	while (i++ < 30)
	{
		str = malloc(sizeof(char *)*i + 1);
		if (!str)
			continue ;
		randstr(str, i);
		j = arc4random_uniform(i);
		k = arc4random_uniform(i);
		l = arc4random_uniform(i);
//		printf("\nstr: %s\ninc_dst: %i   inc_src: %i\n", str, j, k);
		str2 = ft_memmove((void *)str+j, (const void *)str+k, l);
		str3 = memmove((void *)str+j, (const void *)str+k, l);
//		printf("%i\n", strcmp(str2, str3));
//		printf(" ft_:  %s\norig:  %s\nlen=%i\n", str2, str3, l);
		if (strcmp(str2, str3))
		{
			err = 1;
			printf("\n\t   OOPS! AN ERROR!\n");
			printf("str: %s\ninc_dst: %i   inc_src: %i\n", str, j, k);
			printf(" ft_:  %s\norig:  %s\nlen=%i\n", str2, str3, l);
		}
		free(str);
	}
	if (!err)
		printf("OK!\n");

////////////////////////
////////////////////////	STRLCPY	TEST
////////////////////////
	i = 0;
	j = 0;
	k = 0;
	l = 0;
	err = 0;
	printf("testing strlcpy... ");
	while (i++ < 30)
	{
		str = malloc(sizeof(char *)*i + 1); // dst (ft_) space
		str3 = malloc(sizeof(char *)*i + 1); // src (fixed) space
		if (!str || !str3)
			continue ;
		randstr(str, i);	// random dst (ft_)
		randstr(str3, i);	// random src
		str2 = strdup(str);	// dst copy (for orig)
		str4 = strdup(str);	// copy to print error msg
		j = arc4random_uniform(i);
//		printf("\ndst: %s\nsrc: %s\ndstsize: %i\n", str, str3, j);
		k = ft_strlcpy(str, str3, j);
		l = strlcpy(str2, str3, j);
//		printf("%i\n", strcmp(str, str2));
//		printf(" ft_:  %s\norig:  %s\nout=%i %i\n", str, str2, k, l);
		if (strcmp(str, str2) || k != l)
		{
			err = 1;
			printf("\n\t   OOPS! AN ERROR!\n");
			printf("\ndst: %s\nsrc: %s\ndstsize: %i\n", str4, str3, j);
			printf(" ft_:  %s\norig:  %s\nout=%i %i\n", str, str2, k, l);
		}
		free(str);
		free(str2);
		free(str3);
		free(str4);
	}
	if (!err)
		printf("OK!\n");

////////////////////////
////////////////////////	STRLCAT	TEST
////////////////////////
	i = 0;
	j = 0;
	k = 0;
	l = 0;
	err = 0;
	printf("testing strlcat... ");
	while (i++ < 30)
	{
		str = malloc(sizeof(char *)*2*i + 1); // dst (ft_) space
		str3 = malloc(sizeof(char *)*i + 1); // src (fixed) space
		if (!str || !str3)
			continue ;
		randstr(str, i);	// random dst (ft_)
		randstr(str3, i);	// random src
		str2 = strdup(str);	// dst copy (for orig)
		str4 = strdup(str);	// copy to print error msg
		j = arc4random_uniform(2*i);
//		printf("\ni: %i\ndst: %s\nsrc: %s\ndstsize: %i\n", i, str, str3, j);
		k = ft_strlcat(str, str3, j);
		l = strlcat(str2, str3, j);
//		printf("%i\n", strcmp(str, str2));
//		printf(" ft_:  %s\norig:  %s\nout=%i %i\n", str, str2, k, l);
		if (strcmp(str, str2) || k != l)
		{
			err = 1;
			printf("\n\t   OOPS! AN ERROR!\n");
			printf("\ni: %i\ndst: %s\nsrc: %s\ndstsize: %i\n", i, str4, str3, j);
			printf(" ft_:  %s\norig:  %s\nout=%i %i\n", str, str2, k, l);
		}
	}
	free(str);
	free(str2);
	free(str3);
	free(str4);
	if (!err)
		printf("OK!\n"); 

////////////////////////
////////////////////////	TOUPPER	TEST
////////////////////////
	i = -1;
	err = 0;
	printf("testing toupper... ");
	while (i++ < 127)
	{
		if (ft_toupper(i) != toupper(i))
		{
			err = 1;
			printf("\tOOPS! AN ERROR!\n");
			printf("\t\t\t%i ft_toupper: %i\n", i, ft_toupper(i));
			printf("\t\t\t%i toupper:    %i\n", i, toupper(i));
		}
	}
	if (!err)
		printf("OK!\n");

////////////////////////
////////////////////////	TOLOWER	TEST
////////////////////////
	i = -1;
	err = 0;
	printf("testing tolower... ");
	while (i++ < 127)
	{
		if (ft_tolower(i) != tolower(i))
		{
			err = 1;
			printf("\tOOPS! AN ERROR!\n");
			printf("\t\t\t%i ft_tolower: %i\n", i, ft_tolower(i));
			printf("\t\t\t%i tolower:    %i\n", i, tolower(i));
		}
	}
	if (!err)
		printf("OK!\n");

////////////////////////
////////////////////////	STRCHR	TEST
////////////////////////
	i = 0;
	a = 0;
	err = 0;
	printf("testing strchr... ");
	while (i++ < 30)
	{
		str = malloc(sizeof(char *)*i + 1);
		str4 = strdup(str); // ft_  output
		str5 = strdup(str); // orig output
		if (!str || !str4 || !str5)
			continue ;
		randstr(str, i);
		str2 = strdup(str); // copy to orig
		str3 = strdup(str); // copy to print error msg
		a = randisprint();
//		a = '\0';
		str4 = ft_strchr(str, a);
		str5 = strchr(str2, a);
//		printf("\nstr:\t   %s\nc:\t   %c\n", str3, a);
//		printf("ft_strchr: %s\n", str4);
//		printf("strchr:\t   %s\n\n", str5);
		if (!str4 && !str5)
			continue ;
		if (strcmp(str4, str5))
		{
			err = 1;
			printf("\tOOPS! AN ERROR!\n");
			printf("str:\t   %s\nc:\t   %c\n", str3, a);
			printf("ft_strchr: %s\n", str4);
			printf("strchr:\t   %s\n\n", str5);
		}
//		printf(" str: %p\nstr2: %p\nstr3: %p\nstr4: %p\nstr5: %p\n", str, str2, str3, str4, str5);
		free(str);
		free(str2);
		free(str3);
	}
/* 	if (str4)
		free(str4);
	if (str5)
		free(str5); */
	if (!err)
		printf("OK!\n");

////////////////////////
////////////////////////	STRRCHR	TEST
////////////////////////
	i = 0;
	a = 0;
	err = 0;
	printf("testing strrchr... ");
	while (i++ < 30)
	{
		str = malloc(sizeof(char *)*i + 1);
		str4 = strdup(str); // ft_  output
		str5 = strdup(str); // orig output
		if (!str || !str4 || !str5)
			continue ;
		randstr(str, i);
		str2 = strdup(str); // copy to orig
		str3 = strdup(str); // copy to print error msg
		a = randisprint();
//		a = '\0';
		str4 = ft_strchr(str, a);
		str5 = strchr(str2, a);
//		printf("\nstr:\t   %s\nc:\t   %c\n", str3, a);
//		printf("ft_strrchr: %s\n", ft_strrchr(str, a));
//		printf("strrchr:    %s\n\n", strrchr(str2, a));
		if (!str4 && !str5)
			continue ;
		if (strcmp(str4, str5))
		{
			err = 1;
			printf("\tOOPS! AN ERROR!\n");
			printf("str:\t   %s\nc:\t   %c\n", str3, a);
			printf("ft_strrchr: %s\n", str4);
			printf("strrchr:    %s\n\n", str5);
		}
//		printf(" str: %p\nstr2: %p\nstr3: %p\nstr4: %p\nstr5: %p\n", str, str2, str3, str4, str5);
		free(str);
		free(str2);
		free(str3);
	}
/* 	if (str4)
		free(str4);
	if (str5)
		free(str5); */
	if (!err)
		printf("OK!\n");

////////////////////////
////////////////////////	STRNCMP	TEST
////////////////////////
	i = 0;
	j = 0;
	k = 0;
	l = 0;
	err = 0;
	printf("testing strncmp... ");
	while (i++ < 30)
	{
		str = malloc(sizeof(char *)*i + 1); // s1
		str2 = malloc(sizeof(char *)*i + 1); // s2
		randstr(str, i);	// random s1
		randstr(str2, i);	// random s2
		if (!str || !str2)
			continue ;
		j = arc4random_uniform(i);
		k = ft_strncmp(str, str2, j);
		l = strncmp(str, str2, j);
//		printf("\ni: %i\ns1: %s\ns2: %s\nn: %i\nft_/orig: %i %i\n", i, str, str2, j, k, l);
		if (k != l)
		{
			err = 1;
			printf("\n\t   OOPS! AN ERROR!\n");
			printf("\ni: %i\ns1: %s\ns2: %s\nn: %i\nk, l: %i %i", i, str, str2, j, k, l);
		}
		free(str);
		free(str2);
	}
	if (!err)
		printf("OK!\n"); 

////////////////////////
////////////////////////	MEMCHR	TEST
////////////////////////
	i = 0;
	j = 0;
	a = 0;
	err = 0;
	printf("testing memchr... ");
	while (i++ < 50)
	{
		str = malloc(sizeof(char *)*i + 1);
		str2 = strdup(str); // orig
		str3 = strdup(str); // copy to err		
		if (!str || !str2 || !str3)
			continue ;
		randstr(str, i);
		a = randisprint();
		j = arc4random_uniform(i);
//		printf("\nstr:\t%s\nstr2:\t%s\n", str, str2);
		str2 = (char *)ft_memchr((const void *)str, a, j);
		str3 = (char *)memchr((const void *)str, a, j);
//		printf("c: %c (n: %i)\n", a, j);
//		printf(" ft_:\t%s\norig:\t%s\n", str2, str3);
		if (!str2 && !str3)
			continue ;
		if (strcmp(str2, str3))
		{
			err = 1;
			printf("\n\t   OOPS! AN ERROR!\n");
			printf("str:\t   %s\n", str);
			printf("ft_memchr: %s\nc:\t   %c\nn:\t   %i\n", str2, a, j);
			printf("memchr:\t   %s\nc:\t   %c\nn:\t   %i\n\n", str3, a, j);
		}
		free(str);
	}
	/* if (str2)
		free(str2);
	if (str3)
		free(str3); */
	if (!err)
		printf("OK!\n");

////////////////////////
////////////////////////	MEMCMP	TEST
////////////////////////
	i = 0;
	j = 0;
	k = 0;
	l = 0;
	err = 0;
	printf("testing memcmp... ");
	while (i++ < 30)
	{
		str = malloc(sizeof(char *)*i + 1); // s1
		str2 = malloc(sizeof(char *)*i + 1); // s2
		randstr(str, i);	// random s1
		randstr(str2, i);	// random s2
		if (!str || !str2)
			continue ;
		j = arc4random_uniform(i*2);
		k = ft_memcmp(str, str2, j);
		l = memcmp(str, str2, j);
//		printf("\ni: %i\ns1: %s\ns2: %s\nn: %i\nft_/orig: %i %i\n", i, str, str2, j, k, l);
		if (k != l)
		{
			err = 1;
			printf("\n\t   OOPS! AN ERROR!\n");
			printf("\ni: %i\ns1: %s\ns2: %s\nn: %i\nk, l: %i %i", i, str, str2, j, k, l);
		}
		free(str);
		free(str2);
	}
	if (!err)
		printf("OK!\n"); 

////////////////////////
////////////////////////	STRNSTR	TEST
////////////////////////
	i = 0;
	j = 0;
	err = 0;
	printf("testing strnstr... ");
	while (i++ < 50)
	{
		str = malloc(i + 1); // haystack
		str2 = strdup(str);  // needle
		str3 = strdup(str);  // ft_
		str4 = strdup(str);  // orig
		if (!str || !str2 || !str3)
			continue ;
		randstr(str, i);
		randstr(str2, arc4random_uniform(3));
		j = arc4random_uniform(i);
		str3 = ft_strnstr(str, str2, j);
		str4 = strnstr(str, str2, j);
//		printf("\nhaystack: %s\nneedle: %s\n", str, str2);
//		printf("  ft:  %s\norig:  %s\ni=%i len=%i\n", str3, str4, i, j);
		if (!str3 && !str4)
			continue ;
		if (strcmp(str3, str4))
		{
			err = 1;
			printf("\n\t   OOPS! AN ERROR!\n");
			printf("str:\t   %s\n", str);
			printf("ft_strnstr:  %s\nlen:\t   %i\n", str3, j);
			printf("strnstr:\t   %s\nlen:\t   %i\n\n", str4, j);
		}
		free(str);
		free(str2);
	}
	if (!err)
		printf("OK!\n");

////////////////////////
////////////////////////	ATOI	TEST
////////////////////////
	i = 0;
	err = 0;
	printf("testing atoi... ");
	while (i++ < 100)
	{
		str = malloc(i + 1);
		if (!str)
			continue ;
		randstr(str, i);
		if (ft_atoi(str) != atoi(str))
		{
			err = 1;
			printf("\tOOPS! AN ERROR!\n");
			printf("\t\t\tft_strlen: %i\n", ft_atoi(str));
			printf("\t\t\tstrlen:    %i\n", atoi(str));
			printf("\t\t\tstr: %s\n", str);
		}
//		if (atoi(str))
//			printf("str: %i %i\n", ft_atoi(str), atoi(str));
		free(str);
	}
	if (!err)
		printf("OK!\n");

////////////////////////
////////////////////////	CALLOC	TEST
////////////////////////
	i = 0;
	j = 0;
	err = 0;
	printf("testing calloc... ");
	while (i++ < 15)
	{
		j = arc4random_uniform(i);
		k = arc4random_uniform(i);
		str = calloc(j, k);
		str2 = ft_calloc(j, k);
		if (!str || !str2)
			continue ;
//		printf("\nstr:\t%s\nstr2:\t%s\n", str, str2);
//		printf("%i\n", strcmp(str, str2));
//		printf("count:  %i\nsize:   %i\n", j, k);
		if (strcmp(str, str2))
		{
			err = 1;
			printf("\n\t   OOPS! AN ERROR!\n");
			printf("str:\t   %s\n", str3);
			printf("count: %i\nsize:   %i\n", j, k);
		}
		free(str);
		free(str2);
	}
	if (!err)
		printf("OK!\n");

////////////////////////
////////////////////////	STRDUP	TEST
////////////////////////
	i = 0;
	err = 0;
	printf("testing strdup... ");
	while (i++ < 30)
	{
		str = malloc(sizeof(char *)*i + 1);
		if (!str)
			continue ;
		randstr(str, i);
		str2 = ft_strdup(str);
		str3 = strdup(str);
//		printf("\nstr: %s\n", str);
//		printf("  ft_: %s\n", str2);
//		printf("orig:: %s\n\n", str3);
		if (strcmp(str2, str3))
		{
			err = 1;
			printf("\tOOPS! AN ERROR!\n");
			printf("str:\t   %s\n", str);
			printf("ft_strdup: %s\n", str2);
			printf("strdup:\t   %s\n\n", str3);
		}
		free(str);
		free(str2);
		free(str3);
	}
	if (!err)
		printf("OK!\n");

////////////////////////
////////////////////////	SUBSTR	TEST
////////////////////////
	i = 0;
	j = 0;
	k = 0;
	err = 0;
	printf("testing substr... ");
	while (i++ < 50)
	{
		str = malloc(i + 1);
		str3 = strdup(str);
		str4 = strdup(str);
		if (!str)
			continue ;
		randstr(str, i);
		j = arc4random_uniform(i*2);
		k = arc4random_uniform(i*2);
		//printf("\nstr:\t%s\n", str);
		str2 = ft_substr(str, j, k);
		str3 = ft_strnstr(str, str2, i); // ptr to substr
		//printf("i: %i\nsubstr: %s\nstart: %i\n  len: %i\n", i, str2, j, k);
		l = ft_strlcpy(str4, str3, (j+k+1)); // str4 must match str2 with len l

		//printf("str2: %s\nstr4: %s\nl: %i\n", str2, str4, l);

/* 		if (strcmp(str, str2))
		{
			err = 1;
			printf("\n\t   OOPS! AN ERROR!\n");
			printf("str:\t   %s\n", str3);
			printf("ft_memset: %s\nc:\t   %c\nlen:\t   %i\n", str, a, j);
			printf("memset:\t   %s\nc:\t   %c\nlen:\t   %i\n\n", str2, a, j);
		} */
		free(str);
		free(str2);
		//free(str3);
		//free(str4);
	}
	if (!err)
		printf("OK!\n");




}

