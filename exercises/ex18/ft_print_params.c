/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdias-ma <mdias-ma@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 23:32:31 by mdias-ma          #+#    #+#             */
/*   Updated: 2022/05/25 16:45:03 by mdias-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
static void	ft_putstr(char *str);

int	ft_print_params(int argc, char **argv)
{
	int		i;
	char	*str;

	if (argc > 1)
	{
		i = 1;
		while (i < argc)
		{
			str = argv[i];
			ft_putstr(str);
			i++;
		}
	}
	return (0);
}

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		ft_putchar(*str++);
	}
	ft_putchar('\n');
}
