/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-harc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 15:59:04 by mel-harc          #+#    #+#             */
/*   Updated: 2022/11/02 09:17:16 by mel-harc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	i;
	void	*p;

	i = size * count;
	if (count != 0 && size != i / count)
		return (NULL);
	p = malloc(count * size);
	if (!p)
		return (NULL);
	i = 0;
	while (i < count * size)
	{
		((unsigned char *)p)[i] = '\0';
		i++;
	}
	return (p);
}
