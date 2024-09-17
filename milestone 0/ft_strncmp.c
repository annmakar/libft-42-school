/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: annmakar <annmakar@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 13:36:53 by annmakar          #+#    #+#             */
/*   Updated: 2024/09/17 19:56:31 by annmakar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(char *s1, char *s2, size_t n)
{
	size_t			i;
	unsigned char	*s3;
	unsigned char	*s4;

	i = 0;
	s3 = (unsigned char *)s1;
	s4 = (unsigned char *)s2;
	if (n == 0)
	{
		return (0);
	}
	while (i < n)
	{
		if (s3[i] == s4[i])
			i++;
		else
			return (s3[i] - s4[i]);
	}
	return (0);
}

// int	main(void)
// {
// 	printf("%d", ft_strncmp("Hello", "Hellk", 0));
// 	printf("\n%d", ft_strncmp("Hello", "Hellk", 4));
// 	printf("\n%d", ft_strncmp("Hello", "Hellk", 5));
// 	printf("\n%d", ft_strncmp("Hellk", "Hello", 6));
// 	printf("\n%d", ft_strncmp("Hello", "Hellk", 10));
// 	printf("\n%d", ft_strncmp("Hello", "Hello", 6));
// 	printf("\n%d", ft_strncmp("He", "Hellk", 5));
// 	printf("\n%d", ft_strncmp("Hello", "Hel", 5));

// 	return (0);
// }
