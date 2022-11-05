/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-harc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 18:22:25 by mel-harc          #+#    #+#             */
/*   Updated: 2022/11/03 22:49:17 by mel-harc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlst;
	t_list	*node;

	if (!lst || !f || !del)
		return (0);
	newlst = NULL;
	while (lst)
	{
		node = ft_lstnew(f(lst->content));
		if (!node)
		{
			ft_lstclear(&node, del);
			return (0);
		}
		ft_lstadd_back(&newlst, node);
		lst = lst->next;
	}
	return (newlst);
}
void	d(void *s)
{
	free(s);
}
void *g(void *s)
{
	int i = 0;
	while (((unsigned char *)s)[i])
	{
		((unsigned char *)s)[i]	= ((unsigned char *)s)[i] - 32;
		i++;
	}
	return (s);
}
int main()
{
	t_list *h;
	t_list *f;
	t_list	*s;
	t_list *t;
	f = ft_lstnew(ft_strdup("hello"));
	h = f;
	s = ft_lstnew(ft_strdup("hey"));
	ft_lstadd_back(&h, s);
  	t = ft_lstmap(h, g, d);
	printf("%s\n", t->content);
}

