# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bruteflow <bruteflow@student.42.fr>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/12/08 14:24:38 by mvlad             #+#    #+#              #
#    Updated: 2017/10/04 23:06:34 by bruteflow        ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 	= libftprintf.a
SRC_DIR = ./src/
OBJ_DIR = ./obj/
INC_DIR = ./inc/
HEADERS	= $(INC_DIR)
ODIRS 	:= ./obj ./obj/ft ./obj/parse ./obj/print ./obj/handlers ./obj/handlers/types

OBJ	=	init_printf.o \
		ft_printf.o \
		print/print_prefix_pad.o \
		print/ft_print.o \
		handlers/handle_bases.o \
		handlers/handle_numbers.o \
		handlers/handle_numbers_sup.o \
		handlers/types/handle_char.o \
		handlers/types/handle_char_w.o \
		handlers/types/handle_hex_big.o \
		handlers/types/handle_hex_small.o \
		handlers/types/handle_int.o \
		handlers/types/handle_int_long.o \
		handlers/types/handle_octal_uint.o \
		handlers/types/handle_octal_ulong.o \
		handlers/types/handle_percent.o \
		handlers/types/handle_pointer.o \
		handlers/types/handle_string.o \
		handlers/types/handle_string_w.o \
		handlers/types/handle_uint.o \
		handlers/types/handle_ulong.o \
		parse/get_number_by_len.o \
		parse/get_number_by_len_unsigned.o \
		parse/parse_flags.o \
		parse/parse_length.o \
		parse/parse_precision.o \
		parse/parse_width.o \
		ft/ft_basification.o \
		ft/ft_capitalize.o \
		ft/ft_isconversion_char.o \
		ft/ft_isflag.o \
		ft/ft_islength.o \
		ft/ft_itoa_positive.o \
		ft/ft_putnwstr.o \
		ft/ft_putwchar.o \
		ft/ft_putwchar_fd.o \
		ft/ft_putwstr.o \
		ft/ft_strnlen.o \
		ft/ft_strreverse.o \
		ft/ft_wstrlen.o \
		ft/ft_isdigit.o \
		ft/ft_putchar.o \
		ft/ft_strlen.o \
		ft/ft_putchar_fd.o \
		ft/ft_bzero.o \
		ft/ft_strcpy.o \
		ft/ft_strnew.o \
		ft/ft_memset.o

CC		= gcc
CFLAGS	= -Wall -Wextra -Werror
INC_OPT = -I $(INC_DIR)
OUT_OPT = -o
OBJ_OPT = $< -o $@
LIB_OPT	= -c

AR		= ar
ARFLAGS	= rc
RLIB	= ranlib

RMF 	= rm -f

$(OBJ_DIR)%.o : $(SRC_DIR)%.c
	@mkdir -p $(ODIRS)
	$(CC) $(CFLAGS) $(LIB_OPT) $(OBJ_OPT) $(INC_OPT)

all: $(NAME)

$(NAME): $(addprefix $(OBJ_DIR), $(OBJ))
	$(AR) $(ARFLAGS) $(NAME) $^
	$(RLIB) $(NAME)
	
clean:
	$(RMF) $(addprefix $(OBJ_DIR), $(OBJ))
	
fclean: clean
	$(RMF) $(NAME)

re: fclean all
	