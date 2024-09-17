/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: annmakar <annmakar@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 15:10:52 by annmakar          #+#    #+#             */
/*   Updated: 2024/09/17 19:56:15 by annmakar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <string.h>

char	*ft_strchr(const char *s, int c)
{
	int				i;
	unsigned char	target;
	char			*sn;

	i = 0;
	target = c;
	sn = (char *)s;
	while (sn[i] != target && sn[i] != 0)
		i++;
	if (sn[i] != target && i == 0)
		return (NULL);
	return (&sn[i]);
}

// int	main(void)
// {
// 	char	l[150] = "2 flying dragonsabcdefghijklmnopqrstuvwxyz";
// 	int	k = 354; //(b) 00000001 00111001

// 	printf("OK: %s\n", strchr(l, k));
// 	printf("FT: %s\n", ft_strchr(l, k));
// 	return (0);
// }
