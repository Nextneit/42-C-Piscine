/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncruz-ga <ncruz-ga@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 15:50:32 by ncruz-ga          #+#    #+#             */
/*   Updated: 2023/02/21 12:44:11 by ncruz-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	a;
	int num;
	int sign;

	a = 0;
	num = 0;
	sign = 1;
	while (str[a] == 32 || (str[a] >= 9 && str[a] <= 13))
		a++;
	while (str[a] == '+' || str[a] == '-')
	{
		if (str[a] == '-')
			sign *= -1;
		a++;
	}
	while (str[a] && (str[a] >= '0' && str[a] <= '9'))
	{
		num = num * 10 + (str[a] - '0');
		a++;
	}
	return (sign * num);
}

#include<stdio.h>

int	main (void)
{
	char s[] = " +-+---+7725abu22222";

	printf("%d ", ft_atoi(s));
	return (0);
}

