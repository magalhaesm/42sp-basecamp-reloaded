/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdias-ma <mdias-ma@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 19:59:58 by mdias-ma          #+#    #+#             */
/*   Updated: 2022/05/30 11:19:07 by mdias-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_display_file.h"

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
	if (fd < 0)
		return (fd);
	return (EXIT_SUCCESS);
}
