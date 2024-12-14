/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaimi <azaimi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 23:52:07 by azaimi            #+#    #+#             */
/*   Updated: 2024/11/10 11:05:22 by azaimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	ft_check(int test)
{
	if (test < 0)
		return (0);
	return (-1);
}

int	ft_atoi(const char *str)
{
	int			i;
	int			sign;
	long		result;
	long		check;

	i = 0;
	sign = 1;
	result = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		check = result;
		result = result * 10 + (str[i] - '0');
		if (result / 10 != check)
			return (ft_check(sign));
		i++;
	}
	return (result * sign);
}
