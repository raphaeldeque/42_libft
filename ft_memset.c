/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoura-r <rmoura-r@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 02:33:54 by rmoura-r          #+#    #+#             */
/*   Updated: 2022/06/29 16:41:53 by rmoura-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	char	*ptr;

	ptr = b;
	while (len--)
		*ptr++ = c;
	return (b);
}

/* #include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	main(void)
{
	void *str1;
	void *str2;

	str1 = malloc(20);
	str2 = strdup(str1);
	memset(str1, 'k', 4);
	ft_memset(str2, 'k', 4);
	
	printf("orig: %s\n ft_: %s\n", (char *)str1, (char *)str2);

} */