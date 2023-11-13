/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: metyasar <metyasar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 21:11:49 by metyasar          #+#    #+#             */
/*   Updated: 2023/11/13 17:00:27 by metyasar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	insertion_sort(t_list *data)
{
	int	i;
	int	j;
	int	tmp;

	i = -1;
	data->sorted_list = malloc(sizeof(int) * data->alen);
	while (++i < (data->alen))
		data->sorted_list[i] = data->stacka[i];
	i = 0;
	while (i < data->alen)
	{
		j = 0;
		while (j < data->alen - 1)
		{
			if (data->sorted_list[j] > data->sorted_list[j + 1])
			{
				tmp = data->sorted_list[j];
				data->sorted_list[j] = data->sorted_list[j + 1];
				data->sorted_list[j + 1] = tmp;
			}
			j++;
		}
		i++;
	}
	get_index(data);
}

int	max_bits(t_list *data)
{
	int	i;
	int	mx;

	i = 0;
	insertion_sort(data);
	mx = data->stacka[data->alen - 1];
	while (i < 32)
	{
		if ((mx & 2147483648) == 2147483648)
			return (32 - i);
		mx <<= 1;
		i++;
	}
	return (0);
}

void	radix_sort(t_list *data)
{
	int	mx;
	int	i;
	int	j;

	i = 0;
	j = 0;
	mx = max_bits(data);
	while (j < mx)
	{
		i = data->alen;
		while (i > 0)
		{
			if (((data->stacka[0] >> j) & 1) == 0)
				pb(data);
			else
				ra(data);
			i--;
		}
		while (data->blen > 0)
			pa(data);
		j++;
	}
}

void	get_index(t_list *data)
{
	int	i;
	int	j;

	j = 0;
	i = 0;
	while (i < data->alen)
	{
		j = 0;
		while (j < data->alen)
		{
			if (data->stacka[i] == data->sorted_list[j])
			{
				data->stacka[i] = j;
				i++;
				break ;
			}
			j++;
		}
	}
}
