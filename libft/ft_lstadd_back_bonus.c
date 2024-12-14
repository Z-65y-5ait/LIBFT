/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaimi <azaimi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 03:10:00 by azaimi            #+#    #+#             */
/*   Updated: 2024/11/06 19:12:21 by azaimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*head;

	if (lst && new)
	{
		if ((*lst) == NULL)
			*lst = new;
		else
		{
			head = ft_lstlast((*lst));
			head->next = new;
		}
	}
}
