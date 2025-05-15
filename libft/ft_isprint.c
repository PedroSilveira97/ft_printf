/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptavares <ptavares@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 15:29:24 by ptavares          #+#    #+#             */
/*   Updated: 2025/04/17 19:07:57 by ptavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//checks for any printable character including space.

#include "libft.h"

int	ft_isprint(int c)
{
	if ((c >= 32 && c <= 126) || (c == ' '))
		return (1);
	else
		return (0);
}
