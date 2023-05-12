/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_int.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkathman <pkathman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 17:17:40 by pkathman          #+#    #+#             */
/*   Updated: 2023/05/12 14:07:30 by pkathman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_print_int(int n)
{
	int		len;
	char	*str;

	str = ft_itoa(n);
	len = ft_strlen(str);
	write(1, str, len);
	free(str);
	return (len);
}
