/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmakaro <anmakaro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 12:09:03 by anmakaro          #+#    #+#             */
/*   Updated: 2023/10/21 20:50:31 by anmakaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int i)
{
	while (*s)
	{
		if (*s == (char)i)
			return ((char *)s);
		s++;
	}
	if (i == '\0')
		return ((char *)s);
	return (0);
}
/*
#include <stdio.h>
#include <string.h>

int main() {
    const char *str = "Hello, World!";
    char searchChar = 'W';

    char *result = strchr(str, searchChar);
	char *result2 = ft_strchr(str, searchChar);

	if (result != NULL) {
        printf("Symbol '%c' in position %ld\n", searchChar, result - str);
        printf("Symbol '%c' in position %ld\n", searchChar, result2 - str);
    } else {
        printf("Symbol '%c' not in string\n", searchChar);
    }


    return 0;
}
*/
