/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-harc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 19:08:11 by mel-harc          #+#    #+#             */
/*   Updated: 2022/10/30 13:28:54 by mel-harc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	char	*str;

	i = 0;
	str = (char *)haystack;
	if (needle[i] == '\0')
		return (str);
	if (len == 0)
		return (0);
	while (str[i] != '\0' && i < len)
	{
		j = 0;
		while ((needle[j] == str[i + j] && str[i + j] != '\0') && i + j < len)
			j++;
		if (needle[j] == '\0')
			return (str + i);
		i++;
	}
	return (0);
}
