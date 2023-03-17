/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   3_random_nbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpicoule <tpicoule@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 13:39:43 by tpicoule          #+#    #+#             */
/*   Updated: 2023/03/17 17:23:27 by tpicoule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_dblist	*ft_two(t_dblist *pilea)
{
	if (pilea->top->value > pilea->bot->value)
	{
		ft_swap_a(pilea->top, pilea->top->next);
	}
	return (pilea);
}

t_dblist	*ft_tree(t_dblist *pilea)
{
	int	first;
	int	mid;
	int	last;

	first = pilea->top->value;
	mid = pilea->top->next->value;
	last = pilea->bot->value;
	if (first > mid && mid < last && last > first)
		ft_swap_a(pilea->top, pilea->top->next);
	else if (first > mid && mid > last && last < first)
	{
		ft_swap_a(pilea->top, pilea->top->next);
		ft_rra(pilea);
	}
	else if (first > mid && mid < last && last < first)
		ft_ra(pilea);
	else if (first < mid && mid > last && last > first)
	{
		ft_swap_a(pilea->top, pilea->top->next);
		ft_ra(pilea);
	}
	else if (first < mid && mid > last && last < first)
		ft_rra(pilea);
	return (pilea);
}

t_dblist	*ft_four(t_dblist *pilea, t_dblist *pileb)
{
	if (pilea->length == 5)
	{
		ft_pa(pilea, pileb);
	}
	return (pilea);
}
