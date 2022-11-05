/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-harc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 23:45:43 by mel-harc          #+#    #+#             */
/*   Updated: 2022/11/01 18:47:28 by mel-harc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*head;

	head = *lst;
	if (lst && *lst)
	{
		while (head -> next)
			head = head -> next;
		head -> next = new;
	}
	else
		*lst = new;
}
