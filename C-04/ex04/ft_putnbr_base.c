/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leda-sil <leda-sil@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 00:11:09 by leda-sil          #+#    #+#             */
/*   Updated: 2022/04/23 03:30:55 by leda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	check_base(char *str)
{
	int	i;
	int	j;
	int	size;

	size = ft_strlen(str);
	i = 0;
	while (i < size - 1)
	{
		j = i + 1;
		while (j < size)
		{
			if (str[i] == str[j])
				return (0);
			j++;
		}
		if (str[i] == '-' || str[i] == '+')
			return (0);
		i++;
	}
	if (str[i] == '-' || str[i] == '+')
		return (0);
	return (size);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		tam;
	int		dig;
	long	nbr_l;

	tam = check_base(base);
	nbr_l = nbr;
	if (tam > 1)
	{
		if (nbr_l < 0)
		{
			ft_putchar('-');
			nbr_l *= -1;
		}
		if (nbr_l > 0)
		{
			dig = nbr_l % tam;
			nbr_l = nbr_l / tam;
			if (nbr_l > 0)
				ft_putnbr_base(nbr_l, base);
			ft_putchar(base[dig]);
		}
	}
}
