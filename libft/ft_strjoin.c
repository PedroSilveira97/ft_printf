/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptavares <ptavares@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/13 20:30:35 by ptavares          #+#    #+#             */
/*   Updated: 2025/04/17 18:31:35 by ptavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s3;
	char	*dest;
	size_t	len1;
	size_t	len2;

	len1 = 0;
	len2 = 0;
	while (s1[len1])
		len1++;
	while (s2[len2])
		len2++;
	s3 = malloc((len1 + len2 + 1) * sizeof (char));
	dest = s3;
	if (!s3)
		return (NULL);
	while (*s1)
		*s3++ = *s1++;
	while (*s2)
		*s3++ = *s2++;
	*s3 = '\0';
	return (dest);
}
