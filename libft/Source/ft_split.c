/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptavares <ptavares@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 17:24:38 by ptavares          #+#    #+#             */
/*   Updated: 2025/04/29 18:53:00 by ptavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	wcount(const char *s, char c)
{
	size_t	i;
	size_t	count;

	count = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c && (i == 0 || s[i -1] == c))
			count++;
		i++;
	}
	return (count);
}

char	*alloc_word(const char *s, char c)
{
	const char	*word;
	char		*res;
	size_t		len;
	size_t		i;

	len = 0;
	i = 0;
	word = s;
	while (word[len] && word[len] != c)
		len++;
	res = malloc((len + 1) * sizeof (char));
	if (!res)
		return (NULL);
	else
	{
		while (i < len)
		{
			res[i] = s[i];
			i++;
		}
		res[len] = '\0';
	}
	return (res);
}

int	ft_freemalloc(char **array, int i)
{
	if (!array[i - 1])
	{
		while (i > 0)
			free(array[--i]);
		free(array);
		return (1);
	}
	return (0);
}

char	**ft_split(char const *s, char c)
{
	size_t		count;
	char		**array;
	size_t		i;

	i = 0;
	count = wcount(s, c);
	array = malloc((count + 1) * sizeof (char *));
	if (!array)
		return (NULL);
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
		{
			array[i++] = alloc_word(s, c);
			if (ft_freemalloc(array, i))
				return (NULL);
			while (*s && *s != c)
				s++;
		}
	}
	array[i] = NULL;
	return (array);
}
