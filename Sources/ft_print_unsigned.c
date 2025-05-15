/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptavares <ptavares@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 19:55:30 by ptavares          #+#    #+#             */
/*   Updated: 2025/05/13 23:00:09 by pedrotrsilvei    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"

static char	*ft_utoa(unsigned int n)
{
	char			*str;
	int				len;
	unsigned int	aux;

	aux = n;
	len = 1;
	while (aux > 9)
	{
		aux = aux / 10;
		len++;
	}
	str = malloc((len + 1) * sizeof (char));
	if (!str)
		return (NULL);
	str[len] = '\0';
	while (len-- > 0)
	{
		str[len] = (n % 10) + '0';
		n = n / 10;
	}
	return (str);
}

int	ft_print_unsigned(unsigned int n)
{
	char	*str;
	int		len;

	str = ft_utoa(n);
	if (!str)
		return (0);
	ft_putstr_fd(str, 1);
	len = ft_strlen(str);
	free(str);
	return (len);
}
