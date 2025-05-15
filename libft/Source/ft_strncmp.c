/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptavares <ptavares@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 13:27:41 by ptavares          #+#    #+#             */
/*   Updated: 2025/04/17 18:28:51 by ptavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	while (*s1 && *s1 == *s2 && n-- > 0)
	{
		s1++;
		s2++;
	}
	if (n == 0)
		return (0);
	return ((unsigned char )*s1 - (unsigned char )*s2);
}

/*int	main(int argc, char **argv)
{
	int	result;

	if (argc != 4)
	{
		printf("There are more strings than the function allow.");
		return (1);
	}
	result = ft_strncmp(argv[1], argv[2], (size_t)atoi(argv[3]));
	printf("The difference between the values of %s and %s is: %c
	%d", argv[1], argv[2], '\n', result);
	return (0);
}*/
