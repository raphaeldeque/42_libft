/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoura-r <rmoura-r@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 21:22:12 by rmoura-r          #+#    #+#             */
/*   Updated: 2022/06/18 20:28:28 by rmoura-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*hay;
	char	*ndl;

	if (*needle == '\0')
		return ((char *)haystack);
	while (*haystack != '\0' && len--)
	{
		hay = (char *)haystack;
		ndl = (char *)needle;
		while (*hay == *ndl && *ndl)
		{
			hay++;
			ndl++;
		}
		if (*ndl == '\0')
			return ((char *)haystack);
		haystack++;
	}
	return (0);
}

/* #include <string.h>
#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	const char	test1[] = "cabana azul, banana doce";
	const char	test2[] = "banana";
	char	*res;
	char	*resft;
	
	res = strnstr(test1, test2, strlen(test1));
	resft = ft_strnstr(test1, test2, strlen(test1));
	printf("orig: %s\n", res);
	printf(" ft_: %s\n", resft);
} */