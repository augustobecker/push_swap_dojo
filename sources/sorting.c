/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acesar-l <acesar-l@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 01:34:48 by gnuncio-          #+#    #+#             */
/*   Updated: 2022/09/06 08:38:50 by acesar-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_bool	sorting(t_stack **stack)
{
	t_stack	*iterator;

	if (*stack == NULL)
		return (false);
	iterator = *stack;
	while(iterator->next)
	{
		if(iterator->number > iterator->next->number)
			return (false);
		iterator = iterator->next;
	}
	return (true);
}
