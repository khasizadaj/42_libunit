/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testlist_helper.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkhasiza <jkhasiza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 14:42:34 by jkhasiza          #+#    #+#             */
/*   Updated: 2024/01/21 23:38:50 by jkhasiza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libunit.h"
#include "libft/libft.h"
#include <unistd.h>

t_routine	*testlist_new(char *test_function,
	char *test_name, int (*func)(void))
{
	t_routine	*node;

	node = ft_calloc(sizeof(t_routine), 1);
	if (node == NULL)
		return (NULL);
	node->test_function = test_function;
	node->test_name = test_name;
	node->func = func;
	node->next = NULL;
	return (node);
}

void	testlist_add_back(t_routine **list, t_routine *new_elem)
{
	t_routine	*last;

	if (!list)
		return ;
	if (new_elem == NULL)
		return (ft_putendl_fd("Malloc failed", STDERR_FILENO));
	if (!(*list))
	{
		*list = new_elem;
		return ;
	}
	last = *list;
	while (last->next)
		last = last->next;
	last->next = new_elem;
}

void	testlist_load(t_routine **list,
	char *test_function, char *test_name, int (*func)(void))
{
	if (!list)
		return ;
	testlist_add_back(list, testlist_new(test_function, test_name, func));
}

void	testlist_clear(t_routine **list)
{
	t_routine	*temp;

	if (!list || !(*list))
		return ;
	while (*list)
	{
		temp = (*list)->next;
		free(*list);
		*list = temp;
	}
}
