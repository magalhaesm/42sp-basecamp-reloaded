/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdias-ma <mdias-ma@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 13:49:45 by mdias-ma          #+#    #+#             */
/*   Updated: 2022/05/25 14:30:46 by mdias-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	sqrt;
	int	tmp;

	if (nb < 0 || nb > 2147395600)
		return (0);
	sqrt = 0;
	tmp = 0;
	while (tmp <= nb)
	{
		tmp = sqrt * sqrt;
		if (tmp == nb)
			return (sqrt);
		sqrt++;
	}
	return (0);
}
