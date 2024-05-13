/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncruz-ga <ncruz-ga@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 13:08:05 by ncruz-ga          #+#    #+#             */
/*   Updated: 2023/02/08 13:29:34 by ncruz-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_write(char c)
{
	write (1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_write ('-');
		ft_write ('2');
		nb = 147483648;
	}
	if (nb < 0)
	{
		ft_write ('-');
		nb *= -1;
	}
	if (nb >= 0 && nb <= 9)
	{
		ft_write (nb + '0');
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
