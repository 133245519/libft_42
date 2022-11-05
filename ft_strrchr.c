/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-harc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 18:26:33 by mel-harc          #+#    #+#             */
/*   Updated: 2022/10/29 00:14:19 by mel-harc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	len;

	len = ft_strlen(s);
	while (s[len] != (unsigned char)c && len > 0)
		len--;
	if (s[len] == (char)c)
		return ((char *)s + len);
	else
		return (0);
}
