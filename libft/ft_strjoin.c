/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: annmakar <annmakar@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 19:34:01 by annmakar          #+#    #+#             */
/*   Updated: 2024/09/29 19:00:37 by annmakar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s3;
	int		i;
	int		g;

	i = 0;
	g = 0;
	s3 = (char *)malloc((sizeof(*s1) * ft_strlen(s1)) \
	+ (sizeof(*s2) * ft_strlen(s2)) + 1);
	if (s3 == NULL)
		return (NULL);
	while (s1[i] != '\0')
	{
		s3[i] = s1[i];
		i++;
	}
	while (s2[g] != '\0')
	{
		s3[i] = s2[g];
		i++;
		g++;
	}
	s3[i] = '\0';
	return (s3);
}

// int	main(void)
// {
// 	const char	*s1 = "Hello, ";
// 	const char	*s2 = "World!";
// 	char	*r = ft_strjoin(s1, s2);

// 	printf("%s\n", r);
// 	free(r);

// 	return (0);
// }
