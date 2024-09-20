/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: annmakar <annmakar@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 15:11:04 by annmakar          #+#    #+#             */
/*   Updated: 2024/09/19 21:42:35 by annmakar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char			*sn;
	unsigned char	target;

	sn = (char *)s;
	target = (unsigned char)c;
	while (*sn != '\0')
		sn++;
	while (sn >= s)
	{
		if (*sn == target)
			return (sn);
		sn--;
	}
	return (NULL);
}

// int	main(void)
// {
// 	char	l[50] = "2 flying dragons";
// 	int	k = '3';

// 	printf("%s", ft_strrchr(l, k));
// 	return (0);
// }
