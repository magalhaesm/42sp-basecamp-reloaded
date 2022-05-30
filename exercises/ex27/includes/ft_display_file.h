/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdias-ma <mdias-ma@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 19:59:48 by mdias-ma          #+#    #+#             */
/*   Updated: 2022/05/30 11:55:20 by mdias-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_DISPLAY_FILE_H
# define FT_DISPLAY_FILE_H

# include <unistd.h>
# include <fcntl.h>

# ifndef EXIT_SUCCESS
#  define EXIT_SUCCESS 0
# endif

# ifndef EXIT_FAILURE
#  define EXIT_FAILURE 1
# endif

# define RESET "\033[m"
# define BOLD_RED "\033[1;31m"

enum e_error {
	NO_ARGS = 0,
	FILE_ERR = 1,
	MANY_ARGS = 2,
};

void	ft_putstr_fd(char *s, int fd);
int		ft_display_file(char *pathname);
char	*str_err(int errnum);
void	log_error(int errnum);

#endif
