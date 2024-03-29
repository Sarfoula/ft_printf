/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yallo <yallo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 11:16:53 by yallo             #+#    #+#             */
/*   Updated: 2023/10/20 00:58:44 by yallo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

void	ft_putchar(int c, int *count, int fd)
{
	if (*count == -1)
		return ;
	if (write(fd, &c, 1) == -1)
		*count = -1;
	else
		*count = *count + 1;
}
