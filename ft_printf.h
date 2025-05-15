/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptavares <ptavares@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/09 12:49:44 by ptavares          #+#    #+#             */
/*   Updated: 2025/05/13 23:21:57 by pedrotrsilvei    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include "libft/libft.h"

// ft_printf function
int	ft_printf(const char *format, ...);

// Dispatcher for conversion handlers
int	handle_conversion(char specifier, va_list args);

// Conversion functions
int	ft_print_char(int c);
int	ft_print_str(char *str);
int	ft_print_ptr(void *ptr);
int	ft_print_nbr(int n);
int	ft_print_unsigned(unsigned int n);
int	ft_print_decimal(int c);
int	ft_print_hex(unsigned int num, char format);

#endif
