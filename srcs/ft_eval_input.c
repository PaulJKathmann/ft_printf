/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_eval_input.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkathman <pkathman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 16:53:01 by pkathman          #+#    #+#             */
/*   Updated: 2023/05/11 20:08:54 by pkathman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_eval_input(va_list args, const char *format, int pos)
{
	int	printed_chars;

	printed_chars = 0;
	if (format[pos] == 'c')
		printed_chars = ft_print_char(va_arg(args, int));
	else if (format[pos] == 's')
		printed_chars = ft_print_string(va_arg(args, char *));
	else if (format[pos] == 'd' || format[pos] == 'i')
		printed_chars = ft_print_int(va_arg(args, int));
	else if (format[pos] == 'u')
		printed_chars = ft_print_unsigned(va_arg(args, unsigned int));
	else if (format[pos] == 'p')
		printed_chars = ft_print_pointer(va_arg(args, unsigned long));
	else if (format[pos] == 'x')
		printed_chars = ft_print_hexa(va_arg(args, unsigned int), 0);
	else if (format[pos] == 'X')
		printed_chars = ft_print_hexa(va_arg(args, unsigned int), 1);
	else if (format[pos] == '%')
		printed_chars = ft_print_percent();
	return (printed_chars);
}
