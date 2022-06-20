/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoura-r <rmoura-r@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/18 21:29:15 by rmoura-r          #+#    #+#             */
/*   Updated: 2022/06/20 15:41:07 by rmoura-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	nb;
	int	signal;

	nb = 0;
	signal = 1;
	while ((*str >= 9 && *str <= 13) || *str == 32)
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			signal = -1;
		str++;
	}
	while (ft_isdigit(*str))
	{
		nb = nb * 10 + (*str - '0');
		str++;
	}
	return (nb * signal);
}

/* #include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int	main(void)
{
 	char *txt;
	int i = 0;

	txt = "     402 teste";
	printf("\n%s\n",txt);
	printf("%d\n", ft_atoi(txt));
	printf("%d\n", atoi(txt));

	txt = "---+--+1234ab567";
	printf("\n%s\n",txt);
	printf("%d\n", ft_atoi(txt));
	printf("%d\n", atoi(txt));

	txt = "  +77";
	printf("\n%s\n",txt);
	printf("%d\n", ft_atoi(txt));
	printf("%d\n", atoi(txt));

 	while (i++ < 250)
		if (isspace(i))
			printf("%d: %d\n",i, isspace(i));
	return (0);
}*/