/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-harc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 00:06:36 by mel-harc          #+#    #+#             */
/*   Updated: 2022/11/02 22:01:39 by mel-harc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;

	i = 0;
	if (dst > src)
	{
		while (len--)
		{
			((unsigned char *)dst)[len] = ((unsigned char *)src)[len];
		}
	}
	else
		return (ft_memcpy(dst, src, len));
	return (dst);
}
