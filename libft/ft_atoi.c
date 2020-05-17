/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpadisha <oazisrus@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/30 01:41:08 by lpadisha          #+#    #+#             */
/*   Updated: 2020/05/14 22:11:37 by lpadisha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	ch;
	int	negative;

	ch = 0;
	i = 0;
	while ((str[i]) && ((((str[i] >= 9) && (str[i] <= 13)) || (str[i] == 32))))
		i++;
	negative = 1;
	if (str[i] == '-')
		negative = -1;
	if ((str[i] == '+') || (str[i] == '-'))
		i++;
	while ((str[i]) && (str[i] >= '0') && (str[i] <= '9'))
	{
		ch = ch * 10 + (str[i] - '0');
		i++;
	}
	return (ch * negative);
}
