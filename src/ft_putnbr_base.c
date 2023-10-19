/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yallo <yallo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 13:37:50 by yallo             #+#    #+#             */
/*   Updated: 2023/10/20 01:04:26 by yallo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

void	ft_putnbr_base(long long unsigned int nbr, long long unsigned int size, \
char *base, int *count, int fd)
{
	if (nbr > (size - 1))
		ft_putnbr_base((nbr / size), size, base, count, fd);
	ft_putchar(base[nbr % size], count, fd);
}
