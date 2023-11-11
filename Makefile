SRCS = ft_strtrim.c ft_substr.c ft_strmapi.c ft_striteri.c ft_strjoin.c ft_calloc.c ft_atoi.c ft_putstr_fd.c ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_strlen.c  ft_strlcat.c ft_split.c ft_strdup.c ft_memset.c ft_bzero.c ft_memcpy.c  ft_memmove.c ft_memchr.c ft_memcmp.c ft_strlcpy.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_toupper.c ft_tolower.c
BONUS_SRCS = ft_lstnew.c ft_lstadd_front.c 
CFLAGS = -Wall -Wextra -Werror -fsanitize=address
NAME = libft.a
OBJS = $(SRCS:.c=.o)
BONUS_OBJS = $(BONUS_SRCS:.c=.o)

$(NAME) : $(OBJS)
	@ar -rc $(NAME) $(OBJS) > /dev/null

all : $(NAME)

$(OBJS) : %.o : %.c
	@gcc $(CFLAGS) -c $< -o $@

bonus : $(BONUS_OBJS) $(OBJS)
	@ar -rc $(NAME) $(BONUS_OBJS) $(OBJS) > /dev/null

$(BONUS_OBJS) : %.o : %.c
	@gcc $(CFLAGS) -c $< -o $@

clean :
	@rm -f $(OBJS) $(BONUS_OBJS) > /dev/null 2>&1

fclean : clean
	@rm -f $(NAME) > /dev/null 2>&1

re : fclean all

.PHONY: all clean fclean re bonus
