/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: annmakar <annmakar@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 20:33:44 by annmakar          #+#    #+#             */
/*   Updated: 2024/09/29 17:50:12 by annmakar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*new;
	int		i;
	int		e;
	int		l;

	i = 0;
	l = 0;
	e = ft_strlen(s1) - 1;
	if (s1 == NULL)
		return (NULL);
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	while (s1[i] && e >= 0 && ft_strchr(set, s1[e]))
		e--;
	new = (char *)malloc(sizeof(char) * (e - i + 2));
	if (new == NULL)
		return (NULL);
	while (i <= e)
	{
		new[l] = s1[i];
		i++;
		l++;
	}
	new[l] = '\0';
	return (new);
}

// int	main(void)
// {
// 	const char	*s1 = "bababaab";
// 	const char	*set = "aaaaaaaabaaaaa";
// 	char		*s3 = ft_strtrim(s1, set);
// 	printf("%s\n", s3);
// 	free(s3);
// 	return (0);
// }
