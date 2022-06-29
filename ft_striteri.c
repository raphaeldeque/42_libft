/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoura-r <rmoura-r@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 17:57:55 by rmoura-r          #+#    #+#             */
/*   Updated: 2022/06/28 19:22:32 by rmoura-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	if (!s)
		return ;
	i = 0;
	while (*s != '\0')
	{
		f(i, s);
		i++;
		s++;
	}
}

/* void	plus32(unsigned int i, char *str)
{
	if (i % 2 == 0)
		*str += 32;
}

#include <stdio.h>

int	main(void)
{
	char str[] = "TEST ONE TWO THREE ABCD       ";
	char str2[] = " TEST ONE TWO THREE ABCD       ";
	
	printf("%s\n", str);
	printf("%s\n", str2);
	ft_striteri(str, plus32);
	ft_striteri(str2, plus32);
	printf("%s\n", str);
	printf("%s\n", str2);
	return (0);
} */