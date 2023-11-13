/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: metyasar <metyasar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 21:16:54 by metyasar          #+#    #+#             */
/*   Updated: 2023/10/27 21:16:54 by metyasar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>

typedef struct s_list{
	long	*stacka;
	long	*stackb;
	int		alen;
	int		blen;
	char	*str;
	int		*sorted_list;
	int		max_bit;
	int		minindex;
	char	**nbrfc;
	long	*nbr;
}	t_list;

void	sa(t_list *data);
void	sb(t_list *data);
void	ss(t_list *data);
void	pa(t_list *data);
void	pb(t_list *data);
void	ra(t_list *data);
void	rb(t_list *data);
void	rr(t_list *data);
void	rra(t_list *data);
void	rrb(t_list *data);
void	rrr(t_list *data);
long	ft_atoi(char *a, t_list *data);
int		ft_control(char *str);
void	ft_error(t_list *data);
char	**ft_split(char *s, char c, int *len);
void	*ft_calloc(size_t count, size_t size);
char	*ft_strdup(const char *s1);
char	*ft_substr(char const *s, unsigned int start, size_t len);
size_t	ft_strlen(const char *c);
void	ft_bzero(void *s, size_t n);
char	*ft_strjoin(char *s1, char *s2);
int		ft_isdigit(char a);
void	insertion_sort(t_list *data);
void	radix_sort(t_list *data);
void	get_index(t_list *data);
void	init_stack(t_list *data);
int		is_empty(char **str);
void	findmin(t_list *data);
void	myshortsort(t_list *data);
int		samenumbercontrol(t_list *data);
void	sortmechanism(int argc, t_list *data);
void	str_complete(t_list *data, char **str);
void	othercase(t_list *data, int a);
int		max_bits(t_list *data);
int		issorted(t_list *data);

#endif
