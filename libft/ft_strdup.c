/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: annmakar <annmakar@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 19:57:56 by annmakar          #+#    #+#             */
/*   Updated: 2024/09/19 20:25:58 by annmakar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*l;
	int		i;

	i = 0;
	if (s == NULL)
		return (NULL);
	l = (char *)malloc(ft_strlen(s) + 1);
	if (l == NULL)
		return (NULL);
	while (s[i])
	{
		l[i] = s[i];
		i++;
	}
	l[i] = '\0';
	return (l);
}

// int	main(void)
// {
// 	char	*r;
// 	char	*h;

// 	h = "Hello, BOO!_";
// 	r = ft_strdup(h);
// 	printf("%s\n", r);

// 	free (r);
// 	return (0);
// }
