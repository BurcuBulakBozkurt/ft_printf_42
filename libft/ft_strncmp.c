/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbulak-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 10:56:35 by bbulak-b          #+#    #+#             */
/*   Updated: 2023/05/16 12:43:45 by bbulak-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] == s2[i] && i < n - 1 && (s1[i] != '\0' || s2[i] != '\0'))
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

/*int	main(void)
{
	char	s1[] = "hello";

	printf("First check: %d\n", ft_strncmp(s1, "hello", 5));
	printf("First check: %d\n", strncmp(s1, "hello", 5));
	printf("Second check: %d\n", ft_strncmp(s1, "hel", 5));
	printf("Second check: %d\n", strncmp(s1, "hel", 5));
	printf("Third check: %d\n", ft_strncmp(s1, "hellohello", 5));
	printf("Third check: %d\n", strncmp(s1, "hellohello", 5));
	return (0);
}*/
