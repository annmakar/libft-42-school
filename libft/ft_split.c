/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: annmakar <annmakar@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 16:44:06 by annmakar          #+#    #+#             */
/*   Updated: 2024/09/29 17:49:28 by annmakar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_words(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] != c && (s[i + 1] == c || !s[i + 1]))
			count++;
		i++;
	}
	return (count);
}

void	*free_errs(int i, char **res)
{
	while (i >= 0)
		free(res[i--]);
	free(res);
	return (NULL);
}

int	wor_len(const char *s, char c)
{
	if (!ft_strchr(s, c))
		return (ft_strlen(s));
	else
		return (ft_strchr(s, c) - s);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	int		i;
	int		w_len;

	i = 0;
	res = malloc((count_words(s, c) + 1) * sizeof(char *));
	if (!res)
		return (NULL);
	while (*s)
	{
		while (*s == c && *s)
			s++;
		if (*s)
		{
			w_len = wor_len(s, c);
			res[i] = ft_substr(s, 0, w_len);
			if (!res[i++])
				return (free_errs(i, res));
			s += w_len;
		}
	}
	res[i] = NULL;
	return (res);
}

// int	main(void)
// {
// 	char	**a = ft_split("Hello", '\0');
// 	for (size_t i = 0; i < 2; i++)
// 	{
// 		printf("%s\n", a[i]);
// 	}
// }
