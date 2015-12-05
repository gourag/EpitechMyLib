##
## Makefile for printf in /home/simon_o//printf
## 
## Made by antoine simon
## Login   <simon_o@epitech.net>
## 
## Started on  Thu Nov 15 17:12:48 2012 antoine simon
## Last update Sun Nov 25 14:23:02 2012 antoine simon
##

NAME	= libmy.a

SRC	= my_char_no_impr.c \
	my_printf.c \
	my_printf_flag.c \
	my_putchar.c \
	my_put_nbr_base_unint.c \
	my_put_nbr.c \
	my_putstr.c \
	my_put_nbr_ndisp.c \
	my_pointer.c \
	my_strcat.c \
	my_str_isnum.c \
	my_strncmp.c \
	my_isneg.c \
	my_strcmp.c \
	my_str_isupper.c \
	my_strstr.c \
	my_is_prime.c \
	my_revstr.c \
	my_strcpy.c \
	my_strupcase.c \
	my_power_rec.c \
	my_square_root.c \
	my_str_isalpha.c \
	my_strlowcase.c \
	my_swap.c \
	my_strcapitalize.c \
	my_str_islower.c \
	my_strncat.c \
	my_getnbr.c \
	my_strlen.c

OBJ	= $(SRC:.c=.o)

all:	$(NAME)

$(NAME):	$(OBJ)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)
	cp libmy.a /afs/epitech.net/users/all/simon_o/rendu/lib
	cp my.h /afs/epitech.net/users/all/simon_o/rendu/include

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

re:	fclean all