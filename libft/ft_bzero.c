/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbulak-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 16:49:11 by bbulak-b          #+#    #+#             */
/*   Updated: 2023/06/28 10:53:48 by bbulak-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*str;

	i = 0;
	str = (char *)s;
	while (i < n)
	{
		str[i] = 0;
		i++;
	}
}

/*int  main(void)
{
  char str[] = "blablabla";
  char c[] = "blablabla";
  printf("str before ft_memset: %s\n", str);
  ft_bzero(str, 3);
  printf("str after ft_memset: %s\n", str);
  printf("before bzero: %s\n", c);
  bzero(c, 3);
  printf("after bzero: %s\n", c);
  return (0);
}*/
