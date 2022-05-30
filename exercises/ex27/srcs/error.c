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

char	*str_err(int errnum)
{
	char	*err_list[3];

	err_list[NO_ARGS] = "File name missing.";
	err_list[FILE_ERR] = "Cannot handle this file properly.";
	err_list[MANY_ARGS] = "Too many arguments.";
	return (err_list[errnum]);
}

void	log_error(int errnum)
{
	ft_putstr_fd(BOLD_RED, STDERR_FILENO);
	ft_putstr_fd(str_err(errnum), STDERR_FILENO);
	ft_putstr_fd("\n", STDERR_FILENO);
	ft_putstr_fd(RESET, STDERR_FILENO);
}
