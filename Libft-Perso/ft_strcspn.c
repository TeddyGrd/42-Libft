/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcspn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tguerran <tguerran@student.42lehavre.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 16:16:20 by tguerran          #+#    #+#             */
/*   Updated: 2024/10/07 16:19:17 by tguerran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strcspn(const char *s1, const char *s2)
{
	const char	*p1;
	const char	*p2;

	p1 = s1;
	while (*p1 != '\0')
	{
		p2 = s2;
		while (*p2 != '\0')
		{
			if (*p1 == *p2)
				return (p1 - s1);
			p2++;
		}
		p1++;
	}
	return (p1 - s1);
}
