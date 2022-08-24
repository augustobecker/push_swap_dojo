/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initialize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gnuncio- <gnuncio-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 18:41:30 by acesar-l          #+#    #+#             */
/*   Updated: 2022/08/24 10:12:09 by gnuncio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	initialize(t_data *data, int argc, char **argv);
void	init_data(t_data *data);
void	check_arguments(t_data *data, int argc, char **argv);

void	initialize(t_data *data, int argc, char **argv)
{
	init_data(data);
	check_arguments(data, argc, argv);
	//allocate_elements_on_stack_a
}

void	init_data(t_data *data)
{
	//data->alloc = false;
}

void	check_arguments(t_data *data, int argc, char **argv)
{
	/*
	int arg;
	int i;

	i = 0;
	arg = 1;
	while (arg < argc)
	{
		while(argv[arg][i])
		{
			if (ft_isdigit(argv[arg][i++]) == false)
				error(data, "Contains not integers as arguments");
			stack_add_front(stack_a, stack_new(ft_atoi(argv[arg])));
		}
		arg++;
	}
	*/
}
