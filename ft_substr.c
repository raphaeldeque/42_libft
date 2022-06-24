/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoura-r <rmoura-r@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 18:52:05 by rmoura-r          #+#    #+#             */
/*   Updated: 2022/06/24 17:22:12 by rmoura-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;

	if (start > ft_strlen(s))
		start = ft_strlen(s);
	if (len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	substr = malloc(sizeof(char) * len + 1);
	if (!s || !substr)
		return (NULL);
	ft_strlcpy(substr, s + start, len + 1);
	return (substr);
}

//	printf("start_00: %i\n  len_00: %zu\n", start, len);

/* #include <string.h>
#include <stdio.h>

int	main(void)
{
	const char	test[] = "cabana";
	char	*res;
	int		len = 4;
	int		start = 6;
	
	res = ft_substr(test, start, len);
	printf(" ft_: %s\n", res);

} */
