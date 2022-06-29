/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoura-r <rmoura-r@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 19:24:12 by rmoura-r          #+#    #+#             */
/*   Updated: 2022/06/28 19:34:58 by rmoura-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

/* int main(void)
{
	ft_putchar_fd('\n', 1);
	ft_putchar_fd('a', 1);
	ft_putchar_fd('\n', 1);
	ft_putchar_fd('\n', 1);
} */