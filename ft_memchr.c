/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoura-r <rmoura-r@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 20:58:10 by rmoura-r          #+#    #+#             */
/*   Updated: 2022/06/17 18:35:14 by rmoura-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	while (*(unsigned char *)s && n--)
		if (*(unsigned char *)s++ == (unsigned char)c)
			return ((void *)--s);
	return (0);
}

/* #include <string.h>
#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	char	*test1;// = "cabana azul";
	char	*res;
	char	*resft;
	int		c;
	
	test1 = malloc(12);
	test1 = "cabana azul";
	c = -1;
	while (++c < 150)
	{
		res = memchr(test1, c, 9);
		resft = ft_memchr(test1, c, 9);
		printf("c: %c\norig: %s\n", c, res);
		printf(" ft_: %s\n\n", resft);
	}
	
}
	   
 */