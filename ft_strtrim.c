/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-harc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 17:54:53 by mel-harc          #+#    #+#             */
/*   Updated: 2022/10/28 21:42:40 by mel-harc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	size_t	ft_down(const char *s1, const char *set, size_t len, size_t	i)
{
	size_t	j;

	j = 0;
	while (set[j] && len > i)
	{
		if (s1[len - 1] == set[j])
		{
			len--;
			j = 0;
		}
		else
		j++;
	}
	return (len);
}

static	size_t	ft_count_i(const char *s1, const char *set)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (set[j])
	{
		if (s1[i] == set[j])
		{
			i++;
			j = 0;
		}
		else
			j++;
	}
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	lens;
	size_t	i;
	char	*str;

	if (!s1 || !set)
		return (NULL);
	if (s1[0] == '\0')
	{
		str = (char *)malloc(1);
		str[0] = '\0';
		return (str);
	}
	i = ft_count_i(s1, set);
	lens = ft_strlen(s1);
	lens = ft_down(s1, set, lens, i);
	str = ft_substr(s1, i, lens - i);
	return (str);
}
