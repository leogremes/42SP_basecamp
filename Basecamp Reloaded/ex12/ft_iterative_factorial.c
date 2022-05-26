/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leda-sil <leda-sil@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 17:05:49 by leda-sil          #+#    #+#             */
/*   Updated: 2022/05/20 19:07:06 by leda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	fact;

	if (nb < 0)
		fact = 0;
	else
	{
		fact = 1;
		while (nb >= 1 && fact > 0)
		{
			if (2147483647 / fact < nb)
				fact = 0;
			fact *= nb;
			nb--;
		}
	}
	return (fact);
}
