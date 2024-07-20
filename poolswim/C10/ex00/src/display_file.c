/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_file.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 19:30:03 by mlee              #+#    #+#             */
/*   Updated: 2024/07/14 20:24:25 by mlee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include "unistd.h"

int	main(int argc, char **argv)
{
	int		fd;
	char	c;

	fd = open(argv[1], O_RDONLY);
	if (argc < 2)
		return (write(2, "File name missing.\n", 19));
	else if (argc > 2)
		return (write(2, "Too many arguments.\n", 20));
	else if (fd < 0)
		return (write(2, "Cannot read file.\n", 18));
	while (read(fd, &c, 1))
		write(1, &c, 1);
	close(fd);
	return (0);
}
