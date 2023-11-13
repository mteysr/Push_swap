/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_and_rotex.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: metyasar <metyasar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 18:32:27 by metyasar          #+#    #+#             */
/*   Updated: 2023/10/27 18:32:27 by metyasar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pa(t_list *data)
{
	int	i;

	i = 0;
	while (i < data->alen)
	{
		data->stacka[data->alen - i] = data->stacka[data->alen - i - 1];
		i++;
	}
	data->stacka[0] = data->stackb[0];
	data->alen++;
	data->blen--;
	i = 0;
	while (i < data->blen)
	{
		data->stackb[i] = data->stackb[i + 1];
		i++;
	}
	data->stackb[i] = 0;
	write(1, "pa\n", 3);
}

void	pb(t_list *data)
{
	int	i;

	i = 0;
	while (i < data->blen)
	{
		data->stackb[data->blen - i] = data->stackb[data->blen - i - 1];
		i++;
	}
	data->stackb[0] = data->stacka[0];
	data->blen += 1;
	data->alen -= 1;
	i = 0;
	while (i < data->alen)
	{
		data->stacka[i] = data->stacka[i + 1];
		i++;
	}
	data->stacka[i] = 0;
	write(1, "pb\n", 3);
}

void	rrr(t_list *data)
{
	rra(data);
	rrb(data);
	write(1, "rrr\n", 4);
}
