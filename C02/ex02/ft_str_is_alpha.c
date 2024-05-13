/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncruz-ga <ncruz-ga@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 13:23:16 by ncruz-ga          #+#    #+#             */
/*   Updated: 2023/02/19 16:55:01 by ncruz-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	a;

	a = 0;
	while (str[a] != '\0')
	{
		if ((str[a] < 65 || str[a] > 90) && (str[a] < 97 || str[a] > 122))
			return (0);
		a++;
	}
	return (1);
}

#include<stdio.h>

int	main(void)
{
	char str[] = "";

	printf("Cadena: %d\n", ft_str_is_alpha(str));
}

