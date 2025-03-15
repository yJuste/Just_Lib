/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_look_for.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:                                            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created:   by Just'                               #+#    #+#             */
/*   Updated:   by Just'                              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*   • Look for `to_look` and return its position.                            */
/* ************************************************************************** */
#include "justlib.h"

int	ft_look_for(char **arg, char *to_look, int from)
{
	while (arg[from])
	{
		if (ft_strcmp(arg[from], to_look) == 0)
			return (from);
		from++;
	}
	return (-1);
}
