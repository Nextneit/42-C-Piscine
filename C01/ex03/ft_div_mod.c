/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncruz-ga <ncruz-ga@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 14:18:59 by ncruz-ga          #+#    #+#             */
/*   Updated: 2023/02/11 12:42:32 by ncruz-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
int	main(void)
{
	int	a;
	int	b;
	int	cociente;
	int	resto;
	int	*div;
	int	*mod;

	a = 25;
	b = 2;
	div = &cociente;
	mod = &resto;
	ft_div_mod (a, b, div, mod);
	printf("%d", cociente);
	printf("%d", resto);
	return (0);
}
*/
