/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaimi <azaimi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 11:38:40 by azaimi            #+#    #+#             */
/*   Updated: 2024/11/14 11:43:04 by azaimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;

	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	if (!dest && !src)
		return (NULL);
	if (d < s)
	{
		while (n--)
			*d++ = *s++;
	}
	else if (d > s)
	{
		while (n--)
			*(d + n) = *(s + n);
	}
	return (dest);
}
