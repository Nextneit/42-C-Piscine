/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncruz-ga <ncruz-ga@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 17:23:24 by ncruz-ga          #+#    #+#             */
/*   Updated: 2023/02/13 12:30:34 by ncruz-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

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
int	main(void)
{
	char	str[] = "Hello world";
	char	*ptr_str;
	int		counter;

	ptr_str = str;
	counter = ft_strlen(ptr_str);
	printf ("%d", counter);
	return (0);
}
*/
