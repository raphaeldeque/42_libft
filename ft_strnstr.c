/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoura-r <rmoura-r@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 21:22:12 by rmoura-r          #+#    #+#             */
/*   Updated: 2022/06/17 21:57:02 by rmoura-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*hay;
	char	*ndl;

	if (!*needle)
		return ((char *)haystack);  // not working yet / returning NULL
	while (*haystack && len--)
	{
		hay = (char *)haystack;
		ndl = (char *)needle;
		while (*hay == *ndl && *needle)
		{
			hay++;
			ndl++;
		}
		if (!*needle)
			return ((char *)haystack);
		haystack++;
	}
	return (0);
}

/*  The strnstr() function locates the first occurrence of the null-terminated string
     needle in the string haystack, where not more than len characters are searched.
     Characters that appear after a `\0' character are not searched. 

RETURN VALUES
     If needle is an empty string, haystack is returned; if needle occurs nowhere in
     haystack, NULL is returned; otherwise a pointer to the first character of the
     first occurrence of needle is returned. */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	const char	test1[] = "cabana azul banana doce";
	const char	test2[] = "banana";
	char	*res;
	char	*resft;
	
	res = strnstr(test1, test2, strlen(test1));
	resft = ft_strnstr(test1, test2, strlen(test1));
	printf("orig: %s\n", res);
	printf(" ft_: %s\n", resft);

}