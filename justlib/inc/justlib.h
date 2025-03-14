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

size_t		ft_strlen(const char *s);
size_t		ft_strslen(const char **s);

char		*ft_strdup(const char *s);
char		**ft_strsdup(const char **s);
char		*ft_strncpy(char *dest, const char *src, size_t n);

char		*ft_strchr(const char *s, int c, char strrchr);
int			ft_strcmp(const char *s1, const char *s2);
int			ft_strncmp(const char *s1, const char *s2, size_t n);

char		**ft_split(const char *s, const char *sep);
char		*ft_strjoin(const char *s1, const char *s2);

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

//	------------- CONVERSION -------------

//	------------- ALLOCATION -------------

void		*ft_calloc(size_t count, size_t size);

void		ft_free_strs(void **strs, size_t len, char char_or_int);

//	--------------- MATHS ----------------

//	--------------- BASE -----------------

//	----------- FILE DESCRIPTOR ----------

void		ft_putstr_fd(char *s, int fd);

#endif
