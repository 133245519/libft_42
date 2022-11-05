/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-harc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 18:15:27 by mel-harc          #+#    #+#             */
/*   Updated: 2022/10/30 15:15:11 by mel-harc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	size_t	ft_count_size(unsigned int start, size_t len, size_t lens)
{
	size_t	i;

	i = 0;
	while (i < len && start < lens)
	{
		i++;
		start++;
	}
	return (i);
}

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char			*str;
	size_t			i;
	size_t			lens;

	if (!s)
		return (0);
	lens = ft_strlen(s);
	i = ft_count_size(start, len, lens);
	str = (char *)malloc((i + 1) * sizeof(char));
	if (!str)
		return (NULL);
	i = 0;
	if (s[i] != '\0' && i < lens)
	{
		while (i < len && start < lens)
		{
			str[i] = s[start];
			start++;
			i++;
		}
		str[i] = '\0';
	}
	return (str);
}
