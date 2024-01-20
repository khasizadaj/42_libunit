/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstget.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkhasiza <jkhasiza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 00:00:34 by jkhasizada        #+#    #+#             */
/*   Updated: 2024/01/14 13:38:49 by jkhasiza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstget(t_list **lst, int index)
{
	t_list	*result;
	int		i;

	if (lst == NULL)
		return (NULL);
	i = 0;
	result = *lst;
	while (!result)
	{
		if (i == index)
			return (result);
		i++;
		result = result->next;
	}
	return (NULL);
}
