/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptavares <ptavares@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 14:21:01 by ptavares          #+#    #+#             */
/*   Updated: 2025/04/18 11:03:36 by ptavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

size_t	size_dest(const char *dest, size_t size)
{
	size_t	dlen;

	dlen = 0;
	while (dest[dlen] && dlen < size)
	{
		dlen++;
	}
	return (dlen);
}

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	dlen;
	size_t	slen;

	i = 0;
	dlen = size_dest(dest, size);
	slen = 0;
	if (size == 0)
		return (ft_strlen(src) + size);
	while (src[slen])
		slen++;
	while (dlen + i < size - 1 && *src)
	{
		dest[dlen + i] = *src;
		i++;
		src++;
	}
	if (dlen + i < size)
		dest[dlen + i] = '\0';
	return (dlen + slen);
}

/* int	main(void)
{
	int	result;
	char	dest[]= "a";
	result = ft_strlcat(dest, "lorem ipsum dolor sit amet", 0);
    write(1, "\n", 1);
    write(1, dest, 15);
} */
