# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cwongsop <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/19 21:55:17 by cwongsop          #+#    #+#              #
#    Updated: 2022/03/12 00:03:50 by cwongsop         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft

SRC = ft_isalpha.c\
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
	  ft_strlcat.c\
	  ft_toupper.c\
	  ft_tolower.c\
	  ft_strchr.c\
	  ft_strrchr.c\
	  ft_strncmp.c\
	  ft_memchr.c\
	  ft_memcmp.c\
	  ft_strnstr.c\
	  ft_atoi.c\
	  ft_calloc.c\
	  ft_strdup.c\
	  ft_substr.c\
	  ft_strjoin.c\
	  ft_strtrim.c\
	  ft_split.c

#SRC_BONUS = ft_substr.c

OBJ = $(SRC:.c=.o)

#OBJ_BONUS = $(SRC_BOUNUS:.c=.o)

FLAGS = -Wall -Wextra -Werror

RED := "\033[0;31m"

all: $(NAME)

$(NAME): $(OBJ)
	ar -crs $(NAME).a $(OBJ)

#$(OBJ): $(SRC) $(NAME).h
#	gcc $(FLAGS) -c $(SRC)

%.o: %.c
	gcc $(FLAGS) -c $< -o $@

clean: 
	rm -f *.o

fclean: clean 
	rm -f $(NAME).a

re: fclean all

read:
	@read -p "Test massage: " MSG;\
	if [ "test" = "test" ];\
	then\
		echo "$$MSG";\
	fi

git:
	git add ft*.c libft.h Makefile
	git status
	@read -p "Confirm adding [y/n]: " USER;\
		if [ $$USER = "y" ];\
		then\
			read -p "Enter commit massage: " MSG; \
			git commit -m "$$MSG";\
			git push;\
		else\
			echo $(RED)"Incomplete";\
		fi
	
test:
	@gcc $(FLAGS) main.c -L. -lft
	@./a.out | cat -e
	@rm -f a.out

test1:
	@echo "Tripouille test"
	@read -p "Enter tested function: " FN;\
		cd /Users/cwongsop/libft/tester/Tripouille && make $$FN

test2:
	@echo "jtoty"
	@bash ./tester/jtoty/grademe.sh
