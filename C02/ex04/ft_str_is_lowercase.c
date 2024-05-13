/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncruz-ga <ncruz-ga@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 20:52:32 by ncruz-ga          #+#    #+#             */
/*   Updated: 2023/02/19 12:40:20 by ncruz-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	a;

	a = 0;
	while (str[a] != '\0')
	{
		if (str[a] < 97 || str[a] > 122)
			return (0);
		a++;
	}
	return (1);
}
/*
#include<stdio.h>

int	main(void)
{
	char	str[] = "asdha usfuyg";
	printf("cadena: %d\n", ft_str_is_lowercase(str));
}
*/
