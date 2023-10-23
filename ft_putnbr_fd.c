/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmakaro <anmakaro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 12:15:56 by anmakaro          #+#    #+#             */
/*   Updated: 2023/10/21 20:49:49 by anmakaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long int	helpa;

	helpa = n;
	if (helpa < 0)
	{
		ft_putchar_fd('-', fd);
		helpa *= -1;
	}
	if (helpa >= 10)
	{
		ft_putnbr_fd(helpa / 10, fd);
		ft_putchar_fd(helpa % 10 + '0', fd);
	}
	else
		ft_putchar_fd(helpa + '0', fd);
}
