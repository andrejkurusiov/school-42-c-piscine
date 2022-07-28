/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akurusio <akurusio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 12:05:37 by akurusio          #+#    #+#             */
/*   Updated: 2022/07/14 13:37:03 by akurusio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_df.h"

#define BUF_SIZE	30

// prints out a file with fd file descriptor
void	display_file(int fd, int stdinput)
{
	int		ret;
	char	buf[BUF_SIZE + 1];

	ret = read(fd, buf, BUF_SIZE);
	while (ret)
	{
		buf[ret] = '\0';
		ft_putstr(buf, 1);
		ret = read(fd, buf, BUF_SIZE);
	}
	if (!stdinput)
		close(fd);
}

// display file not found error
void	no_file_err(char *path)
{
	ft_putstr("cat: ", 2);
	ft_putstr(path, 2);
	ft_putstr(": No such file or directory\n", 2);
}

// Create a program called ft_cat which does the same thing as the system’s
// cat command-line. You don’t have to handle options.
// The cat utility reads files sequentially, writing them to the
// standard output.
// The file operands are processed in command-line order.
// If file is a single dash (`-') or absent, cat reads from the standard input.
// If file is a UNIX domain socket, cat connects to it
// and then reads it until EOF.
int	main(int argc, char **argv)
{
	int	fd;
	int	i;

	i = 0;
	while (i < argc)
	{
		if (argc == 1 || argv[i][0] == '-')
			display_file(STDIN_FILENO, 1);
		else
		{
			if (i > 0)
			{
				fd = open(argv[i], O_RDONLY);
				if (fd != -1)
					display_file(fd, 0);
				else
					no_file_err(argv[i]);
			}
		}
		i++;
	}
	return (0);
}
