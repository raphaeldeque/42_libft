/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoura-r <rmoura-r@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 21:39:31 by rmoura-r          #+#    #+#             */
/*   Updated: 2022/06/15 21:48:06 by rmoura-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	while (*s != c)
		if (!*s++)
			return (0);
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