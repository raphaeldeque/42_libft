/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoura-r <rmoura-r@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 22:09:25 by rmoura-r          #+#    #+#             */
/*   Updated: 2022/06/23 17:39:07 by rmoura-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int	len;

	if (!s1 || !set)
		return (NULL);
	while (*s1 && ft_strchr(set, *s1))
		s1++;
	len = ft_strlen(s1);
	while (len && ft_strchr(set, s1[len - 1]))
		len--;
	return (ft_substr(s1, 0, len));
}

/* #include <stdio.h>
#include <string.h>

int main(void)
{
	char s1[] = "12399bom dia 456 testando 78 som--9999123";
	char s2[] = "123456789";
	
	printf("\n%s\n\n", ft_strtrim(s1, s2));

//	printf("res: %i\ncat: %s\n", res, s3);

}
 */