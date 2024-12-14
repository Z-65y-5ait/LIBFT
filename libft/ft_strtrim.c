/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaimi <azaimi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 11:51:24 by azaimi            #+#    #+#             */
/*   Updated: 2024/11/07 12:04:03 by azaimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_in_set(char c, const char *set)
{
	while (*set)
	{
		if (*set == c)
			return (1);
		set++;
	}
	return (0);
}

static char	*handle(char const *s)
{
	if (!s)
		return (NULL);
	return (ft_strdup(s));
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	j;
	size_t	len_s1;
	size_t	end;
	size_t	start;

	if (!s1 || !set)
		return (handle(s1));
	len_s1 = ft_strlen(s1);
	start = 0;
	while (s1[start] && is_in_set(s1[start], set))
		start++;
	end = len_s1;
	while (end > start && is_in_set(s1[end - 1], set))
		end--;
	str = (char *)malloc(end - start + 1);
	if (!str)
		return (NULL);
	j = 0;
	while (start < end)
		str[j++] = s1[start++];
	str[j] = '\0';
	return (str);
}
