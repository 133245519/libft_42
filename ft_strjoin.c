/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-harc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 19:26:19 by mel-harc          #+#    #+#             */
/*   Updated: 2022/10/29 00:15:51 by mel-harc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*str;
	size_t	lens1;
	size_t	lens2;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!s1 || !s2)
		return (0);
	lens1 = ft_strlen(s1);
	lens2 = ft_strlen(s2);
	str = (char *)malloc((lens1 + lens2) * sizeof(char) + 1);
	if (!str)
		return (NULL);
	while (i < lens1)
	{
		str[i] = s1[i];
		i++;
	}
	while (j < lens2)
		str[i++] = s2[j++];
	str[i] = '\0';
	return (str);
}
