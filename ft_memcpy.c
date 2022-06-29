/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoura-r <rmoura-r@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 02:33:54 by rmoura-r          #+#    #+#             */
/*   Updated: 2022/06/28 20:46:50 by rmoura-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char		*dst_c;
	const char	*src_c;

	if (!dst && !src)
		return (dst);
	dst_c = dst;
	src_c = src;
	while (n--)
		*dst_c++ = *src_c++;
	return (dst);
}

/* #include <stdio.h>
#include <string.h>
#include <stdlib.h>
int	main(void)
{
	char	str[10] = "teste123";
//	char	dest01[20];
	char	dest01[20];
	char	*destft;
	destft = malloc(sizeof(char)*20 + 1);

//	dest = {0};
//	printf("dest01: %s\n", dest01);
	memcpy(dest01, str, 4);
	ft_memcpy(destft, str, 4);
	printf("dest01: %s\n", dest01);
	printf("destft: %s\n", destft);
	
	return (0);
} */

/* 	char		*dst_c;
	const char	*src_c;

	if (!dst)
		return (dst);
	dst_c = dst;
	src_c = src;
	while (n--)
		*dst_c++ = *src_c++;
	return (dst);
} 

	char		*dst_c;
	const char	*src_c;
	size_t		i;

	if (!dst)
		return (dst);
	dst_c = dst;
	src_c = src;
	i = -1;
	while (++i <= n)
		dst_c[i] = src_c[i];
	return (dst);
}*/