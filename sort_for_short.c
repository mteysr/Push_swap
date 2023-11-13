/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_for_short.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: metyasar <metyasar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 18:32:42 by metyasar          #+#    #+#             */
/*   Updated: 2023/11/01 15:03:21 by metyasar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sortmechanism(int argc, t_list *data)
{
	if (argc < 10)
		myshortsort(data);
	else
		radix_sort(data);
}

void	findmin(t_list *data)
{
	int	i;

	i = 0;
	data->minindex = 0;
	while (i < data->alen)
	{
		if (data->stacka[data->minindex] > data->stacka[i])
			data->minindex = i;
		i++;
	}
}

int	issorted(t_list *data)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < data->alen)
	{
		while (j < data->alen)
		{
			if (data->stacka[i] > data->stacka[j] && i < j)
				return (1);
			j++;
		}
		j = 0;
		i++;
	}
	return (0);
}

void	myshortsort(t_list *data)
{
	int	lena;

	while (data->alen != 1 && issorted(data))
	{
		lena = data->alen / 2;
		findmin(data);
		if (data->minindex == 0)
			pb(data);
		else if (data->minindex == 1)
		{
			if (data->stacka[0] > data->stacka[data->alen - 1])
				ra(data);
			else
				sa(data);
		}
		else
		{
			if (data->stacka[0] > data->stacka[1])
				sa(data);
			othercase(data, lena);
		}
	}
	while (data->blen > 0)
		pa(data);
}

void	othercase(t_list *data, int a)
{
	if (data->minindex < a)
		ra(data);
	else if (data->minindex >= a)
		rra(data);
}
