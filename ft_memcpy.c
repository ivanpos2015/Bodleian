/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewallner <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 21:04:08 by ewallner          #+#    #+#             */
/*   Updated: 2016/11/08 14:01:14 by ewallner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memcpy(void *dest, const void *src, size_t len)
{
	size_t		i;
	unsigned char *dest2 = (unsigned char*)dest;
	unsigned char *src2 = (unsigned char*)src;

	i = 0;
	while (i < len)
	{
		dest2[i] = src2[i];
		i++;
	}
	return (dest);
}
