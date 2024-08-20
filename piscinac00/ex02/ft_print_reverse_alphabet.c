/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcuriel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/09 12:21:56 by lcuriel           #+#    #+#             */
/*   Updated: 2024/08/13 14:00:16 by lcuriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	int	i;

	i = 'z' + 1 ;
	while (i != 'a')
	{
		i--;
		write(1, &i, 1);
	}
}

/*int	main (void)
{
	ft_print_reverse_alphabet();
}*/
