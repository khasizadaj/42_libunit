/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testlist_helper.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkhasiza <jkhasiza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 14:42:34 by jkhasiza          #+#    #+#             */
/*   Updated: 2024/01/20 23:02:08 by jkhasiza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

t_testlist	*testlist_new(char *name, int (*func)(void))
{
    t_testlist	*node;

    if (!name || !func)
        return (NULL);

    node = malloc(sizeof(t_testlist));
    if (node == NULL)
        return (NULL);
    node->name = name;
    node->func = func;
    node->next = NULL;
    return (node);
}

void	testlist_add_back(t_testlist **list, t_testlist *new_elem)
{
	t_testlist	*last;

	if (!list || !new_elem)
		return ;
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

void	testlist_clear(t_testlist **list)
{
	t_testlist	*temp;

	if (list == NULL || *list == NULL)
		return ;
	while (*list)
	{
		temp = (*list)->next;
		free((*list)->name);
		free(*list);
		*list = temp;
	}
}

void	testlist_run(t_testlist **list)
{
	t_testlist	*temp;

	if (list == NULL || *list == NULL)
		return ;
	temp = *list;
	while (temp)
	{
		if ((*list)->func() == 0)
			printf("[%s] : [OK]\n", (*list)->name);
		else
			printf("[%s] : [KO]\n", (*list)->name);
		temp = temp->next;
	}
}