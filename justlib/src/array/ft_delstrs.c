/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_delstrs.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:                                            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created:   by Just'                               #+#    #+#             */
/*   Updated:   by Just'                              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*   • Deletes the specified strs from an array.                              */
/* ************************************************************************** */
#include "justlib.h"

/*
 * Voici les flags que tu peux mettre:
 *
 * JT_START		   :> continue tant que c'est 'vrai', sinon quitte.
 * JT_REVERT (en cours)	   :> inverse le fonctionnement de la fonction.
 */

// Supprime les tableaux donnés en argument.
int	ft_delstrs(char **arg, const char *strs, const char *flag)
{
	int		i;

	i = 0;
	if (!arg)
		return (1);
	while (arg[i])
	{
		if (ft_strcmp(arg[i], strs) == 0)
		{
			arg = ft_shift(arg, i, 1);
			if (!arg)
				return (1);
			continue ;
		}
		else
		{
			if (ft_strcmp(flag, "JT_START") == 0)
				break ;
		}
		i++;
	}
	return (0);
}
