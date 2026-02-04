/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkamil-h <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/31 15:22:08 by tkamil-h          #+#    #+#             */
/*   Updated: 2026/01/31 18:06:58 by tkamil-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned char	character;

	character = (unsigned char)c;
	while (*s != '\0')
	{
		if (*s == character)
			return (((char *)s));
		s++;
	}
	if (character == '\0')
		return ((char *)s);
	return (NULL);
}
