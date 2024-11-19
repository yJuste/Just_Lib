/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_stack.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:                                            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created:   by Just'                               #+#    #+#             */
/*   Updated:   by Just'                              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*   • Converts an int to a str.                                              */
/*   • Prototype:   VOID ( int, char * )                                      */
/* ************************************************************************** */
#include "just_lib_stack.h"

void	ft_itoa_stack(int src, char *dest)
{
	int	len;

	len = ft_intlen((long)src);
	dest[len] = '\0';
	if (src == -2147483648)
	{
		ft_strdup_stack("-2147483648", dest);
		return ;
	}
	if (src == 0)
	{
		dest[0] = '0';
		dest[1] = '\0';
		return ;
	}
	if (src < 0)
	{
		dest[0] = '-';
		src = -src;
	}
	while (src)
	{
		dest[--len] = src % 10 + '0';
		src /= 10;
	}
}
