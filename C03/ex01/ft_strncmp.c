/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncruz-ga <ncruz-ga@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 16:48:38 by ncruz-ga          #+#    #+#             */
/*   Updated: 2023/02/21 11:34:24 by ncruz-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	a;

	a = 0;
	while ((s1[a] != '\0' && s2[a] != '\0') || (a < n))
	{
		if (s1[a] < s2[a])
			return (-1);
		if (s1[a] > s2[a])
			return (1);
		a++;
	}
	return (0);
}
/*
#include<stdio.h>

int	main(void)
{
	char str1[] = "Hoaa";
	char str2[] = "Hola";
	int	res;

	res = ft_strncmp(str1, str2, 3);
	if (res == 0)
		printf("cadenas iguales");
	else if (res < 0)
		printf("cadena '%s' menor que '%s'", str1, str2);
	else
		printf("cadena '%s' mayor que '%s'", str1, str2);
}
*/
