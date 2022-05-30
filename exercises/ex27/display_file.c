/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdias-ma <mdias-ma@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 19:59:58 by mdias-ma          #+#    #+#             */
/*   Updated: 2022/05/29 21:01:06 by mdias-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "display_file.h"

void	ft_putstr_fd(char *s, int fd);
int		ft_display_file(char *pathname);

int	main(int argc, char *argv[])
{
	if (argc < 2)
		ft_putstr_fd("File name missing.\n", STDERR_FILENO);
	else if (argc > 2)
		ft_putstr_fd("Too many arguments.\n", STDERR_FILENO);
	else
	{
		ft_display_file(argv[1]);
		return (0);
	}
	return (1);
}

int	ft_display_file(char *pathname)
{
	int		fd;
	char	buffer;

	fd = open(pathname, O_RDONLY);
	if (fd < 0)
		return (fd);
	while (read(fd, &buffer, 1) > 0)
		write(STDOUT_FILENO, &buffer, 1);
	close(fd);
	return (0);
}

void	ft_putstr_fd(char *s, int fd)
{
	int	len;

	len = 0;
	while (s[len] != '\0')
		len++;
	write(fd, s, len);
}
