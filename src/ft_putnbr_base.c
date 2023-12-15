/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yallo <yallo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 13:37:50 by yallo             #+#    #+#             */
/*   Updated: 2023/12/14 16:11:37 by yallo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

void	ft_putnbr_base(long long unsigned int nbr, char *base, int *count, int fd)
{
	int size;

	size = ft_strlen(base);
	if ((int)nbr > (size - 1))
		ft_putnbr_base((nbr / size), base, count, fd);
	ft_putchar(base[nbr % size], count, fd);
}
