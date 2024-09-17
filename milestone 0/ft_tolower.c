/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: annmakar <annmakar@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 15:11:07 by annmakar          #+#    #+#             */
/*   Updated: 2024/09/17 20:04:52 by annmakar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c += 32;
	return (c);
}

// int	main(void)
// {
// 	char c1 = 'A';
// 	char c2 = 'z';
// 	char c3 = 'H';
// 	char c4 = '1';
// 	char c5 = '!';

// 	printf("Original: %c, Uppercase: %c\n", c1, ft_tolower(c1));
// 	printf("Original: %c, Uppercase: %c\n", c2, ft_tolower(c2));
// 	printf("Original: %c, Uppercase: %c\n", c3, ft_tolower(c3));
// 	printf("Original: %c, Uppercase: %c\n", c4, ft_tolower(c4));
// 	printf("Original: %c, Uppercase: %c\n", c5, ft_tolower(c5));

// 	return (0);
// }
