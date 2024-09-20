/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: annmakar <annmakar@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 20:33:44 by annmakar          #+#    #+#             */
/*   Updated: 2024/09/20 18:03:38 by annmakar         ###   ########.fr       */
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
	while (ft_strchr(set, s1[i]))
		i++;
	while (e >= 1 && ft_strchr(set, s1[e]))
		e--;
	new = (char *)malloc(sizeof(new) * (e - i + 2));
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
// 	const char	*s1 = "FilLdfuhsufFilL";
// 	const char	*set = "FilL";

// 	printf("%s\n", ft_strtrim(s1, set));
// 	free(ft_strtrim(s1, set));
// 	return (0);
// }
