/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncruz-ga <ncruz-ga@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 18:47:32 by ncruz-ga          #+#    #+#             */
/*   Updated: 2023/02/08 13:20:51 by ncruz-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	index;

	index = 'z';
	while (index >= 'a')
	{
		write (1, &index, 1);
		index--;
	}
}
/*
int	main(void)
{
	ft_print_reverse_alphabet();
	return (0);
}
*/
