/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncruz-ga <ncruz-ga@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 12:43:31 by ncruz-ga          #+#    #+#             */
/*   Updated: 2023/02/11 14:04:20 by ncruz-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	cociente;
	int	resto;

	cociente = *a / *b;
	resto = *a % *b;
	*a = cociente;
	*b = resto;
}
/*
int	main(void)
{
	int	*a;
	int	*b;
	int	c;
	int	d;

	c = 42;
	d = 11;
	a = &c;
	b = &d;
	ft_ultimate_div_mod(a, b);
	printf("%d", c);
	printf("%d", d);
	return (0);
}
*/
