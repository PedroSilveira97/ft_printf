/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptavares <ptavares@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 15:12:04 by ptavares          #+#    #+#             */
/*   Updated: 2025/04/17 19:07:44 by ptavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* checks whether c is a 7-bit unsigned char value that
fits into the ASCII character set. */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}
