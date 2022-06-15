/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoura-r <rmoura-r@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 16:07:51 by rmoura-r          #+#    #+#             */
/*   Updated: 2022/06/14 19:12:07 by rmoura-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = ft_strlen(dst);
	if (dstsize <= j)
		return (dstsize + ft_strlen(src));
	while (src[i] != '\0' && dstsize > j + 1)
	{
		dst[j] = src[i];
		j++;
		i++;
	}
	dst[j] = '\0';
	return (ft_strlen(dst) + ft_strlen(&src[i]));
}

/* 
#include <stdio.h>
#include <string.h>


int main(void)
{
	int res = 0;
	int res2 = 0;
	char s2[20] = "+-FGHIJKLMNOP";

	int a = 0;

	while (a++ < 20)
	{
		char s[20] = "ABCDE";
		char s1[20] = "ABCDE";
		
		res = ft_strlcat(s, s2, a);
		res2 = strlcat(s1, s2, a);
		printf(" ft_: %s\t%i\n", s, res);
		printf("orig: %s\t%i\n", s1, res2);
	}

} */