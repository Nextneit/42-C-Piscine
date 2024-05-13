/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncruz-ga <ncruz-ga@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 19:57:34 by ncruz-ga          #+#    #+#             */
/*   Updated: 2023/02/19 16:04:52 by ncruz-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	a;

	a = 0;
	while (src[a] != '\0' && a < n)
	{
		dest[a] = src[a];
		a++;
	}
	while (a < n)
	{		
		dest[a] = '\0';
		a++;
	}
	return (dest);
}
/*
#include<stdio.h>

int	main(void)
{
	char	dest[15];
	char	src[] = "Hello";
	char	n;

	n = 3;
	printf("Cadena: %s\n", src);
	ft_strncpy(dest, src, n);
	printf("Cadena2: %s\n", dest);
	return(0);
}
*/
