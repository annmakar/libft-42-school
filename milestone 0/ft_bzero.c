/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: annmakar <annmakar@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 15:10:25 by annmakar          #+#    #+#             */
/*   Updated: 2024/09/19 18:46:59 by annmakar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_bzero(void *s, size_t n)
{
	unsigned char	*str;
	size_t			i;

	i = 0;
	str = s;
	while (n > i)
	{
		str[i] = 0;
		i++;
	}
	return (s);
}

// int	main(void)
// {
// 	char	s[50] = "dfgdgASD988yy";

// 	ft_bzero(&(s[4]), 3);
// 	printf("%s\n", s);
// 	return (0);
// }
