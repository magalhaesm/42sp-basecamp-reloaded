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

char	*g_errlist[3] = {
[NO_ARGS] = "File name missing.",
[FILE_ERR] = "Cannot properly handle this file.",
[MANY_ARGS] = "Too many arguments.",
};

static char	*strerror(int err_num)
{
	return (g_errlist[err_num]);
}

void	log_error(int err_num)
{
	ft_putstr_fd(strerror(err_num), STDERR_FILENO);
	ft_putstr_fd("\n", STDERR_FILENO);
}
