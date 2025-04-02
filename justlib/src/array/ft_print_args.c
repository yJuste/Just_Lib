/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_args.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:                                            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created:   by Just'                               #+#    #+#             */
/*   Updated:   by Just'                              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*   • Displays the arguments from a double str.                              */
/* ************************************************************************** */
#include "justlib.h"

void	ft_print_args(const char *title, const char **arg)
{
	int		i;

	i = 0;
	printf("%s", title);
	while (arg[i])
	{
		printf("arg[%d] = %sEOL\n", i, arg[i]);
		i++;
	}
	printf("--- EOF ---\n");
}
