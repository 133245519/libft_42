/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-harc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 00:34:45 by mel-harc          #+#    #+#             */
/*   Updated: 2022/10/29 00:34:40 by mel-harc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	size_t	ft_nwords(const char *s, char c)
{
	size_t	i;

	i = 0;
	while (*s)
	{
		if (*s != c)
		{
			i++;
			while (*s && *s != c)
				s++;
		}
		else
			s++;
	}
	return (i);
}

static	char	**ft_free(char **str, int d)
{
	while (d >= 0)
	{
		free(str[d--]);
	}
	free(str);
	return (0);
}

char	**ft_split(const char *s, char c)
{
	char	**str;
	size_t	i;
	size_t	len;

	if (!s)
		return (NULL);
	str = (char **)malloc(sizeof(char *) * (ft_nwords(s, c) + 1));
	if (!str)
		return (0);
	i = 0;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		len = 0;
		while (s[len] && s[len] != c)
			len++;
		if (len != 0)
			str[i++] = ft_substr(s, 0, len);
		if (!str[i - 1])
			return (ft_free(str, i - 1));
		s += len;
	}
	str[i] = NULL;
	return (str);
}
