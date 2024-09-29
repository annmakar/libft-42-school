/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: annmakar <annmakar@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 15:10:36 by annmakar          #+#    #+#             */
/*   Updated: 2024/09/29 18:13:52 by annmakar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	unsigned char		target;
	const unsigned char	*sn;

	if (n == 0)
		return (NULL);
	i = 0;
	target = (unsigned char)c % 256;
	sn = (const unsigned char *)s;
	while (i < n && sn[i] != target)
		i++;
	if (i < n && sn[i] == target)
		return ((void *)&sn[i]);
	return (NULL);
}

// int	main(void)
// {
// 	char	l[50] = "2 flying dragons";
// 	int	k = '2';
// 	char	*res = ft_memchr(l, k, 6);

// 	printf("%s", res);
// 	return (0);
// }
