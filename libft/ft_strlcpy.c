/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptavares <ptavares@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 12:48:26 by ptavares          #+#    #+#             */
/*   Updated: 2025/04/17 18:24:13 by ptavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t l)
{
	size_t	slen;

	slen = 0;
	while (src[slen])
		slen++;
	if (l > 0)
	{
		while (l > 1 && *src)
		{
			*dest = *src;
			dest++;
			src++;
			l--;
		}
		*dest = '\0';
	}
	return (slen);
}

/*int	main(void)
{
	const char 	src[] = "Capivara";
	char	dest[0];
	size_t		size;

	size = 4;
	printf("%s\n", dest);
	printf("A string de origem tem %zu letras", ft_strlcpy(dest, src, size));
}
*/
