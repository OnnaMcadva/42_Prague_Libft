/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmakaro <anmakaro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 12:09:24 by anmakaro          #+#    #+#             */
/*   Updated: 2023/10/21 20:51:53 by anmakaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*last_occur;

	last_occur = NULL;
	while (*s)
	{
		if (*s == (char)c)
			last_occur = (char *)s;
		s++;
	}
	if ((char)c == '\0')
		return ((char *)s);
	return (last_occur);
}
