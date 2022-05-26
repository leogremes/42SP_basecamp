/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leda-sil <leda-sil@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 17:04:22 by leda-sil          #+#    #+#             */
/*   Updated: 2022/05/25 17:32:52 by leda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int (*f)(char *))
{
	int	i;
	int	counter;

	i = 0;
	counter = 0;
	while (tab[i])
	{
		if (f (tab[i]) == 1)
			counter++;
		i++;
	}
	return (counter);
}
