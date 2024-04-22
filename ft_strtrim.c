/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmakaro <anmakaro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 12:13:19 by anmakaro          #+#    #+#             */
/*   Updated: 2023/10/23 15:19:30 by anmakaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int	ft_check_set(char const *s1, char c)
{
	while (*s1)
	{
		if (*s1 == c)
			return (1);
		s1++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	unsigned int		i;
	unsigned int		j;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	j = ft_strlen(s1) - 1;
	if (*s1 == 0)
		return (ft_strdup((char *)s1));
	if (*set == 0)
		return (ft_strdup(s1));
	while (s1[i] != '\0' && ft_check_set(set, s1[i]) == 1)
		i++;
	while (ft_check_set(set, s1[j]) == 1 && j > i)
		j--;
	return (ft_substr(s1, i, j - i + 1));
}

/*
int main() {
    const char *original_str = "   Hello, World!   ";
    const char *set = " ";

    char *trimmed_str = ft_strtrim(original_str, set);

    if (trimmed_str) {
        printf("Original string: \"%s\"\n", original_str);
        printf("Trimmed string: \"%s\"\n", trimmed_str);
        free(trimmed_str);
    } else {
        printf("Memory allocation failed.\n");
    }

    return (0);
}
*/
