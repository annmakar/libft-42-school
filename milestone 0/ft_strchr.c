/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: annmakar <annmakar@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 15:10:52 by annmakar          #+#    #+#             */
/*   Updated: 2024/09/19 21:32:54 by annmakar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned char	target;
	char			*sn;

	target = (unsigned char)c;
	sn = (char *)s;
	while (*sn != target)
	{
		if (*sn == '\0')
			return (NULL);
		sn++;
	}
	return (sn);
}

// int	main(void)
// {
// 	char	l[150] = "2 flying dragonsabcdefghijklmnopqrstuvwxyz";
// 	int	k = 'z';
// 	printf("%s\n", ft_strchr(l, k));
// 	return (0);
// }
