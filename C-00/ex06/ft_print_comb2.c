/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leda-sil <leda-sil@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 02:14:58 by leda-sil          #+#    #+#             */
/*   Updated: 2022/04/11 02:41:39 by leda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_printstr(int first, int second)
{
	int	i;
	int	j;
	int	k;
	int	l;

	i = first / 10 + 48;
	j = first % 10 + 48;
	k = second / 10 + 48;
	l = second % 10 + 48;
	ft_putchar(i);
	ft_putchar(j);
	ft_putchar(' ');
	ft_putchar(k);
	ft_putchar(l);
	if (! (i == 57 && j == 56 && k == 57 && l == 57))
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb2(void)
{
	int	first;
	int	second;

	first = 0;
	second = 1;
	while (first <= 98)
	{
		while (second <= 99)
		{
			ft_printstr(first, second);
			second++;
		}
		first++;
		second = first + 1;
	}
}
