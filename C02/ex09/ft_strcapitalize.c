/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncruz-ga <ncruz-ga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 12:50:29 by ncruz-ga          #+#    #+#             */
/*   Updated: 2023/02/19 13:35:57 by ncruz-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	a;
	int	b;

	a = 0;
	b = 1;
	while (str[a] != '\0' && str[b] != '\0')
	{
		if (b == 1 && str[a] >= 'a' && str[a] <= 'z')
			str[a] -= 32;
		else if (b == 0 && str[a] >= 'A' && str[a] <= 'Z')
			str[a] += 32;
		if (str[a] < '0' || (str[a] > '9' && str[a] < 'A') || (str[a] > 'Z'
				&& str[a] < 'a') || str[a] > 122)
			b = 1;
		else
			b = 0;
		a++;
	}
	return (str);
}
/*
 #include <stdio.h>

int	main(void)
{
	char str[] = "salut, comment tu vAs ? 42mots quarante-deux; cinquante+et+un";

	ft_strcapitalize(str);
	printf("%s", str);
	return (0);
} 
*/
