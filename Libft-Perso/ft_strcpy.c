/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tguerran <tguerran@student.42lehavre.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 16:20:16 by tguerran          #+#    #+#             */
/*   Updated: 2024/10/07 16:22:38 by tguerran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strcpy(char *dest, const char *src)
{
	const char	*s;
	char		*d;
	size_t		len;

	len = 0;
	d = dest;
	s = src;
	while (*s)
	{
		*d++ = *s++;
		len++;
	}
	while (*s)
	{
		s++;
		len++;
	}
	return (len);
}
