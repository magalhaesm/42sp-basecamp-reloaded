/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdias-ma <mdias-ma@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 23:49:19 by mdias-ma          #+#    #+#             */
/*   Updated: 2022/05/25 11:41:44 by mdias-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	fat;

	fat = 1;
	if (nb < 0 || nb > 12)
		return (0);
	if (nb < 1)
		return (1);
	while (nb)
	{
		fat *= nb;
		nb--;
	}
	return (fat);
}
