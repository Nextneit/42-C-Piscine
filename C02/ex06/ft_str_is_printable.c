/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncruz-ga <ncruz-ga@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 21:04:59 by ncruz-ga          #+#    #+#             */
/*   Updated: 2023/02/19 12:44:54 by ncruz-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	a;

	a = 0;
	while (str[a] != '\0')
	{
		if (str[a] < 32 || str[a] > 126)
			return (0);
		a++;
	}
	return (1);
}
/*
#include<stdio.h>

int	main(void)
{
	char	str[] = " jbfdhisbdfiuojqeifi72y487";
	printf("cdena: %d\n", ft_str_is_printable(str));
}
*/
