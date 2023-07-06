/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbulak-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 18:46:51 by bbulak-b          #+#    #+#             */
/*   Updated: 2023/05/12 11:08:17 by bbulak-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*d;
	char	*s;

	d = (char *) dest;
	s = (char *) src;
	i = 0;
	if (!n || dest == src)
		return (dest);
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}

/*int	main(void)
{
    char	s[] = "memory";
    char	d[4] = "-";
    char	s1[] = "memory";
    char	d1[4] = "-";

	ft_memcpy(d, s, 3);
	printf("son deger: %s\n", d);
	memcpy(d1, s1, 3);
	printf("son deger: %s", d);
	return (0);
}*/
