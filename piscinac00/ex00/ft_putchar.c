/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcuriel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/09 02:53:10 by lcuriel           #+#    #+#             */
/*   Updated: 2024/08/13 13:22:26 by lcuriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h> 

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

/*int	main(void)
{ 
	ft_putchar('l');
	ft_putchar('m');
}*/
