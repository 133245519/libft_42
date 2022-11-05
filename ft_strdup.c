/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-harc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 17:05:42 by mel-harc          #+#    #+#             */
/*   Updated: 2022/10/27 20:32:53 by mel-harc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		i;
	char	*src;

	i = 0;
	while (s1[i] != '\0')
		i++;
	src = malloc(i * sizeof(char) + 1);
	if (!src)
		return (NULL);
	i = 0;
	while (s1[i] != '\0')
	{
		src[i] = s1[i];
		i++;
	}
	src[i] = '\0';
	return (src);
}
