/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbulak-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 10:06:10 by bbulak-b          #+#    #+#             */
/*   Updated: 2023/05/16 10:10:38 by bbulak-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return ((char *)(s + i));
		i--;
	}
	return (NULL);
}
/*int main() 
{
    char str[] = "Heybaby";
    char *result = ft_strrchr(str, 'b');
    
    if (result != NULL) {
        printf("Karakter bulundu: %s\n", result);
    } else {
        printf("Karakter bulunamadı\n");
    }
    
    return 0;
}*/
