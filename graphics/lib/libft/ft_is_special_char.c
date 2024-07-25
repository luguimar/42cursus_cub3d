/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_special_char.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luguimar <luguimar@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 02:02:07 by luguimar          #+#    #+#             */
/*   Updated: 2024/04/26 23:02:18 by luguimar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_is_special_char(char c)
{
	if (c == ' ' || c == '$' || c == '\"' || c == '\'' || c == '\\' || \
	c == '/' || c == '\0' || c == '!' || c == '#' || c == '%' \
	|| c == '&' || c == '(' || c == ')' || c == '=' || \
	c == '?' || c == '@' || c == '{' || c == '[' || c == ']' \
	|| c == '}' || c == '`' || c == '~' || c == '+' || c == '*' \
	|| c == '-' || c == '.' || c == ':' || c == ',' || c == ';' \
	|| c == '<' || c == '>' || c == '|' || c == '^' || c == '\t' \
	|| c == '\n' || c == '\v' || c == '\f' || c == '\r' || c == '\a' \
	|| c == '\b')
		return (1);
	return (0);
}
