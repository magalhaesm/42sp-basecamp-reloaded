/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdias-ma <mdias-ma@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 19:47:39 by mdias-ma          #+#    #+#             */
/*   Updated: 2022/05/29 21:47:39 by mdias-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_display_file.h"

int	main(int argc, char *argv[])
{
	if (argc < 2)
		ft_putstr_fd("File name missing.\n", STDERR_FILENO);
	else if (argc > 2)
		ft_putstr_fd("Too many arguments.\n", STDERR_FILENO);
	else
	{
		ft_display_file(argv[1]);
		return (EXIT_SUCESS);
	}
	return (EXIT_FAILURE);
}
