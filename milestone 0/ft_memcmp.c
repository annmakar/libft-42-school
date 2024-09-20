/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: annmakar <annmakar@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 15:10:39 by annmakar          #+#    #+#             */
/*   Updated: 2024/09/19 18:47:27 by annmakar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
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
// 	printf("%d", ft_memcmp("Hello", "Hellk", 0));
// 	printf("\n%d", ft_memcmp("Hello", "Hellk", 4));
// 	printf("\n%d", ft_memcmp("Hello", "Hellk", 5));
// 	printf("\n%d", ft_memcmp("Hello", "Hellk", 6));
// 	printf("\n%d", ft_memcmp("Hello", "Hellk", 10));
// 	printf("\n%d", ft_memcmp("Hello", "Hello", 6));
// 	printf("\n%d", ft_memcmp("He", "Hellk", 5));
// 	printf("\n%d", ft_memcmp("Hello", "Hel", 5));
// 	return (0);
// }
