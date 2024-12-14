/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaimi <azaimi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 19:13:29 by azaimi            #+#    #+#             */
/*   Updated: 2024/11/08 17:00:29 by azaimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (haystack == NULL && needle != NULL && len == 0)
		return (NULL);
	if (needle[0] == '\0')
		return ((char *)haystack);
	while (haystack[i] != '\0' && len > i)
	{
		j = 0;
		while (haystack[i + j] == needle[j] && len > (i + j))
		{
			j++;
			if (needle[j] == '\0')
				return ((char *)&haystack[i]);
		}
		i++;
	}
	return (NULL);
}
