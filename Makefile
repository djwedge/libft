NAME = libft.a

HEADER = libft.h

CC = gcc

CFLAGS = -Wall -Werror -Wextra

SRC = ft_memset.c \
        ft_bzero.c \
        ft_memcpy.c \
        ft_memccpy.c \
        ft_memmove.c \
        ft_memchr.c \
        ft_memcmp.c \
        ft_strlen.c \
        ft_strdup.c \
        ft_strcpy.c \
        ft_strncpy.c \
        ft_strcat.c \
        ft_strncat.c \
        ft_strlcat.c \
        ft_strchr.c \
        ft_strrchr.c \
        ft_strstr.c \
        ft_strnstr.c \
        ft_strcmp.c \
        ft_strncmp.c \
        ft_atoi.c \
        ft_isalpha.c \
        ft_isdigit.c \
        ft_isalnum.c \
        ft_isascii.c \
        ft_isprint.c \
        ft_toupper.c \
        ft_tolower.c \
        ft_putchar.c \
        ft_putstr.c \
        ft_putendl.c \
        ft_putnbr.c \
        ft_putchar_fd.c \
        ft_putstr_fd.c \
        ft_putendl_fd.c \
        ft_putnbr_fd.c

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME):
	gcc -Wall -Werror -Wextra -c $(SRC) ;
	ar rc $(NAME) $(OBJ) ;
	ranlib $(NAME) ;

clean:
	/bin/rm -f $(OBJ)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all