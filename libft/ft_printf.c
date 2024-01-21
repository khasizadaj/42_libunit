/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkhasiza <jkhasiza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 13:43:16 by codespace         #+#    #+#             */
/*   Updated: 2023/12/16 18:52:05 by jkhasiza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	is_placeholder(char *str)
{
	char	*placeholders;

	placeholders = "scdpiuxX%";
	if (str[0] == '%' && chr_in(str[1], placeholders))
		return (1);
	return (0);
}

int	get_length(char type, void *arg)
{
	char	*hex;
	int		len;

	len = 1;
	if (type == 's')
		return (ft_strlen((char *) arg));
	else if (type == 'u')
		return (get_length_u(*((unsigned int *) &arg)));
	else if (chr_in(type, "di"))
		return (get_length_di(*((int *) &arg)));
	else if (chr_in(type, "xX"))
	{
		hex = u_to_hex(*((unsigned int *) &arg), 0);
		if (!hex)
			return (0);
		len = ft_strlen(hex);
		return (free(hex), len);
	}
	else if (type == 'p')
		return (get_length_p(*((unsigned long long *) &arg)));
	return (len);
}

int	dispatch(char type, void *arg)
{
	if (type == 's')
	{
		if (arg == NULL)
			return (ft_putstr_fd("(null)", 1), 6);
		ft_putstr_fd((char *) arg, 1);
	}
	else if (type == 'c')
		ft_putchar_fd(*((char *) &arg), 1);
	else if (type == '%')
		ft_putchar_fd('%', 1);
	else if (type == 'd' || type == 'i')
		ft_putnbr_fd(*((int *) &arg), 1);
	else if (type == 'p')
	{
		if (arg == NULL)
			return (ft_putstr_fd("(nil)", 1), 5);
		ft_putmemory(arg);
	}
	else if (type == 'u')
		ft_putuint(*(unsigned int *) &arg, 1);
	else if (type == 'x')
		ft_puthexlower_fd(*(unsigned int *) &arg, 1);
	else if (type == 'X')
		ft_puthexupper_fd(*(unsigned int *) &arg, 1);
	return (get_length(type, arg));
}

void	format(va_list args, const char *input, int *count)
{
	int		i;
	void	*arg;

	i = 0;
	arg = NULL;
	while (input[i])
	{
		if (is_placeholder((char *) &input[i]))
		{
			if (input[i + 1] != '%')
				arg = va_arg(args, void *);
			*count += dispatch(input[i + 1], arg);
			i += 2;
		}
		else
		{
			if (input[i] == '%' && input[i + 1] == '\0')
			{
				*count = -1;
				return ;
			}
			ft_putchar_fd(input[i++], 1);
			*count = (*count + 1);
		}
	}
}

int	ft_printf(const char *input, ...)
{
	va_list	args;
	int		written;

	if (!input)
		return (-1);
	va_start(args, input);
	written = 0;
	format(args, input, &written);
	va_end(args);
	return (written);
}
