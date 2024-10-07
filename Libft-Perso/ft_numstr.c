/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_numstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tguerran <tguerran@student.42lehavre.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 16:35:09 by tguerran          #+#    #+#             */
/*   Updated: 2024/10/07 16:37:02 by tguerran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_numstr(char *str)
{
	size_t	i;

	i = 0;
	if ((str[0] == '"' && str[ft_strlen(str) - 1] == '"')
		|| (str[0] == '\'' && str[ft_strlen(str) - 1] == '\''))
	{
		str[ft_strlen(str) - 1] = '\0';
		str++;
	}
	if (str[i] == '+' || str[i] == '-')
		i++;
	while (str[i])
	{
		if (!ft_isdigit(str[i]))
			return (0);
		i++;
	}
	return (1);
}
