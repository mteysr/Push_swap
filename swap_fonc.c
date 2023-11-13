/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_fonc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: metyasar <metyasar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 18:32:49 by metyasar          #+#    #+#             */
/*   Updated: 2023/10/27 21:16:37 by metyasar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_list *data)
{
	int	swap;

	swap = data->stacka[0];
	data->stacka[0] = data->stacka[1];
	data->stacka[1] = swap;
	write(1, "sa\n", 3);
}

void	sb(t_list *data)
{
	int	swap;

	swap = data->stackb[0];
	data->stackb[0] = data->stackb[1];
	data->stackb[1] = swap;
	write(1, "sb\n", 3);
}

void	ss(t_list *data)
{
	int	swap;

	swap = data->stackb[0];
	data->stackb[0] = data->stackb[1];
	data->stackb[1] = swap;
	swap = data->stacka[0];
	data->stacka[0] = data->stacka[1];
	data->stacka[1] = swap;
	write(1, "ss\n", 3);
}
