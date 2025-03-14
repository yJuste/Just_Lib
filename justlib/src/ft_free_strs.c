/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_strs.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:                                            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created:   by Just'                               #+#    #+#             */
/*   Updated:   by Just'                              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*   • Frees a double array of int/chars.                                     */
/* ************************************************************************** */
#include "justlib.h"

void	ft_free_strs(void **strs, size_t len, char char_or_int)
{
	size_t		i;

	i = 0;
	if (!strs)
		return ;
	if (char_or_int == 'c')
	{
		while (strs[i])
		{
			free(strs[i]);
			strs[i] = NULL;
			i++;
		}
	}
	else if (char_or_int == 'i')
	{
		while (i < len)
		{
			free(strs[i]);
			strs[i] = NULL;
			i++;
		}
	}
	free(strs);
	strs = NULL;
}
