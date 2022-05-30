/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdias-ma <mdias-ma@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 13:28:55 by mdias-ma          #+#    #+#             */
/*   Updated: 2022/05/29 17:21:37 by mdias-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int(*f)(char*))
{
	int	i;
	int elements;

	i = 0;
	elements = 0;
	while (tab[i])
	{
		if (f(tab[i]) != 0)
			elements++;
		i++;
	}
	return (elements);
}
