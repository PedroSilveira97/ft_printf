/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptavares <ptavares@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 19:31:21 by ptavares          #+#    #+#             */
/*   Updated: 2025/04/23 21:49:31 by ptavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	strsize(int n)
{
	int		count;
	long	nb;

	nb = n;
	count = 0;
	if (nb < 0)
	{
		count++;
		nb = -nb;
	}
	else if (nb == 0)
		return (1);
	while (nb != 0)
	{
		nb = nb / 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	long		nb;
	char		*str;
	int			count;

	count = strsize(n);
	nb = n;
	str = malloc((count + 1) * sizeof (char));
	if (!str)
		return (NULL);
	str[count] = '\0';
	if (nb < 0)
	{
		str[0] = '-';
		nb = -nb;
	}
	if (nb == 0)
		str[0] = '0';
	while (nb > 0)
	{
		str[--count] = (nb % 10) + '0';
		nb = nb / 10;
	}
	return (str);
}
