# === CONFIG ===
CC = gcc
CFLAGS = -Wall -Werror -Wextra
AR = ar
ARFLAGS = rcs

# === FILES ===
LIB_NAME = libft.a

SOURCES = \
	ft_isalpha.c \
	ft_isdigit.c \
	ft_isalnum.c \
	ft_isascii.c \
	ft_isprint.c \
	ft_strlen.c \
	ft_memset.c \


OBJECTS = $(SOURCES:.c=.o)

# === TARGETS ===
all: $(LIB_NAME)

$(LIB_NAME): $(OBJECTS)
	$(AR) $(ARFLAGS) $@ $^

# Compile each .c file into a .o file using the pattern rule
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Clean up build files
clean:
	rm -rf $(OBJECTS) $(LIB_NAME)

.PHONY: all clean
