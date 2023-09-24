# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: epng <marvin@42.fr>                        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/20 16:24:11 by epng              #+#    #+#              #
#    Updated: 2023/09/24 15:44:48 by epng             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Wextra -Werror

NAME = libft.a
SRCS = ft_isalpha.c \
       ft_isdigit.c \
       ft_isalnum.c \
       ft_isascii.c \
       ft_isprint.c \
       ft_strlen.c \
       ft_memset.c \
       ft_bzero.c \
       ft_memcpy.c \
       ft_memmove.c \
       ft_strlcpy.c \
       ft_strlcat.c \
       ft_toupper.c \
       ft_tolower.c \
       ft_strchr.c \
       ft_strrchr.c \
       ft_strncmp.c \
       ft_memchr.c \
       ft_memcmp.c \
       ft_strnstr.c \
       ft_atoi.c \
       ft_calloc.c \
       ft_strdup.c \
       ft_substr.c \
       ft_strjoin.c \
       ft_strtrim.c \
       ft_split.c \
       ft_itoa.c \
       ft_strmapi.c \
       ft_striteri.c \
       ft_putchar_fd.c \
       ft_putstr_fd.c \
       ft_putendl_fd.c \
       ft_putnbr_fd.c \

SRCSB= ft_lstnew.c \
       ft_lstadd_front.c \
       ft_lstsize.c \
       ft_lstlast.c \
       ft_lstadd_back.c \
       ft_lstdelone.c \
       ft_lstclear.c \
       ft_lstiter.c \
       ft_lstmap.c \

OBJS = $(SRCS:.c=.o)
BOBJS = $(SRCSB:.c=.o)

INCS = libft.h

all: $(NAME)

$(NAME) : $(OBJS)
	@$(CC) $(CFLAGS) -c $(SRCS)
	@ar rcs $(NAME) $(OBJS)
	@echo "$(NAME) compiled successfully"

bonus: $(BOBJS)
	@$(CC) $(CFLAGS) -c $(SRCSB)
	@ar rcs $(NAME) $(BOBJS)
	@echo "$(NAME) compiled successfully"


clean:
	@$(RM) $(OBJS) $(BOBJS)
	@echo "Object files cleaned"

fclean: clean
	@$(RM) $(NAME)
	@echo "$(NAME) removed"

re: fclean all

.PHONY: all clean fclean re
