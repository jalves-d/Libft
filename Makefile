# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jalves-d <jalves-d@42lisboa.com>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/02/08 16:31:07 by jalves-d          #+#    #+#              #
#    Updated: 2021/02/24 11:38:57 by jalves-d         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
HEADER	= libft.h
CFLAGS = -Wall -Wextra -Werror
OBJS = $(SRCS:%.c=%.o)
OBJS_BONUS = $(SRCS_BONUS:%.c=%.o)
AR = ar -rcsv

SRCS = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c \
ft_isdigit.c ft_isprint.c ft_itoa.c ft_memccpy.c ft_memchr.c ft_memcmp.c \
ft_memcpy.c ft_memmove.c ft_memset.c ft_strlcpy.c ft_strlcat.c ft_strnstr.c \
ft_strncmp.c ft_strchr.c ft_strrchr.c ft_strdup.c ft_toupper.c ft_tolower.c \
ft_strlen.c ft_strjoin.c ft_strtrim.c ft_split.c ft_substr.c ft_strmapi.c \
ft_putnbr_fd.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c \

SRCS_BONUS =ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c \
ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c \


all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

bonus: $(OBJS) $(OBJS_BONUS)
	$(AR) $(NAME) $(OBJS) $(OBJS_BONUS)

$(DIR_OBJS)%.o: %.c
	gcc $(CFLAGS) -include $(HEADER) -c $< -o $@

clean:
	rm -rf ft_*.o

fclean: clean
	rm -f $(NAME)

re: fclean all

rebonus: fclean bonus

.PHONY:		all clean fclean re bonus rebonus
