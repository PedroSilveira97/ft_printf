/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptavares <ptavares@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/13 20:52:15 by ptavares          #+#    #+#             */
/*   Updated: 2025/04/17 21:17:46 by ptavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, const char *set)
{
	const char	*start;
	const char	*end;
	char		*s2;
	size_t		len;

	if (!s1 || !set)
		return (NULL);
	start = s1;
	while (*start && ft_strchr(set, *start))
		start++;
	end = s1 + ft_strlen(s1) - 1;
	while (end > start && ft_strchr(set, *end))
		end--;
	if (end >= start)
		len = (end - start + 1);
	else
		len = 0;
	s2 = malloc((len + 1) * sizeof (char));
	if (!s2)
		return (NULL);
	ft_strlcpy(s2, start, len + 1);
	return (s2);
}
