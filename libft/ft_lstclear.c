/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkhasiza <jkhasiza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 20:14:48 by codespace         #+#    #+#             */
/*   Updated: 2024/01/14 13:38:12 by jkhasiza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*head;
	t_list	*temp;

	if (lst == NULL || *lst == NULL)
		return ;
	head = *lst;
	temp = *lst;
	while (head->next != NULL)
	{
		head = temp->next;
		ft_lstdelone(temp, del);
		temp = head;
	}
	del(head->content);
	free(head);
	*lst = NULL;
	return ;
}

void	ft_lstclear_no_content(t_list **lst)
{
	t_list	*head;
	t_list	*temp;

	if (lst == NULL || *lst == NULL)
		return ;
	head = *lst;
	temp = *lst;
	while (head->next != NULL)
	{
		head = temp->next;
		free(temp);
		temp = head;
	}
	free(head);
	*lst = NULL;
	return ;
}
