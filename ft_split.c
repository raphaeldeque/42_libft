/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoura-r <rmoura-r@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 17:40:38 by rmoura-r          #+#    #+#             */
/*   Updated: 2022/06/23 18:14:14 by rmoura-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_n_cell(const char *str, char c)
{
	int	i;
	int	cell;

	cell = 0;
	i = -1;
	while (str[++i] != '\0')
	{
		if (str[i + 1] == c || str[i + 1] == '\0')
			if (str[i] != c)
				cell++;
	}
	return (cell);
}

static int	ft_cellcpy(char **res, const char *str, char c)
{
	int	cell;
	int	len;
	int	i;

	cell = 0;
	len = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] != c)
		{
			len = 0;
			while (str[i + len] != '\0' && str[i + len] != c)
				len++;
			res[cell] = malloc(sizeof(char) * (len + 1));
			if (!res[cell])
				return (0);
			ft_strlcpy(res[cell], &str[i], (len + 1));
			cell++;
			i = i + len;
		}
		else
			i++;
	}
	return (1);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	int		cells;

	cells = ft_n_cell(s, c);
	res = malloc(sizeof(char *) * (cells + 1));
	if (!res)
		return (NULL);
	res[cells] = NULL;
	if (!ft_cellcpy(res, s, c))
		return (NULL);
	return (res);
}

/* #include <stdio.h>

int	main(void)
{
	char	*str = "laranjabahia na promocao";
	char	sep = 'r';
	char	**res = ft_split(str, sep);
	int		i;

	i = 0;
	while (res[i] != NULL)
	{
		printf("tab[%i]:%s\n",i,res[i]);
		i++;
	}
	printf("__[%i]:%s\n",i,res[i]);
	// i++;
	// printf("tab[%i]:%s\n",i,res[i]);
	return (0);
} */