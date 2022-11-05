/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-harc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 17:24:10 by mel-harc          #+#    #+#             */
/*   Updated: 2022/11/03 21:04:25 by mel-harc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		i;
	t_list	*head;

	i = 0;
	head = lst;
	if (head == 0)
		return (0);
	while (head)
	{
		head = head->next;
		i++;
	}
	return (i);
}
