/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoura-r <rmoura-r@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 22:09:25 by rmoura-r          #+#    #+#             */
/*   Updated: 2022/06/23 16:30:37 by rmoura-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	//char	*trimm;
	int		len;

	if (!s1 || !set)
		return (NULL);
	s1 = ft_strchr(s1, set) + 1;
	len = ft_strlen(s1);
	while ()

	return (ft_substr(s1, 0, len));

// substr remove o trecho do meio
// strchr pela esq
// strrchr pela dir
		
	
	return (trimm);
}