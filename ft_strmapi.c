/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoura-r <rmoura-r@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 21:27:44 by rmoura-r          #+#    #+#             */
/*   Updated: 2022/06/28 17:53:21 by rmoura-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*res;

	res = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!res)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		res[i] = f(i, s[i]);
		i++;
	}
	res[i] = '\0';
	return (res);
}

/* char plus32(unsigned int i, char c)
{
	if (i % 2 == 0)
		return (c+32);
	else
		return (c);
}

#include <stdio.h>

int	main(void)
{
	char *str;
	char *str2;
	
	str = "TEST ONE TWO THREE ABCD       ";
	str2 = " TEST ONE TWO THREE ABCD       ";
	printf("%s\n", ft_strmapi(str, plus32));
	printf("%s\n", ft_strmapi(str2, plus32));
	return (0);
} */