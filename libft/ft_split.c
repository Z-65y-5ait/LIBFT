/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaimi <azaimi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 04:08:37 by azaimi            #+#    #+#             */
/*   Updated: 2024/11/05 14:37:38 by azaimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(const char *s, char c)
{
	int	len;
	int	found;

	len = 0;
	found = 1;
	while (*s)
	{
		if (*s != c && found)
		{
			len++;
			found = 0;
		}
		if (*s == c && !found)
			found = 1;
		s++;
	}
	return (len);
}

static char	*ft_allocate(char *start, char *end)
{
	int		i;
	int		p;
	char	*str;

	p = end - start;
	if (p <= 0)
		return (NULL);
	str = (char *)malloc(p + 1);
	if (!str)
		return (NULL);
	i = 0;
	while (start < end)
	{
		str[i] = *start++;
		i++;
	}
	str[p] = '\0';
	return (str);
}

static int	free_split(char **result)
{
	int	j;

	j = 0;
	if (result)
	{
		while (result[j])
		{
			free(result[j]);
			j++;
		}
		free(result);
	}
	return (0);
}

static int	ft_all(char *end, char *start, char c, char **ptr)
{
	int	i;

	i = 0;
	while (*end)
	{
		if (*end == c)
		{
			if (end > start)
			{
				ptr[i] = ft_allocate(start, end);
				if (!ptr[i++])
					return (free_split(ptr));
			}
			start = end + 1;
		}
		end++;
	}
	if (end > start)
	{
		ptr[i] = ft_allocate(start, end);
		if (!ptr[i++])
			return (free_split(ptr));
	}
	ptr[i] = NULL;
	return (1);
}

char	**ft_split(char const *s, char c)
{
	char	**ptr;
	char	*start;
	char	*end;

	if (!s)
		return (NULL);
	ptr = (char **)malloc((count_words(s, c) + 1) * sizeof(char *));
	if (!ptr)
		return (NULL);
	start = (char *)s;
	end = (char *)s;
	if (!ft_all(end, start, c, ptr))
		return (NULL);
	return (ptr);
}
