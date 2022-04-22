/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leda-sil <leda-sil@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 02:57:25 by leda-sil          #+#    #+#             */
/*   Updated: 2022/04/19 15:58:35 by leda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;
	int	flag;

	i = 0;
	j = 0;
	if (to_find[i] == '\0')
		return (&str[i]);
	while (str[i] != '\0')
	{
		if (str[i] == to_find[j])
		{
			flag = 1;
			j++;
		}
		else
		{
			flag = 0;
			j = 0;
		}
		i++;
		if (to_find[j] == '\0' && flag == 1)
			return (&str[i - j]);
	}
	return ('\0');
}
