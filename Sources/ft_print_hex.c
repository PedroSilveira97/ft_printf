/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptavares <ptavares@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 19:44:33 by ptavares          #+#    #+#             */
/*   Updated: 2025/05/13 23:01:48 by pedrotrsilvei    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"

static int	ft_put_hex(unsigned int num, char *base)
{
	int	count;

	count = 0;
	if (num >= 16)
		count = count + ft_put_hex((num / 16), base);
	ft_putchar_fd(base[num % 16], 1);
	count = count + 1;
	return (count);
}

int	ft_print_hex(unsigned int num, char specifier)
{
	char	*base;

	if (specifier == 'x')
		base = "0123456789abcdef";
	else
		base = "0123456789ABCDEF";
	if (num == 0)
	{
		ft_putchar_fd('0', 1);
		return (1);
	}
	return (ft_put_hex(num, base));
}
