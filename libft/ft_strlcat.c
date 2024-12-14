/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaimi <azaimi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 04:18:09 by azaimi            #+#    #+#             */
/*   Updated: 2024/11/10 11:26:15 by azaimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	size_dst;

	i = 0;
	if (dstsize == 0)
		return (ft_strlen(src));
	size_dst = ft_strlen(dst);
	if (size_dst >= dstsize)
		return (dstsize + ft_strlen(src));
	while (src[i] != '\0' && size_dst + i < dstsize - 1)
	{
		dst[size_dst + i] = src[i];
		i++;
	}
	if (size_dst + i < dstsize)
		dst[size_dst + i] = '\0';
	return (size_dst + ft_strlen(src));
}
