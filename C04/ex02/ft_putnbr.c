/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncruz-ga <ncruz-ga@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 15:36:15 by ncruz-ga          #+#    #+#             */
/*   Updated: 2023/02/20 15:50:04 by ncruz-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putchar ('-');
		ft_putchar ('2');
		nb = 147483648;
	}
	if (nb < 0)
	{
		ft_putchar ('-');
		nb *= -1;
	}
	if (nb >= 0 && nb <= 9)
	{
		ft_putchar (nb + '0');
	}
	else
	{
		ft_putnbr (nb / 10);
		ft_putnbr (nb % 10);
	}
}
/*
int	main(void)
{
	ft_putnbr (42);
	return (0);
}
*/
