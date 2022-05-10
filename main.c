#include <stdio.h>
#include <ctype.h>
#include "libft.h"

/*int	main(void)
{
	int	c;
	int	err;

	c = 0;
	err = 0;
	printf("testing isalpha... ");
	while (c++ < 127)
	{
		if (ft_isalpha(c) != isalpha(c))
		{
			err = 1;
			printf("\tOOPS! AN ERROR!\n");
			printf("\t\t\t%i ft_isalpha: %i\n", c, ft_isalpha(c));
			printf("\t\t\t%i isalpha:    %i\n", c, isalpha(c));
		}
	}
	if (!err)
		printf("OK!\n");

	c = 0;
	err = 0;
	printf("testing isdigit... ");
	while (c++ < 127)
	{
		if (ft_isdigit(c) != isdigit(c))
		{
			err = 1;
			printf("\tOOPS! AN ERROR!\n");
			printf("\t\t\t%i ft_isdigit: %i\n", c, ft_isdigit(c));
			printf("\t\t\t%i isdigit:    %i\n\n", c, isdigit(c));
		}
	}
	if (!err)
		printf("OK!\n");
	
	c = 0;
	err = 0;
	printf("testing isalnum... ");
	while (c++ < 127)
	{
		if (ft_isalnum(c) != isalnum(c))
		{
			err = 1;
			printf("\tOOPS! AN ERROR!\n");
			printf("\t\t\t%i ft_isalnum: %i\n", c, ft_isalnum(c));
			printf("\t\t\t%i isalnum:    %i\n", c, isalnum(c));
		}
	}
	if (!err)
		printf("OK!\n");
	

	return (0);
}*/

int	main()
{
	int	c;
	int	err;

	c = 0;
	err = 0;
	printf("testing isascii... ");
	while (c++ < 127)
	{
		if (ft_isascii(c) != isascii(c))
		{
			err = 1;
			printf("\tOOPS! AN ERROR!\n");
			printf("\t\t\t%i ft_isascii: %i\n", c, ft_isascii(c));
			printf("\t\t\t%i isascii:    %i\n", c, isascii(c));
		}
	}
	if (!err)
		printf("OK!\n");

	c = 0;
	err = 0;
	printf("testing isprint... ");
	while (c++ < 127)
	{
		if (ft_isprint(c) != isprint(c))
		{
			err = 1;
			printf("\tOOPS! AN ERROR!\n");
			printf("\t\t\t%i ft_isprint: %i\n", c, ft_isprint(c));
			printf("\t\t\t%i isprint:    %i\n", c, isprint(c));
		}
	}
	if (!err)
		printf("OK!\n");

}