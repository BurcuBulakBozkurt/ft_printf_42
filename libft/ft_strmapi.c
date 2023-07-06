/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbulak-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 12:33:29 by bbulak-b          #+#    #+#             */
/*   Updated: 2023/05/23 14:18:47 by bbulak-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	len;
	size_t	i;
	char	*str;

	i = 0;
	if (!s || !f)
		return (0);
	len = ft_strlen(s);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (! (str))
		return (0);
	while (i < len)
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}

/*char modifyChar(unsigned int index, char c)
{
    if (index % 2 == 0)
        return c + 1;  // Increment the character by 1 if the index is even
    else
        return c;      // Return the character as is if the index is odd
}

int main()
{
    const char* input = "Hello, World!";
    char* result = ft_strmapi(input, &modifyChar);

    printf("Original String: %s\n", input);
    printf("Modified String: %s\n", result);

    free(result):
    return 0;
}*/
