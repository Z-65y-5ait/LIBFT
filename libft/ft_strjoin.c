/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaimi <azaimi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 00:32:51 by azaimi            #+#    #+#             */
/*   Updated: 2024/11/03 22:21:14 by azaimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_strcpy(const char *src, char *dst)
{
	while (*src)
		*dst++ = *src++;
	return (dst);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		len;
	char	*ptr;
	char	*dst;

	if (!s1 && !s2)
		return (NULL);
	if (!s1)
		return (ft_strdup(s2));
	if (!s2)
		return (ft_strdup(s1));
	len = ft_strlen(s1) + ft_strlen(s2);
	dst = (char *)malloc((len + 1) * sizeof(char));
	ptr = dst;
	if (!dst)
		return (NULL);
	if (s1)
		dst = ft_strcpy(s1, dst);
	if (s2)
		dst = ft_strcpy(s2, dst);
	*dst = '\0';
	return (ptr);
}
