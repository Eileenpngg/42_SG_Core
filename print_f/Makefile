CC = cc
CFLAGS = -Wall -Wextra -Werror

NAME = libftprintf.a
SRCS = ft_helper.c \
	ft_printf.c \

OBJS = $(SRCS:.c=.o)

INCS = ft_printf.h

all: $(NAME)

$(NAME) : $(OBJS)
	@$(CC) $(CFLAGS) -c $(SRCS)
	@ar rcs $(NAME) $(OBJS)
	@echo "$(NAME) compiled successfully"

clean:
	@$(RM) $(OBJS)
	@echo "Object files have been cleaned"

fclean: clean
	@$(RM) $(NAME)
	@echo "$(NAME) removed"

re: fclean all

.PHONY: all clean fclean re
