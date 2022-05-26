/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leda-sil <leda-sil@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 01:09:55 by leda-sil          #+#    #+#             */
/*   Updated: 2022/05/26 23:59:22 by leda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>

int	main(int argc, char **argv)
{
	int		fd;
	char	buf;

	if (argc != 2)
	{
		if (argc < 2)
			write(1, "File name missing.\n", 19);
		if (argc > 2)
			write(1, "Too many arguments.\n", 20);
		return (1);
	}
	else
	{
		fd = open(argv[1], O_RDONLY);
		if (fd == -1)
			return (1);
		while (read(fd, &buf, 1) != 0)
		{
			write(1, &buf, 1);
		}
		close(fd);
	}
	return (0);
}
