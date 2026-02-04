/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkamil-h <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/31 17:21:27 by tkamil-h          #+#    #+#             */
/*   Updated: 2026/01/31 18:03:56 by tkamil-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char			*last;
	unsigned char	character;

	character = (unsigned char)c;
	last = NULL;
	while (*s != '\0')
	{
		if (*s == character)
			last = ((char *)s);
		s++;
	}
	if (*s == character)
		last = ((char *)s);
	return (last);
}
