NAME = libjust.a

# Flags
CC = cc
CFLAGS = -Wall -Wextra -Werror

# Directories
SRC_DIR = src
INC_DIR = inc
OBJ_DIR = obj
GNL_DIR = get_next_line

# Files
SRC =	ft_is_separator.c		\
	ft_strlen.c			\
	ft_strslen.c			\
	ft_strdup.c			\
	ft_strsdup.c			\
	ft_strncpy.c			\
	ft_strchr.c			\
	ft_strcmp.c			\
	ft_strncmp.c			\
	ft_split.c			\
	ft_strjoin.c			\
	ft_calloc.c			\
	ft_free_strs.c			\
	ft_putstr_fd.c			\
	$(GNL_DIR)/get_next_line.c

#	lst/ft_lstnew.c			\
#	lst/ft_lstadd_front.c		\
#	lst/ft_lstadd_back.c		\
#	lst/ft_lstsize.c		\
#	lst/ft_lstlast.c		\
#	lst/ft_lstiter.c		\
#	lst/ft_lstmap.c			\
#	lst/ft_lstprint.c		\
#	lst/ft_lstclear.c		\
#	lst/ft_lstdelone.c		\

# Rules
OBJ = $(SRC:%.c=$(OBJ_DIR)/%.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar -rcs $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) -c $< -o $@ -I $(INC_DIR)

# My rules
rf: re
	rm -f $(OBJ)
	rm -f $(NAME)

s:
	ls -lh $(NAME)

.PHONY: all clean fclean re rf s
