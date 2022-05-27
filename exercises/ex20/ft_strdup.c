/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdias-ma <mdias-ma@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 15:52:33 by mdias-ma          #+#    #+#             */
/*   Updated: 2022/05/25 17:30:27 by mdias-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		i;
	int		size;
	char	*dup;

	size = 0;
	while (src[size] != '\0')
		size++;
	dup = malloc(++size * sizeof(char));
	if (dup == NULL)
		return (dup);
	i = 0;
	while (i < size)
	{
		dup[i] = src[i];
		i++;
	}
	return (dup);
}
