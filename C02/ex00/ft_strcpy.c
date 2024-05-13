/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncruz-ga <ncruz-ga@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 11:57:29 by ncruz-ga          #+#    #+#             */
/*   Updated: 2023/02/15 19:55:47 by ncruz-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	a;

	a = 0;
	while (src[a] != '\0')
	{
		dest[a] = src[a];
		a++;
	}
	dest [a] = '\0';
	return (dest);
}
/*
#include <stdio.h>

int	main(void)
{
	char	dest[5];
	char	*src;

	src = "Hello";
	printf("Cadena1: %s\n", src);
	ft_strcpy(dest, src);
	printf("cadena2: %s\n", dest);
	return(0);
}
*/
