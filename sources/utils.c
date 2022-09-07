/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acesar-l <acesar-l@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 23:33:35 by coder             #+#    #+#             */
/*   Updated: 2022/09/06 08:39:00 by acesar-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap_values(int *a, int *b);

void	swap_values(int *a, int *b)
{
	*a ^= *b;
	*b ^= *a;
	*a ^= *b;
}

// temp_funcs
void	print_stack_elements(t_stack *stack)
{
	if (stack == NULL)
	{
		ft_printf(" || \n");
		return ;
	}
	ft_printf(" || ");
	while (stack)
	{
		ft_printf("%d | ", stack->number);
		stack = stack->next;
	}
	ft_printf("\n");
}