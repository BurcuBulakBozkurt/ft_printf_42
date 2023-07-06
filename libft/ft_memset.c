/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbulak-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 12:46:43 by bbulak-b          #+#    #+#             */
/*   Updated: 2023/06/28 10:55:24 by bbulak-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*ptr;
	size_t			i;

	ptr = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		ptr[i] = (unsigned char)c;
		i++;
	}
	return (s);
}

/*int	main(void)
{
	char	str[] = "blablabla";
	char	c[] = "blablabla";

	printf("str before ft_memset: %s\n", str);
	ft_memset(str, 'b', 3);
	printf("str after ft_memset: %s\n", str);
	printf("c before memset: %s\n", c);
	memset(c, 'b', 3);
	printf("c after memset: %s\n", c);
	return (0);
}*/
