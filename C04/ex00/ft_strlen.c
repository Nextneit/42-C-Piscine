/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncruz-ga <ncruz-ga@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 15:21:26 by ncruz-ga          #+#    #+#             */
/*   Updated: 2023/02/20 15:29:28 by ncruz-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	counter;

	counter = 0;
	while (*str != '\0')
	{
		str++;
		counter++;
	}
	return (counter);
}
/*
#include<stdio.h>

int	main(void)
{
	char	str[] = "Hola qlq";
	char	*ptr_str;
	char	counter;

	ptr_str = str;
	counter = ft_strlen(ptr_str);
	printf ("%d", counter);
	return (0);
}
*/
