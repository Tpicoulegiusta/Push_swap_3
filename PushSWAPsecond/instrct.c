/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instrct.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpicoule <tpicoule@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 15:38:27 by tpicoule          #+#    #+#             */
/*   Updated: 2023/03/16 16:42:52 by tpicoule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_pa(t_dblist *pilea, t_dblist *pileb)
{
	if (!pileb)
		return ;
	pilea = ft_add_top(pilea, pileb->top->value);
	ft_del_top_list(pileb);
	write(1, "pa\n", 3);
}

void	ft_pb(t_dblist *pilea, t_dblist *pileb)
{
	if (!pileb)
		return ;
	pileb = ft_add_top(pileb, pilea->top->value);
	ft_del_top_list(pilea);
	write(1, "pb\n", 3);
}

void	ft_ra(t_dblist *pilea)
{
	if (!pilea)
		return ;
	ft_add_bot(pilea, pilea->top->value);
	ft_del_top_list(pilea);
	write(1, "ra\n", 3);
}

void	ft_rb(t_dblist *pileb)
{
	if (!pileb)
		return ;
	ft_add_bot(pileb, pileb->top->value);
	ft_del_top_list(pileb);
	write(1, "rb\n", 3);
}

void	ft_rra(t_dblist *pilea)
{
	if (!pilea)
		return ;
	ft_add_top(pilea, pilea->bot->value);
	ft_del_bot_list(pilea);
	write(1, "rra\n", 3);
}

void	ft_rrb(t_dblist *pileb)
{
	if (!pileb)
		return ;
	ft_add_top(pileb, pileb->bot->value);
	ft_del_bot_list(pileb);
	write(1, "rrb\n", 3);
}

void	ft_rrr(t_dblist *pilea, t_dblist *pileb)
{
	if (!pilea || !pileb)
		return ;
	ft_add_top(pilea, pilea->bot->value);
	ft_del_bot_list(pilea);
	ft_add_top(pileb, pileb->bot->value);
	ft_del_bot_list(pileb);
	write(1, "rrr\n", 4);
}