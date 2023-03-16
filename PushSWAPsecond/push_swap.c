/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpicoule <tpicoule@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 13:56:56 by tpicoule          #+#    #+#             */
/*   Updated: 2023/03/16 16:36:34 by tpicoule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	int			i;
	t_dblist	*pilea;
	t_dblist	*pileb;

	i = 1;
	pilea = dlist_new();
	pileb = dlist_new();
	while (argv[i])
	{
	pilea = ft_add_bot(pilea, ft_atoi(argv[i]));
	i++;
	}
	ft_print_pile(pilea);
	printf("\n pilea \n\n\n");
	ft_print_pile(pileb);
	printf("\n pileb \n\n\n");
	
	//instru
	ft_rrb(pilea);

	printf("\n===========after algo==========\n\n");
	ft_print_pile(pilea);
	printf("\n pilea\n\n\n");
	ft_print_pile(pileb);
	printf("\n pileb\n\n\n");

	return (0);
}