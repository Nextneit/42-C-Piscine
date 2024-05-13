/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncruz-ga <ncruz-ga@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 12:23:32 by ncruz-ga          #+#    #+#             */
/*   Updated: 2023/02/08 13:22:19 by ncruz-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	int		index;

	index = '0';
	while (index <= '9')
	{
		write (1, &index, 1);
		index++;
	}
}
/*
int	main(void)
{
	ft_print_numbers();
	return (0);
}
*/
