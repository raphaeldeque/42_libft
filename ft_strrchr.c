/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoura-r <rmoura-r@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 21:03:35 by rmoura-r          #+#    #+#             */
/*   Updated: 2022/06/24 14:58:43 by rmoura-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	s += ft_strlen(s);
	while (*s != (unsigned char)c)
		if (!*--s)
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
	char	c = 'b';
	
	res = strrchr(test, c);
	resft = ft_strrchr(test, c);
	printf("orig: %s\n", res);
	printf(" ft_: %s\n", resft);

}
 */