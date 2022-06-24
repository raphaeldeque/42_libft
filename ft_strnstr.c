/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoura-r <rmoura-r@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 21:22:12 by rmoura-r          #+#    #+#             */
/*   Updated: 2022/06/24 17:11:50 by rmoura-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*hay;
	char	*ndl;
	size_t	n;

	if (*needle == '\0')
		return ((char *)haystack);
	while (*haystack != '\0' && len)
	{
		hay = (char *)haystack;
		ndl = (char *)needle;
		n = len--;
		while (*hay == *ndl && n--)
		{
			hay++;
			ndl++;
			if (*ndl == '\0')
				return ((char *)haystack);
		}
		haystack++;
	}
	return (NULL);
}

/* #include <string.h>
#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	// const char	test1[] = "cabana azul, banana doce";
	//const char	test2[] = "azul";
	//char	*res;
	//char	*resft;
	
	//res = strnstr(test1, test2, 15);
	//resft = ft_strnstr(test1, test2, 15);
	//printf("orig: %s\n", res);
	//printf(" ft_: %s\n", resft);

	char	i = -1;
	char haystack[30] = "aaabcabcd";
	while (i++ < 10)
		printf("i: %i; %s\n", i, ft_strnstr(haystack, "cd", i));
	
} */