NAME    = libft.a

SRCS    = ft_isalpha.c\
          ft_isdigit.c\
          ft_isalnum.c\
          ft_isascii.c\
          ft_isprint.c\
          ft_strlen.c\
	    ft_memset.c\
          ft_bzero.c\
          ft_memcpy.c\
	    ft_memmove.c\
	    ft_strlcpy.c\
	    ft_memcpy.c\
	    ft_memcpy.c\
	    ft_memcpy.c\
	    ft_memcpy.c\
	    ft_memcpy.c\
	    ft_memcpy.c\
	    ft_memcpy.c\
	    ft_memcpy.c\
	    ft_memcpy.c\
	    ft_memcpy.c\
	    ft_memcpy.c\
	    ft_memcpy.c\
	    ft_memcpy.c\
	    ft_memcpy.c\
	    ft_memcpy.c\
	    ft_memcpy.c\
	    ft_memcpy.c\
	    ft_memcpy.c\
	    ft_memcpy.c\
	    ft_memcpy.c\
	    ft_memcpy.c\
	    ft_memcpy.c\
	    ft_memcpy.c\
	    ft_memcpy.c\
	    ft_memcpy.c\
	    ft_memcpy.c\
	    ft_memcpy.c\
	    ft_memcpy.c\
	    ft_memcpy.c\
	    ft_memcpy.c\
	    ft_memcpy.c\
	    ft_memcpy.c\
	    ft_memcpy.c\
	    ft_memcpy.c\
	    ft_memcpy.c\
	    ft_memcpy.c\
	    ft_memcpy.c\
          ft_putnbr_fd.c

OBJS    = $(SRCS:.c=.o)

LIBC    = ar rcs
CC      = gcc
RM      = rm -f
CFLAGS  = -Wall -Wextra -Werror
INCS    = libft.h

$(NAME): $(OBJS) $(INCLUDE)
	$(LIBC) $(NAME) $(OBJS)

all:    $(NAME)

clean:
	$(RM) $(OBJS) $(BONUS_OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all bonus clean fclean re .c .o
