/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivaliev <islomvalievabudabi@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 11:13:19 by ivaliev           #+#    #+#             */
/*   Updated: 2022/03/19 12:43:43 by ivaliev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_str_is_uppercase(char *str)
{
	int	c;

	c = 0;
	while (str[c] != '\0')
	{
		if ((str[c] < 'A') || (str[c] > 'Z'))
			return (0);
		c++;
	}
	return (1);
}
/*
int main ()
{
	printf("%d" , ft_str_is_uppercase("AQWERTYUIOPLKJHGFDSAZXVBNM"));
	printf("%d", ft_str_is_uppercase("hguhguer23156"));
}*/
