/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhleena <jhleena@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/06 13:04:25 by jhleena           #+#    #+#             */
/*   Updated: 2020/11/06 13:23:11 by jhleena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int i;
	int result;
	int sign;
	
	i = 0;
	sign = 1;
	result = 0;
	if (str[i] == ' ')
		i++;
	if ((str[i] == '-') || (str[i] == '+'))
	{
		sign = (str[i] == '-')?(-1):(1);
		i++;
	}
	while (str[i]<='9' && str[i]>= '0')
	{
		result = 10 * result + (str[i] - '0');
		i++;
	}
	result (result * sign);
}