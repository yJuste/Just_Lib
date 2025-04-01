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
	ft_count_chr.c			\
	ft_strdup.c			\
	ft_delchrs.c			\
	ft_strcpy.c			\
	ft_strncpy.c			\
	ft_strchr.c			\
	ft_strcmp.c			\
	ft_strncmp.c			\
	ft_split.c			\
	ft_strjoin.c			\
	ft_strslen.c			\
	ft_strsdup.c			\
	ft_next_str.c			\
	ft_next_chr.c			\
	ft_interversion.c		\
	ft_shift.c			\
	ft_strs_push.c			\
	ft_print_args.c			\
	ft_calloc.c			\
	ft_realloc.c			\
	ft_free_array.c			\
	ft_free.c			\
	ft_atoi.c			\
	ft_itoa.c			\
	ft_memcpy.c			\
	lst/ft_lstnew.c			\
	lst/ft_lstadd_front.c		\
	lst/ft_lstadd_back.c		\
	lst/ft_lstsize.c		\
	lst/ft_lstlast.c		\
	lst/ft_lstiter.c		\
	lst/ft_lstmap.c			\
	lst/ft_lstprint.c		\
	lst/ft_lstclear.c		\
	lst/ft_lstdelone.c		\
	$(GNL_DIR)/get_next_line.c	\

# Colors
RESET			= "\033[0m"
GREEN			= "\033[32m"	# Green
RED			= "\033[91m"	# Red
YELLOW			= "\033[33m"	# Yellow


# Rules
OBJ = $(SRC:%.c=$(OBJ_DIR)/%.o)

all: credit $(NAME)
	@echo $(GREEN)"--- 📍 La justlib has been created. 📍 ---"$(RESET)

$(NAME): $(OBJ)
	@ar -rcs $(NAME) $(OBJ)

clean:
	@rm -rf $(OBJ_DIR)

fclean: clean
	@rm -f $(NAME)

re: fclean all

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	@mkdir -p $(dir $@)
	@$(CC) $(CFLAGS) -c $< -o $@ -I $(INC_DIR)

credit:
	@echo $(YELLOW)
	@echo ".---------------------------------------------------------."
	@echo "|          🎉  Merci d'utiliser la justlib. 🎉            |"
	@echo "|                                                         |"
	@echo "| * Si vous rencontrez une erreur, veuillez ouvrir une    |"
	@echo "|   'pull request', ceci me permettrait de l'améliorer    |"
	@echo "|   dans le futur, merci. 😁                              |"
	@echo "|                                                         |"
	@echo "| EOF:                                                    |"
	@echo "| Dernière modification le 14 Mars 2025 par Juste.        |"
	@echo ".---------------------------------------------------------."
	@echo $(RESET)

# My rules
rf: re
	rm -rf $(OBJ_DIR)
	rm -f $(NAME)

s:
	ls -lh $(NAME)

.PHONY: all clean fclean re rf s
