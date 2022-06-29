/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoura-r <rmoura-r@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 21:03:35 by rmoura-r          #+#    #+#             */
/*   Updated: 2022/06/29 17:17:10 by rmoura-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	len;

	len = ft_strlen(s);
	s += len;
	while (*s-- != (unsigned char)c)
		if (!len--)
			return (NULL);
	return ((char *)++s);
}

/* #include <string.h>
#include <stdio.h>

int	main(void)
{
	char	str2[] = "bonjour";
//	char	*res;
//	char	*resft;
	char	c = 's';
	
	printf("orig: %s\n", strrchr(str2, c));
	printf(" ft_: %s\n", ft_strrchr(str2, c));

} */