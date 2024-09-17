/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: annmakar <annmakar@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 15:10:22 by annmakar          #+#    #+#             */
/*   Updated: 2024/09/17 20:05:58 by annmakar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	long long	result;
	int			sign;
	int			sign_count;

	result = 0;
	sign = 1;
	sign_count = 0;
	while (*nptr == ' ' || (*nptr >= 9 && *nptr <= 13))
		nptr++;
	if (*nptr == '+' || *nptr == '-')
	{
		if (*nptr == '-')
			sign = -1;
		nptr++;
	}
	while (*nptr >= '0' && *nptr <= '9')
	{
		result = result * 10 + (*nptr - '0');
		nptr++;
	}
	return (result * sign);
}

// int	main(void)
// {
// 	const char *test1 = "   0";
//     const char *test2 = "-2147483648";
//     const char *test3 = "   +2147483648abc";
//     const char *test4 = "abc123";
//     const char *test5 = "   ";
//     const char *test6 = "+-12";

//     printf("Test 1: \"%s\" -> %d\n", test1, ft_atoi(test1));
//     printf("Test 2: \"%s\" -> %d\n", test2, ft_atoi(test2));
//     printf("Test 3: \"%s\" -> %d\n", test3, ft_atoi(test3));
//     printf("Test 4: \"%s\" -> %d\n", test4, ft_atoi(test4));
//     printf("Test 5: \"%s\" -> %d\n", test5, ft_atoi(test5));
//     printf("Test 6: \"%s\" -> %d\n", test6, ft_atoi(test6));
// 	printf("Orig 1: \"%s\" -> %d\n", test1, atoi(test1));
//     printf("Orig 2: \"%s\" -> %d\n", test2, atoi(test2));
//     printf("Orig 3: \"%s\" -> %d\n", test3, atoi(test3));
//     printf("Orig 4: \"%s\" -> %d\n", test4, atoi(test4));
//     printf("Orig 5: \"%s\" -> %d\n", test5, atoi(test5));
//     printf("Orig 6: \"%s\" -> %d\n", test6, atoi(test6));
// 	return (0);
// }
