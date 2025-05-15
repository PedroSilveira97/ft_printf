/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptavares <ptavares@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 20:35:34 by ptavares          #+#    #+#             */
/*   Updated: 2025/04/29 20:02:31 by ptavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;

	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	if (!dest && !src)
		return (0);
	if (d < s)
	{
		while (n-- > 0)
		{
			*d = *s;
			d++;
			s++;
		}
	}
	else
	{
		while (n--)
		{
			d[n] = s[n];
		}
	}
	return (dest);
}
