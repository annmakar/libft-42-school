/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: annmakar <annmakar@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 15:11:04 by annmakar          #+#    #+#             */
/*   Updated: 2024/09/17 19:56:36 by annmakar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int				i;
	char			*sn;
	unsigned char	target;

	sn = (char *)s;
	i = 0;
	target = c;
	while (sn[i] != '\0')
		i++;
	while (sn[i] != target && i > 0)
		i--;
	if (sn[i] != target && i == 0)
		return (NULL);
	return (&sn[i]);
}

// int	main(void)
// {
// 	char	l[50] = "2 flying dragons";
// 	int	k = 'g';

// 	printf("%s", ft_strrchr(l, k));
// 	return (0);
// }
