/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcuriel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 21:22:52 by lcuriel           #+#    #+#             */
/*   Updated: 2024/08/19 14:39:10 by lcuriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_put(int a)
{
	char	c;

	if (a < 10)
	{
		c = '0' + a;
		write(1, "0", 1);
		write(1, &c, 1);
	}
	else
	{
		c = '0' + a / 10;
		write (1, &c, 1);
		c = '0' + a % 10;
		write(1, &c, 1);
	}
}

void	ft_print_comb2(void)
{
	int	x;
	int	y;

	x = 0;
	y = 0;
	while (x <= 98)
	{
		y = x + 1;
		while (y <= 99)
		{
			ft_put (x);
			write (1, " ", 1);
			ft_put (y);
			if (!(x == 98 && y == 99))
				write(1, ", ", 2);
			else
				write (1, "\n", 1);
			y++;
		}
		x++;
	}
}

/*int	main(void)
{
	ft_print_comb2();
}*/
