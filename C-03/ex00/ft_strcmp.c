/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leda-sil <leda-sil@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 15:31:38 by leda-sil          #+#    #+#             */
/*   Updated: 2022/04/18 21:48:25 by leda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	flag;
	int	i;

	flag = 0;
	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && flag == 0)
	{
		if (s1[i] != s2[i])
		{
			flag = 1;
		}
		else
		{
			i++;
		}
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
