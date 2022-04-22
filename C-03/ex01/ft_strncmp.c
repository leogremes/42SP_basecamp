/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leda-sil <leda-sil@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 20:37:08 by leda-sil          #+#    #+#             */
/*   Updated: 2022/04/22 03:36:08 by leda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	int				flag;

	flag = 0;
	i = 1;
	if (n > 0)
	{
		while ((s1[i] != '\0' || s2[i] != '\0') && flag == 0 && i < n)
		{
			if (s1[i - 1] != s2[i - 1])
			{
				flag = 1;
			}
			else
			{
				i++;
			}
		}
		return ((unsigned char)s1[i - 1] - (unsigned char)s2[i - 1]);
	}
	else
		return (0);
}
