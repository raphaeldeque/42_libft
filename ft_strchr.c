/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoura-r <rmoura-r@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 21:39:31 by rmoura-r          #+#    #+#             */
/*   Updated: 2022/06/24 14:57:31 by rmoura-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s != (unsigned char)c)
		if (!*s++)
			return (NULL);
	return ((char *)s);
}

/* #include <string.h>
#include <stdio.h>

int	main(void)
{
	char	test[] = "cabana azul";
	char	*res;
	char	*resft;
	char	c = 'P';
	
	res = strchr(test, c);
	resft = ft_strchr(test, c);
	printf("orig: %s\n", res);
	printf(" ft_: %s\n", resft);

} */