# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mel-harc <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/25 19:30:45 by mel-harc          #+#    #+#              #
#    Updated: 2022/11/03 18:30:27 by mel-harc         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = 	ft_calloc.c ft_isascii.c ft_itoa.c ft_memcpy.c ft_putendl_fd.c ft_split.c ft_striteri.c ft_strlcpy.c  ft_strncmp.c ft_strtrim.c ft_toupper.c \
		ft_atoi.c ft_isalnum.c ft_isdigit.c ft_memchr.c ft_memmove.c ft_putnbr_fd.c ft_strchr.c ft_strjoin.c ft_strlen.c ft_strnstr.c ft_substr.c \
		ft_bzero.c ft_isalpha.c ft_isprint.c ft_memcmp.c ft_memset.c ft_putstr_fd.c ft_strdup.c ft_strlcat.c ft_strmapi.c ft_strrchr.c ft_tolower.c ft_putchar_fd.c

SRCS_BONUS = ft_lstadd_back.c ft_lstadd_front.c ft_lstclear.c ft_lstdelone.c ft_lstlast.c ft_lstnew.c ft_lstsize.c ft_lstiter.c ft_lstmap.c

CC		= cc

FLAGS	=  -Wall -Wextra -Werror

RM		= rm -f

NAME	= libft.a

OBJS	= ${SRCS:.c=.o}

OBJS_BONUS = ${SRCS_BONUS:.c=.o}


all :	${NAME}

${NAME} :	${OBJS}
			ar rc ${NAME} ${OBJS}

%.o: %.c 	libft.h
			${CC} ${FLAGS} -c $< -o $@

clean :
			${RM} ${OBJS} ${OBJS_BONUS}

fclean :		clean
			${RM} ${NAME}

re :	 fclean all

bonus :	 ${OBJS_BONUS}
		 ar rc ${NAME} ${OBJS_BONUS}
