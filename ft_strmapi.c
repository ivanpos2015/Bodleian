/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strmap.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewallner <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/05 15:07:56 by ewallner          #+#    #+#             */
/*   Updated: 2016/11/09 19:45:49 by ewallner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"
#include <string.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char	*dest;

	i = 0;
	dest = (char*)malloc(sizeof(*s) * ft_strlen(s) + 1);
	if (dest == NULL)
		return (NULL);
	while (*s && s != NULL)
	{
		dest[i] = f(i, (char)*s++);
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
