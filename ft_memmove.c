/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoura-r <rmoura-r@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 02:33:54 by rmoura-r          #+#    #+#             */
/*   Updated: 2022/06/09 18:17:35 by rmoura-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*dst_c;
	const char	*src_c;

	if (!dst)
		return (dst);
	dst_c = dst;
	src_c = src;
	if (src_c < dst_c && src_c + len > dst_c)
	{
		dst_c += len;
		src_c += len;
		while (len--)
			*--dst_c = *--src_c;
	}
	else
		ft_memcpy(dst, src, len);
	return (dst);
}

/* #include <stdio.h>
#include <string.h>

int main ()
{
  char str[] = "memmove can be very useful......";
  ft_memmove(str+20,str+15,11);
  puts (str);
  return 0;
}

int	main(void)
{
	char	str[] = "teste123 abacaxi banana teste fim";
//	char	dest01[20];
//	char	dest01[20];
//	char	*destft;
//	destft = malloc(sizeof(char)*20 + 1);

//	dest = {0};
//	printf("dest01: %s\n", dest01);
	memmove(str+18, str+10, 7);
	ft_memmove(destft, str, 4);
	printf("dest01: %s\n", dest01);
	printf("destft: %s\n", destft);
	
	return (0);
} 
 */