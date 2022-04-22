/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leda-sil <leda-sil@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 02:16:24 by leda-sil          #+#    #+#             */
/*   Updated: 2022/04/11 02:41:53 by leda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_str(int n, char *str)
{
	int	i;

	i = 0;
	while (i < n)
	{
		ft_putchar(str[i]);
		i++;
	}	
}

void	ft_increment(int n, char *num)
{
	int	i;
	int	j;

	i = n;
	j = 0;
	while (i > 0 && num[i - 1] == 57 - j)
	{
		i--;
		j++;
	}
	if (i == 0)
	{
		num[0] = 58;
	}
	else
	{
		num[i - 1] += 1;
		i += 1;
		while (i <= n)
		{
			num[i - 1] = num[i - 2] + 1;
			i++;
		}
	}
}

void	ft_print_combn(int n)
{
	char	num[10];
	int		i;
	int		contador;

	i = 0;
	contador = 0;
	while (i < n)
	{
		num[i] = '0' + i;
		i++;
	}
	while (num[0] <= 58 - n)
	{
		ft_print_str(n, num);
		ft_increment(n, num);
		contador++;
		if (num[0] <= 58 - n)
		{
			ft_putchar(',');
			ft_putchar(' ');
		}
	}
}
