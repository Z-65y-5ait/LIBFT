/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaimi <azaimi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 05:12:31 by azaimi            #+#    #+#             */
/*   Updated: 2024/11/06 20:37:16 by azaimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*head;

	if (lst && del)
	{
		while ((*lst) != NULL)
		{
			head = (*lst)->next;
			del((*lst)->content);
			free(*lst);
			(*lst) = head;
		}
		*lst = NULL;
	}
}
