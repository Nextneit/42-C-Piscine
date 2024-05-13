/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncruz-ga <ncruz-ga@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 10:36:35 by ncruz-ga          #+#    #+#             */
/*   Updated: 2023/02/20 15:16:20 by ncruz-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	a;
	int	b;

	a = 0;
	b = 0;
	while (dest[a])
		a++;
	while (src[b])
		dest[a++] = src[b++];
	dest[a] = '\0';
	return (dest);
}
/*
#include<stdio.h>

int	main(void)
{
	char dest[50] = "Hola";
	char src[] = " como estas";

	printf("%s", ft_strcat(dest, src));
	return (0);
}
*/
