/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcuriel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 23:58:05 by lcuriel           #+#    #+#             */
/*   Updated: 2024/08/15 23:13:49 by lcuriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_put(int a, int b, int c)
{
	char	x;

	x = a + '0';
	write(1, &x, 1);
	x = b + '0';
	write(1, &x, 1);
	x = c + '0';
	write(1, &x, 1);
}

void	ft_print_comb(void)
{
	int	a;
	int	b;
	int	c;

	a = 0;
	while (a <= 9)
	{
		b = a + 1;
		while (b <= 9)
		{
			c = b + 1;
			while (c <= 9)
			{
				ft_put (a, b, c);
				if (a != b || b != c)
					if (a != 7 || b != 8 || c != 9)
						write(1, ", ", 2);
				c++;
			}
			b++;
		}
		a++;
	}
}

/*int	main(void)
{
	ft_print_comb();
	return (0);
}*/
