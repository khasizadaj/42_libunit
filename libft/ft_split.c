/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 22:46:14 by jkhasiza          #+#    #+#             */
/*   Updated: 2023/09/26 17:17:59 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_words(char const *s, char c)
{
	int	count;
	int	counting;
	int	i;

	i = 0;
	count = 0;
	counting = 0;
	while (s[i])
	{
		if (s[i] != c && counting == 0)
		{
			counting = 1;
			count++;
		}
		else if (s[i] == c)
			counting = 0;
		i++;
	}
	return (count);
}

int	length_of_next(int i, char const *s, char c)
{
	int	end_of_next;

	end_of_next = i + 1;
	while (s[end_of_next] != c && s[end_of_next])
		end_of_next++;
	return (end_of_next - i);
}

void	free_result(int i, char **result)
{
	int	j;

	j = 0;
	while (j < i)
	{
		free(result[j]);
		j++;
	}
	free(result);
}

char	**ft_split(char const *s, char c)
{
	char			**result;
	unsigned int	i;
	int				curr_word;

	result = malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (result == NULL)
		return (NULL);
	i = 0;
	curr_word = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			result[curr_word] = ft_substr(s, i, length_of_next(i, s, c));
			if (result[curr_word] == NULL)
				return (free_result(curr_word, result), NULL);
			curr_word++;
			i += length_of_next(i, s, c);
		}
		else
			i++;
	}
	result[curr_word] = NULL;
	return (result);
}
