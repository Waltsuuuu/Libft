CC = cc
CFLAGS = -Wall -Werror -Wextra -Iincludes
AR = ar
ARFLAGS = rcs

LIB_NAME = libft.a

SOURCES = \
	character/ft_isalpha.c \
	character/ft_isdigit.c \
	character/ft_isalnum.c \
	character/ft_isascii.c \
	character/ft_isprint.c \
	character/ft_toupper.c \
	character/ft_tolower.c \
	string/ft_strlen.c \
	string/ft_strlcpy.c \
	string/ft_strlcat.c \
	string/ft_strchr.c \
	string/ft_strrchr.c \
	string/ft_strncmp.c \
	string/ft_strnstr.c \
	string/ft_atoi.c \
	string/ft_strdup.c \
	string/ft_substr.c \
	string/ft_strjoin.c \
	string/ft_strtrim.c \
	string/ft_split.c \
	string/ft_itoa.c \
	string/ft_strmapi.c \
	string/ft_striteri.c \
	string/ft_putchar_fd.c \
	string/ft_putstr_fd.c \
	string/ft_putendl_fd.c \
	string/ft_putnbr_fd.c \
	memory/ft_memset.c \
	memory/ft_bzero.c \
	memory/ft_memcpy.c \
	memory/ft_memmove.c \
	memory/ft_memchr.c \
	memory/ft_memcmp.c \
	memory/ft_calloc.c \
	linked_list/ft_lstnew_bonus.c \
	linked_list/ft_lstadd_front_bonus.c \
	linked_list/ft_lstsize_bonus.c \
	linked_list/ft_lstlast_bonus.c \
	linked_list/ft_lstadd_back_bonus.c \
	linked_list/ft_lstdelone_bonus.c \
	linked_list/ft_lstclear_bonus.c \
	linked_list/ft_lstiter_bonus.c \
	linked_list/ft_lstmap_bonus.c 

OBJECTS = $(SOURCES:.c=.o) 

all: $(LIB_NAME)

$(LIB_NAME): pre $(OBJECTS)
	@$(AR) $(ARFLAGS) $(LIB_NAME) $(OBJECTS)
	@echo "Libft compiled successfully!"

pre: 
	@echo "Compiling..."

%.o: %.c
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@rm -rf $(OBJECTS)
	@echo "Removed Libft .o files."

fclean: clean
	@rm -rf $(LIB_NAME)
	@echo "Removed Libft library."

re: fclean all

.PHONY: all clean fclean re
