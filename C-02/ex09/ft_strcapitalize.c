/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leda-sil <leda-sil@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 05:34:50 by leda-sil          #+#    #+#             */
/*   Updated: 2022/04/16 06:17:31 by leda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_alphanum(char c)
{
	int	flag;

	if (c >= '0' && c <= '9')
		flag = 1;
	else if (c >= 'A' && c <= 'Z')
		flag = 2;
	else if (c >= 'a' && c <= 'z')
		flag = 3;
	else
		flag = 0;
	return (flag);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (ft_is_alphanum(str[i - 1]) == 0 || i == 0)
		{
			if (ft_is_alphanum(str[i]) == 3)
				str[i] = str[i] - 32;
		}
		else
		{
			if (ft_is_alphanum(str[i]) == 2)
				str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}
