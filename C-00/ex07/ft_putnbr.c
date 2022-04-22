/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leda-sil <leda-sil@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 02:15:44 by leda-sil          #+#    #+#             */
/*   Updated: 2022/04/13 21:49:41 by leda-sil         ###   ########.fr       */
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
		ft_putchar(50);
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

int main (){
	int n;
	
	n = 2447483648;
	ft_putnbr(n);
}
