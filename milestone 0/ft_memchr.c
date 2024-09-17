/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: annmakar <annmakar@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 15:10:36 by annmakar          #+#    #+#             */
/*   Updated: 2024/09/17 19:55:59 by annmakar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	target;
	char			*sn;

	i = 0;
	target = c;
	sn = (char *)s;
	while (sn[i] != target && sn[i] != 0 && (i < n))
		i++;
	if (sn[i] == target)
		return (&sn[i]);
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
