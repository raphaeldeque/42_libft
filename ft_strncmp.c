/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoura-r <rmoura-r@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 18:35:16 by rmoura-r          #+#    #+#             */
/*   Updated: 2022/06/17 16:59:35 by rmoura-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	while (*s1 && *s2 && n--)
		if (*s1++ != *s2++)
			return (*(unsigned char *)--s1 - *(unsigned char *)--s2);
	return (0);
}

/* #include <string.h>
#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	char	*test1;// = "cabana azul";
	char	*test2;// = "cabana Azul";
	int	res;
	int	resft;
	
	test1 = malloc(12);
	test1 = "cabana azul";
	test2 = strdup(test1);
	test2 = "cabana azol";
//	res = strncmp(test1, test2, strlen(test1));
//	resft = ft_strncmp(test1, test2, strlen(test1));
	res = strcmp(test1, test2);
	resft = ft_strncmp(test1, test2);
	printf("orig: %i\n", res);
	printf(" ft_: %i\n", resft);

}
 */