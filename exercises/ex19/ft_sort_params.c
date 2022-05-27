/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdias-ma <mdias-ma@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 14:31:48 by mdias-ma          #+#    #+#             */
/*   Updated: 2022/05/26 15:14:05 by mdias-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
void	sort_strings(char **str, int size);
static void		ft_putstr(char *str);
static int		ft_strcmp(char *s1, char *s2);

int	ft_sort_params(int argc, char **argv)
{
	int		i;
	char	*str;

	if (argc > 1)
	{
		sort_strings(argv, argc);
		i = 1;
		while (i < argc)
		{
			str = argv[i++];
			ft_putstr(str);
			ft_putchar('\n');
		}
	}
	return (0);
}

static void		ft_putstr(char *str)
{
	while (*str != '\0')
	{
		ft_putchar(*str++);
	}

}
int	ft_strcmp(char *s1, char *s2)
{
	while ((*s1 && *s2) && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*(unsigned char *)s1 - *(unsigned char *)s2);
}

void	sort_strings(char **str, int size)
{
	int		i;
	int		j;
	char	*tmp;

	i = 1;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (ft_strcmp(str[i], str[j]) > 0)
			{
				tmp = str[i];
				str[i] = str[j];
				str[j] = tmp;
			}
			j++;
		}
		i++;
	}
}
