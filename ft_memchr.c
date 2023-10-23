/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmakaro <anmakaro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 12:09:38 by anmakaro          #+#    #+#             */
/*   Updated: 2023/10/21 20:48:20 by anmakaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char		unc;
	const unsigned char	*src;

	src = s;
	unc = c;
	while (n > 0)
	{
		if (*src == unc)
			return ((void *)src);
		src++;
		n--;
	}
	return (NULL);
}
