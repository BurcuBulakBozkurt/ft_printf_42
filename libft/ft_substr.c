/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbulak-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 15:44:37 by bbulak-b          #+#    #+#             */
/*   Updated: 2023/05/23 11:10:03 by bbulak-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t			i;
	size_t			size;
	unsigned int	s_len;
	char			*substring;

	if (s == NULL)
		return (NULL);
	s_len = ft_strlen(s);
	if (s_len < start)
		return (ft_strdup(""));
	size = ft_strlen(s + start);
	if (size < len)
		len = size;
	substring = (char *)malloc((len + 1) * sizeof(char));
	if (substring == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		substring[i] = s[start + i];
		i++;
	}
	substring[i] = '\0';
	return (substring);
}

/*int main(void) 
{
    char input[] = "Hello, World!";
    unsigned int start = 7;
    size_t len = 5;

    char *substring = ft_substr(input, start, len);

    if (substring != NULL) 
	{
        printf("Substring: %s\n", substring);
        free(substring);
	} 
	else 
	    printf("Failed to extract substring.\n");
    return 0;
}*/
