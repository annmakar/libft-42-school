/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: annmakar <annmakar@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 18:26:21 by annmakar          #+#    #+#             */
/*   Updated: 2024/09/20 16:47:13 by annmakar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	i;

	i = 0;
	sub = (char *)malloc(sizeof(*s) * (len + 1));
	if (sub == NULL)
		return (NULL);
	while (i < len && s[start] != '\0')
	{
		sub[i] = s[start];
		i++;
		start++;
	}
	return (sub);
}

// int	main(void)
// {
// 	char	*l;
// 	char	s[25] = "Happy!ToSee U";
// 	int	start = 4;

// 	l = ft_substr(s, start, 8);
// 	printf("%s\n", l);
// 	free(l);

// 	return (0);
// }
