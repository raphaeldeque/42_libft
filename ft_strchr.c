/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoura-r <rmoura-r@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 21:39:31 by rmoura-r          #+#    #+#             */
/*   Updated: 2022/06/14 22:01:46 by rmoura-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s != '\0')
		if (*s++ == c)
			return (char *)--s;	////// testar buscando o \0 (nao deve dar)
	return (NULL);
}

#include <string.h>
#include <stdio.h>

int	main(void)
{
	char	test[] = "cabana azul";
	char	*res;
	char	*resft;
	
	res = strchr(test, 'z');
	resft = ft_strchr(test, 'z');
	printf("c: %c\nstr: %s\n", res[0], res);
	printf("c: %c\nstr: %s\n", resft[0], resft);

}