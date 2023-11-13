/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_control.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: metyasar <metyasar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 18:45:30 by metyasar          #+#    #+#             */
/*   Updated: 2023/10/30 16:05:34 by metyasar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_error(t_list *data)
{
	(void)data;
	write(2, "Error\n", 6);
	exit(1);
}

int	samenumbercontrol(t_list *data)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < data->alen)
	{
		while (j < data->alen)
		{
			if (data->stacka[i] == data->stacka[j] && i != j)
				return (1);
			j++;
		}
		j = 0;
		i++;
	}
	return (0);
}

int	ft_isdigit(char a)
{
	if (a <= '9' && a >= '0')
		return (1);
	return (0);
}

int	ft_control(char *str)
{
	int	i;
	int	len;

	len = ft_strlen(str);
	i = 0;
	while (i < len)
	{
		if (((*str < '0' || *str > '9')
				&& *str != ' ' && *str != '-' && *str != '+')
			|| ((*str == '-' || *str == '+') && (*(str + 1) < '0'
					|| *(str + 1) > '9'))
			|| ((*str >= '0' && *str <= '9') && (*(str + 1) == '+'
					|| *(str + 1) == '-')))
			return (1);
		i++;
		str++;
	}
	return (0);
}
