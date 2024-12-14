/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaimi <azaimi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 21:36:36 by azaimi            #+#    #+#             */
/*   Updated: 2024/10/30 06:17:44 by azaimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	str_len;
	char	*dst;

	if (!s)
		return (NULL);
	str_len = ft_strlen(s);
	if (start >= str_len)
		len = 0;
	if (len > str_len - start)
		len = str_len - start;
	dst = (char *)malloc(len + 1);
	if (!dst)
		return (NULL);
	i = 0;
	while (i < len && s[start + i] != '\0')
	{
		dst[i] = s[start + i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}
