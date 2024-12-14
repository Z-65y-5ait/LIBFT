/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaimi <azaimi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 16:36:16 by azaimi            #+#    #+#             */
/*   Updated: 2024/11/10 11:40:32 by azaimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*s;

	if (size != 0 && count > SIZE_MAX / size)
		return (NULL);
	s = malloc(count * size);
	if (!s)
		return (NULL);
	ft_memset(s, 0, size * count);
	return (s);
}
