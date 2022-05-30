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

int	main(int argc, char **argv)
{
	if (argc < 2)
		log_error(NO_ARGS);
	else if (argc > 2)
		log_error(MANY_ARGS);
	else
	{
		if (ft_display_file(argv[1]) == -1)
			log_error(UNREADABLE);
		else
			return (EXIT_SUCESS);
	}
	return (EXIT_FAILURE);
}
