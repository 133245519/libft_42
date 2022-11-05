/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-harc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 02:57:25 by mel-harc          #+#    #+#             */
/*   Updated: 2022/11/01 17:45:02 by mel-harc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	len_dst;
	unsigned int	len_src;

	if (dstsize == 0 || dstsize <= ft_strlen(dst))
		return (dstsize + ft_strlen(src));
	len_dst = ft_strlen(dst);
	len_src = ft_strlen(src);
	i = len_dst;
	j = 0;
	while (src[j] != '\0' && j < dstsize - len_dst - 1)
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (len_dst + len_src);
}
