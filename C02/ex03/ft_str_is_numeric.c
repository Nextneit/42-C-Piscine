/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncruz-ga <ncruz-ga@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 18:23:10 by ncruz-ga          #+#    #+#             */
/*   Updated: 2023/02/19 12:32:16 by ncruz-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	a;

	a = 0;
	while (str[a] != '\0')
	{
		if (str[a] <= 47 || str[a] >= 58)
			return (0);
		a++;
	}
	return (1);
}
/*
#include<stdio.h>

int	main(void)
{
	char	str[] = "2215546854845468484";

	printf("Cadena : %d\n", ft_str_is_numeric(str));
}
*/
