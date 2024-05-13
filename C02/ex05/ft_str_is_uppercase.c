/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncruz-ga <ncruz-ga@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 21:00:20 by ncruz-ga          #+#    #+#             */
/*   Updated: 2023/02/19 12:42:38 by ncruz-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	a;

	a = 0;
	while (str[a] != '\0')
	{
		if (str[a] < 65 || str[a] > 90)
			return (0);
		a++;
	}
	return (1);
}
/*
#include<stdio.h>

int	main(void)
{
	char	str[] = "AKNDIHDI";
	printf("cadena: %d\n", ft_str_is_uppercase(str));
}
*/
