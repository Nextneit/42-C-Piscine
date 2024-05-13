/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncruz-ga <ncruz-ga@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 14:25:51 by ncruz-ga          #+#    #+#             */
/*   Updated: 2023/02/08 13:18:46 by ncruz-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	index;

	index = 'a';
	while (index <= 'z')
	{
		write (1, &index, 1);
		index++;
	}
}
/*
int	main(void)
{
	ft_print_alphabet();
	return (0);
}
*/
