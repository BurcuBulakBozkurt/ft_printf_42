/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbulak-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 10:06:38 by bbulak-b          #+#    #+#             */
/*   Updated: 2023/05/25 15:50:32 by bbulak-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	srcsize;
	size_t	i;

	srcsize = 0;
	while (src[srcsize])
		srcsize++;
	i = 0;
	if (size != 0)
	{
		while (src[i] != '\0' && i < (size -1))
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (srcsize);
}

/*int main(void)
{
    char src[] = "Hello";
    char dest[10];
    
    size_t len = ft_strlcpy(dest, src, sizeof(dest));
    
    printf("Copied string: %s\n", dest);
    printf("Length of copied string: %zu\n", len);
    
    return 0;
}*/
