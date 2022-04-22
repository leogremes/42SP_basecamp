/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leda-sil <leda-sil@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 17:09:04 by leda-sil          #+#    #+#             */
/*   Updated: 2022/04/21 16:26:31 by leda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	int	i;

	if (nb == -2147483648) //2147483647
	{
		ft_putchar('-');
		ft_putchar('2');
		nb = 147483648;
	}
	else if (nb < 0)
	{
		ft_putchar('-');
		nb = nb * (-1);
	}
	else if (nb == 0)
		ft_putchar(0 + 48);
	if (nb > 0)
	{
		i = nb % 10;
		nb = nb / 10;
		if (nb > 0)
		{
			ft_putnbr(nb);
		}
		ft_putchar(i + 48);
	}
}
