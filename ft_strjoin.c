/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoura-r <rmoura-r@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 21:12:25 by rmoura-r          #+#    #+#             */
/*   Updated: 2022/06/28 17:54:09 by rmoura-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*cat;
	size_t	len1;
	size_t	len2;

	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	cat = malloc(sizeof(char) * (len1 + len2 + 1));
	if (!cat)
		return (NULL);
	ft_memcpy(cat, s1, len1);
	ft_memcpy(cat + len1, s2, len2);
	cat[len1 + len2] = '\0';
	return (cat);
}

/* #include <stdio.h>
#include <string.h>

	//if (!s1 || !s2)
	//	return (NULL);

int main(void)
{
	char *s1 = "abcd6-----------------------yyyy0";
	char *s2 = "528/-66--------000000000----6611__++";
	char s3[11];
	
	printf("\n%s\n\n", ft_strjoin(s1, s2));

	int res = ft_strlcat(s3, s1, 11);
	ft_strlcat(s3, s2, 22);

	printf("res: %i\ncat: %s\n", res, s3);

} */