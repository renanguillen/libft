/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ridalgo- <ridalgo-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 20:47:14 by ridalgo-          #+#    #+#             */
/*   Updated: 2022/04/25 00:38:38 by ridalgo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

static int	ft_count_words(const char *s, char c)
{
	int	count;
	int	validator;
	int	i;

	count = 0;
	validator = 1;
	i = 0;
	while (s[i])
	{
		if (s[i] != c && validator)
		{
			validator = 0;
			count++;
		}
		else if (s[i++] == c)
			validator = 1;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	**ans;
	char	*aux;
	int		word;
	int		i;
	int		j;
	int		start;
	int		end;
	int		size;

	i = 0;
	j = 0;
	aux = ft_strtrim(s, &c);
	if (!aux && aux[i] == 0)
		return (NULL);
	word = ft_count_words(s, c);
	ans = (char **)malloc(sizeof(char *) * (word + 1));
	if (!ans)
		return (NULL);
	while (i < word)
	{
		while (aux[j] == c)
			j++;
		start = j;
		while (aux[j] != c && aux[j])
		{
			if (aux[j + 1] == c || aux[j + 1] == 0)
				end = j;
			j++;
		}
		size = end - start + 1;
		ans[i] = ft_substr(&aux[start], 0, size);
		i++;
	}
	ans[word] = NULL;
	free(aux);
	return (ans);
}
