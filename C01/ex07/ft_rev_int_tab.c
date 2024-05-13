/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncruz-ga <ncruz-ga@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 15:10:45 by ncruz-ga          #+#    #+#             */
/*   Updated: 2023/02/14 11:49:53 by ncruz-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	aux;
	int	pos;

	pos = 0;
	while (pos < size)
	{
		aux = tab[pos];
		tab[pos] = tab[size - 1];
		tab[size - 1] = aux;
		pos++;
		size--;
	}
}
/*
int	main(void)
{
	int	arr_int[5] = {1, 2, 3, 4, 5};
	int	size;
	int	pos;

	size = 5;
	pos = 0;
	ft_rev_int_tab (arr_int, size);
	printf("Array = [");
	while (pos < size)
	{
		if (pos < (size - 1))
			printf("%d", arr_int[pos]);
		else
			printf("%d", arr_int[pos]);
		pos++;
	}
	printf("]\n");
}
*/
