/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   justlib.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:                                            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created:   by Just'                               #+#    #+#             */
/*   Updated:   by Just'                              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef JUSTLIB_H
# define JUSTLIB_H

// Standard Libraries

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

// My library

# include "../src/get_next_line/get_next_line.h"

// Structures

typedef struct s_list	t_list;

typedef struct s_list
{
	char		*content;
	t_list		*next;
}	t_list;

/*
 *	JUSTLIB
 */

//	-------------- IS / TO ---------------

int			ft_is_separator(char c, const char *sep);

//	-------------- ARRAYS ----------------

int			ft_strlen(const char *s);

char		*ft_strdup(const char *s);
// deletes specified chars from a string.
void		ft_delchrs(char **s, const char *chrs);
char		*ft_strncpy(char *dest, const char *src, int n);

char		*ft_strchr(const char *s, int c, char strrchr);
int			ft_strcmp(const char *s1, const char *s2);
int			ft_strncmp(const char *s1, const char *s2, int n);

char		**ft_split(const char *s, const char *sep);
char		*ft_strjoin(const char *s1, const char *s2);

//	----------- DOUBLE ARRAYS ------------

int			ft_strslen(const char **s);

char		**ft_strsdup(const char **s);

// look for a the 'n'nth string.
int			ft_look_for(char **arg, char *to_look, int n);
// look for the next chr in the string.
int			ft_next_chr(const char *s, char chr);

// intervert 'range'nth strings at src with the dst.
int			ft_interversion(char **arg, int src, int dst, int range);
// deletes 'range'nth strings at src.
void		ft_shift(char **arg, int src, int range);
// add string at arg.
void		ft_strs_push(char ***arg, char *line);

void		ft_print_args(char *title, char **arg);

//	------------- ALLOCATION -------------

void		*ft_calloc(int count, int size);
void		*ft_realloc(void *ptr, int old, int new);

void		ft_free_strs(void **strs, int len, char char_or_int);
void		ft_free(char *s1, char *s2, char *s3, char **strs);

//	------------- CONVERSION -------------

int			ft_atoi(const char *s);
char		*ft_itoa(int n);

//	--------------- MATHS ----------------

//	--------------- BASE -----------------

//	-------------- MEMORY ----------------

void		*ft_memcpy(void *dst, const void *src, int n);

//	----------- FILE DESCRIPTOR ----------

//	---------- LISTES CHAINEES -----------

t_list		*ft_lstnew(void *content);
void		ft_lstadd_front(t_list **lst, t_list *new);
void		ft_lstadd_back(t_list **lst, t_list *new);

int			ft_lstsize(t_list *lst);
t_list		*ft_lstlast(t_list *lst);
void		ft_lstiter(t_list *lst, void (*f)(void *));
t_list		*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));
void		ft_lstprint(t_list *list);

void		ft_lstclear(t_list **lst, void (*del)(void *));
void		ft_lstdelone(t_list *lst, void (*del)(void *));

#endif
