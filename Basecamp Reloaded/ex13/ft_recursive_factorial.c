/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leda-sil <leda-sil@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 21:25:30 by leda-sil          #+#    #+#             */
/*   Updated: 2022/05/20 21:45:19 by leda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	fact;

	if (nb == 0 || nb == 1)
		fact = 1;
	else if (nb > 1 && nb < 13)
	{
		fact = nb * ft_recursive_factorial(nb - 1);
	}
	else
		fact = 0;
	return (fact);
}
