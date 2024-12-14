/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaimi <azaimi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 06:40:05 by azaimi            #+#    #+#             */
/*   Updated: 2024/11/08 20:17:15 by azaimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*p;
	t_list	*new_p;

	if (!lst || !f || !del)
		return (NULL);
	p = NULL;
	while (lst)
	{
		new_p = ft_lstnew(NULL);
		if (!new_p)
		{
			ft_lstclear(&p, del);
			return (NULL);
		}
		new_p->content = f(lst->content);
		ft_lstadd_back(&p, new_p);
		lst = lst->next;
	}
	return (p);
}
