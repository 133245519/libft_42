/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   *ft_memset.c                                        :+:      :+:    :+:  */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-harc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 10:12:40 by mel-harc          #+#    #+#             */
/*   Updated: 2022/11/04 11:49:50 by mel-harc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;

	i = 0;
	while (i < len)
	{
		((unsigned char *)b)[i] = (unsigned char)c;
		i++;
	}
	return ((void *)b);
}
int main()
{
	int a[] ={45};
	//ft_memset(a, 0, 4);
	//ft_memset(a, 3, 2);
	ft_memset(a, 1000, 4);
}	
