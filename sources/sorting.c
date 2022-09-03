/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gnuncio- <gnuncio-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 01:34:48 by gnuncio-          #+#    #+#             */
/*   Updated: 2022/09/03 16:21:34 by gnuncio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_bool	sorting(t_stack **stack)
{
	t_stack	*iterator;

	if (*stack == NULL)
		return (false);

	int sort_status;
	sort_status = 0;
	iterator = *stack;
	while(iterator->next)
	{
		if(iterator->number > iterator->next->number)
			return (false);
		iterator = iterator->next;
	}
	return (true);
}
