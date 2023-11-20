/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmakaro <anmakaro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 12:10:11 by anmakaro          #+#    #+#             */
/*   Updated: 2023/11/19 16:43:05 by anmakaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	little_len;
	size_t	i;

	if (!big || !little)
		return (NULL);
	if (*little == '\0')
		return ((char *)big);
	little_len = 0;
	while (little[little_len])
		little_len++;
	if (len < little_len)
		return (NULL);
	while (*big && len-- >= little_len)
	{
		i = 0;
		while (big[i] == little[i] && i < little_len)
			i++;
		if (i == little_len)
			return ((char *)big);
		big++;
	}
	return (NULL);
}
