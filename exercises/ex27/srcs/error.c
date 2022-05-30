/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdias-ma <mdias-ma@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 00:38:36 by mdias-ma          #+#    #+#             */
/*   Updated: 2022/05/30 01:08:47 by mdias-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_display_file.h"

char	*err_msg(int err)
{
	char	*msg[3];

	msg[NO_ARGS] = "File name missing.";
	msg[UNREADABLE] = "Cannot open this file.";
	msg[MANY_ARGS] = "Too many arguments.";
	return (msg[err]);
}

void	log_error(int err)
{
	ft_putstr_fd(err_msg(err), STDERR_FILENO);
	ft_putstr_fd("\n", STDERR_FILENO);
}
