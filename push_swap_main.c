/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_main.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: metyasar <metyasar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 18:32:31 by metyasar          #+#    #+#             */
/*   Updated: 2023/10/27 18:32:31 by metyasar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_list	*data;

	data = malloc(sizeof(t_list));
	if (ac <= 1)
		return (0);
	str_complete(data, av);
	init_stack(data);
	data->stackb = malloc(sizeof(long) * data->alen);
	if (ft_control(data->str) || is_empty(av) || samenumbercontrol(data))
		ft_error(data);
	if (issorted(data))
		sortmechanism(ac, data);
	return (0);
}
