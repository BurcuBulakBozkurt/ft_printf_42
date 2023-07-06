/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbulak-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 09:23:35 by bbulak-b          #+#    #+#             */
/*   Updated: 2023/06/05 12:41:31 by bbulak-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_word(char const *s, char c)
{
	int	i;
	int	word;

	i = 0;
	word = 0;
	while (s && s[i])
	{
		if (s[i] != c)
		{
			word++;
			while (s[i] != c && s[i])
				i++;
		}
		else
			i++;
	}
	return (word);
}

static int	ft_size_word(char const *s, char c, int i)
{
	int	size;

	size = 0;
	while (s[i] != c && s[i])
	{
		size++;
		i++;
	}
	return (size);
}

static void	ft_free(char **strs, int j)
{
	while (j-- > 0)
		free(strs[j]);
}

static int	ft_getwords(char const *s, char **strs, char c, int word)
{
	int	i;
	int	j;
	int	size;

	i = 0;
	j = 0;
	while (j < word)
	{
		while (s[i] == c)
			i++;
		size = ft_size_word(s, c, i);
		strs[j] = ft_substr(s, i, size);
		if (!strs[j])
		{
			ft_free(strs, j);
			return (1);
		}
		i += size;
		j++;
	}
	strs[j] = NULL;
	return (0);
}

char	**ft_split(char const *s, char c)
{
	int		word;
	char	**strs;

	word = ft_count_word(s, c);
	strs = (char **)malloc((word + 1) * sizeof(char *));
	if (!strs)
		return (NULL);
	if (ft_getwords(s, strs, c, word))
	{
		free(strs);
		return (NULL);
	}
	return (strs);
}

/*int main(void)
{
    char const *s = "Hello,World/This/is,a,test";
    char c = '/';

    char **strs = ft_split(s, c);
    if (strs == NULL)
    {
        printf("Error: ft_split returned NULL\n");
        return 1;
    }

    for (int i = 0; strs[i] != NULL; i++)
    {
        printf("%s\n", strs[i]);
    }

    int word_count = ft_count_word(s, c);
    ft_free(strs, word_count);

    return 0;
}*/
