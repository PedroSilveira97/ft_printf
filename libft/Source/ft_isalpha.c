/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptavares <ptavares@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 14:40:55 by ptavares          #+#    #+#             */
/*   Updated: 2025/04/17 19:07:24 by ptavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* checks for an alphabetic character; in the standard "C" locale,
 it is equivalent to(isupper(c)|| islower(c)).
In some locales, there may be additional characters  for  which  isalpha()  is
true—letters which are neither uppercase nor lowercase. */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z')
		|| (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	return (0);
}
