/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptavares <ptavares@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 17:10:43 by ptavares          #+#    #+#             */
/*   Updated: 2025/05/13 22:59:34 by pedrotrsilvei    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include "../ft_printf.h"

int	ft_hex(unsigned long num)
{
	char	*base;
	int		count;

	base = "0123456789abcdef";
	count = 0;
	if (num >= 16)
		count = count + ft_hex(num / 16);
	ft_putchar_fd(base[num % 16], 1);
	count = count + 1;
	return (count);
}

int	ft_print_ptr(void *ptr)
{
	int				len;
	unsigned long	address;

	address = (unsigned long)ptr;
	len = 2;
	if (!ptr)
		return (ft_print_str("(nil)"));
	ft_putstr_fd("0x", 1);
	if (address == 0)
	{
		ft_putchar_fd('0', 1);
		return (3);
	}
	len = len + ft_hex(address);
	return (len);
}
