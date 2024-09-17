/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: annmakar <annmakar@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 15:10:49 by annmakar          #+#    #+#             */
/*   Updated: 2024/09/17 19:56:12 by annmakar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*str;
	size_t			i;

	i = 0;
	str = s;
	while (n > i)
	{
		str[i] = c;
		i++;
	}
	return (s);
}

// int	main(void)
// {
// 	char	s[50] = "dfgdgASD988yy";

// 	ft_memset(&(s[4]), ' ', 3);
// 	printf("%s\n", s);
// 	return (0);
// }
