# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mvlad <mvlad@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/12/08 14:24:38 by mvlad             #+#    #+#              #
#    Updated: 2017/10/16 16:00:21 by mvlad            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 	= libftprintf.a
SRC_DIR = ./src/
OBJ_DIR = ./obj/
INC_DIR = ./inc/
HEADERS	= $(INC_DIR)

OBJ	=	init_printf.o \
		ft_printf.o \
		print_prefix_pad.o \
		ft_print.o \
		handle_bases_sup.o \
		handle_bases.o \
		handle_numbers.o \
		handle_numbers_sup.o \
		handle_numbers_sup2.o \
		handle_char.o \
		handle_char_w.o \
		handle_hex_big.o \
		handle_hex_small.o \
		handle_int.o \
		handle_int_long.o \
		handle_octal_uint.o \
		handle_octal_ulong.o \
		handle_percent.o \
		handle_pointer.o \
		handle_string.o \
		handle_string_w.o \
		handle_uint.o \
		handle_ulong.o \
		get_number_by_len.o \
		get_number_by_len_unsigned.o \
		parse_flags.o \
		parse_length.o \
		parse_precision.o \
		parse_width.o \
		ft_basification.o \
		ft_capitalize.o \
		ft_isconversion_char.o \
		ft_isflag.o \
		ft_islength.o \
		ft_itoa_positive.o \
		ft_putnwstr.o \
		ft_putwchar.o \
		ft_putwchar_fd.o \
		ft_strnlen.o \
		ft_strreverse.o \
		ft_wstrlen.o \
		ft_isdigit.o \
		ft_putchar.o \
		ft_strlen.o \
		ft_putchar_fd.o \
		ft_bzero.o \
		ft_strcpy.o \
		ft_strnew.o \
		ft_memset.o

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
	@mkdir -p $(OBJ_DIR)
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
	