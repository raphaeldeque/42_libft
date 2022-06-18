/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoura-r <rmoura-r@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 19:28:26 by rmoura-r          #+#    #+#             */
/*   Updated: 2022/06/17 21:15:37 by rmoura-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	while (n--)
		if (*(unsigned char *)s1++ != *(unsigned char *)s2++)
			return (*(unsigned char *)--s1 - *(unsigned char *)--s2);
	return (0);
}

/* #include <string.h>
#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	char	*test1;
	char	*test2;
	int	res;
	int	resft;
	
	test1 = malloc(12);
	test2 = strdup(test1);
	test1 = "cabana azul";
	test2 = "cabana Azul";
	res = memcmp(test1, test2, 12);
	resft = ft_memcmp(test1, test2, 12);
	printf("orig: %i\n", res);
	printf(" ft_: %i\n", resft);

} */
