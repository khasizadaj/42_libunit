/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   executor.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkhasiza <jkhasiza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 17:27:49 by vfrants           #+#    #+#             */
/*   Updated: 2024/01/21 23:38:35 by jkhasiza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libunit.h"
#include "libft/libft.h"
#include <signal.h>
#include <stdlib.h>
#include <unistd.h>

int	execute(t_routine *test)
{
	int	status;
	int	pid;

	pid = fork();
	if (pid == -1)
		return (FORK_FAIL);
	if (pid == 0)
		exit(test->func());
	wait(&status);
	if (WIFEXITED(status))
	{
		if (WEXITSTATUS(status) == 0)
			return (OK);
	}
	else if (WIFSIGNALED(status))
	{
		if (WTERMSIG(status) == SIGSEGV)
			return (SEGV);
		if (WTERMSIG(status) == SIGBUS)
			return (BUS);
	}
	return (KO);
}

void	print_result(t_routine *test, int status)
{
	if (status == OK)
		ft_printf("[%s]:[%s]:[OK]\n", test->test_function, test->test_name);
	else if (status == SEGV)
	{
		ft_printf("[%s]:[%s]:[SIGSEGV]\n",
			test->test_function, test->test_name);
	}
	else if (status == BUS)
		ft_printf("[%s]:[%s]:[SIGBUS]\n", test->test_function, test->test_name);
	else if (status == KO)
		ft_printf("[%s]:[%s]:[KO]\n", test->test_function, test->test_name);
}

void	testlist_run(t_routine **list, t_passed *res)
{
	t_routine	*iter;
	int			status;

	if (list == NULL || *list == NULL)
		return ;
	iter = *list;
	while (iter)
	{
		status = execute(iter);
		if (status == FORK_FAIL)
			return (ft_putendl_fd("Fork failed", STDERR_FILENO));
		if (status == OK)
			res->passed++;
		print_result(iter, status);
		res->total++;
		iter = iter->next;
	}
}
