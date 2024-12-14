/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaimi <azaimi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 02:53:40 by azaimi            #+#    #+#             */
/*   Updated: 2024/11/07 16:00:41 by azaimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		count;
	t_list	*head;

	head = lst;
	count = 1;
	if (!lst)
		return (0);
	while (head->next != NULL)
	{
		count++;
		head = head->next;
	}
	return (count);
}
