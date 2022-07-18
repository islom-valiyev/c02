/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivaliev <islomvalievabudabi@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 11:24:09 by ivaliev           #+#    #+#             */
/*   Updated: 2022/03/19 12:53:59 by ivaliev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>

int	ft_str_is_printable(char *str)
{
	int		index;
	bool	valid;
	char	c;

	index = 0;
	valid = true;
	while (true)
	{
		c = str[index];
		if (c == '\0')
		{
			break ;
		}
		if (!(c >= ' ') || c == 127)
		{
			valid = false;
			break ;
		}
		index++;
	}
	return (valid);
}
