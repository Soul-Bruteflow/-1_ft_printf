# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bruteflow <bruteflow@student.42.fr>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/12/08 14:24:38 by mvlad             #+#    #+#              #
#    Updated: 2017/10/02 22:56:48 by bruteflow        ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 	= libftprintf.a
SRC_DIR = ./src/
OBJ_DIR = ./obj/
INC_DIR = ./inc/
LIB_DIR = ./libft/
LIB_INC = $(LIB_DIR)
LIB_LIB = $(LIB_DIR)libft.a

OBJ	=	

/Users/bruteflow/c_projects/4_ft_printf/src
/Users/bruteflow/c_projects/4_ft_printf/src/general
/Users/bruteflow/c_projects/4_ft_printf/src/general/init_printf.c
/Users/bruteflow/c_projects/4_ft_printf/src/handlers
/Users/bruteflow/c_projects/4_ft_printf/src/handlers/support
/Users/bruteflow/c_projects/4_ft_printf/src/handlers/support/handle_bases.c
/Users/bruteflow/c_projects/4_ft_printf/src/handlers/support/handle_numbers.c
/Users/bruteflow/c_projects/4_ft_printf/src/handlers/support/handle_numbers_sup.c
/Users/bruteflow/c_projects/4_ft_printf/src/handlers/handle_char.c
/Users/bruteflow/c_projects/4_ft_printf/src/handlers/handle_char_w.c
/Users/bruteflow/c_projects/4_ft_printf/src/handlers/handle_hex_big.c
/Users/bruteflow/c_projects/4_ft_printf/src/handlers/handle_hex_small.c
/Users/bruteflow/c_projects/4_ft_printf/src/handlers/handle_int.c
/Users/bruteflow/c_projects/4_ft_printf/src/handlers/handle_int_long.c
/Users/bruteflow/c_projects/4_ft_printf/src/handlers/handle_octal_uint.c
/Users/bruteflow/c_projects/4_ft_printf/src/handlers/handle_octal_ulong.c
/Users/bruteflow/c_projects/4_ft_printf/src/handlers/handle_percent.c
/Users/bruteflow/c_projects/4_ft_printf/src/handlers/handle_pointer.c
/Users/bruteflow/c_projects/4_ft_printf/src/handlers/handle_string.c
/Users/bruteflow/c_projects/4_ft_printf/src/handlers/handle_string_w.c
/Users/bruteflow/c_projects/4_ft_printf/src/handlers/handle_uint.c
/Users/bruteflow/c_projects/4_ft_printf/src/handlers/handle_ulong.c
/Users/bruteflow/c_projects/4_ft_printf/src/parse
/Users/bruteflow/c_projects/4_ft_printf/src/parse/get_number_by_len.c
/Users/bruteflow/c_projects/4_ft_printf/src/parse/get_number_by_len_unsigned.c
/Users/bruteflow/c_projects/4_ft_printf/src/parse/parse_flags.c
/Users/bruteflow/c_projects/4_ft_printf/src/parse/parse_length.c
/Users/bruteflow/c_projects/4_ft_printf/src/parse/parse_precision.c
/Users/bruteflow/c_projects/4_ft_printf/src/parse/parse_width.c
/Users/bruteflow/c_projects/4_ft_printf/src/print
/Users/bruteflow/c_projects/4_ft_printf/src/print/ft_print.c
/Users/bruteflow/c_projects/4_ft_printf/src/print/print_prefix_pad.c
/Users/bruteflow/c_projects/4_ft_printf/src/ft_basification.c
/Users/bruteflow/c_projects/4_ft_printf/src/ft_capitalize.c
/Users/bruteflow/c_projects/4_ft_printf/src/ft_isconversion_char.c
/Users/bruteflow/c_projects/4_ft_printf/src/ft_isflag.c
/Users/bruteflow/c_projects/4_ft_printf/src/ft_islength.c
/Users/bruteflow/c_projects/4_ft_printf/src/ft_itoa_long.c
/Users/bruteflow/c_projects/4_ft_printf/src/ft_itoa_positive.c
/Users/bruteflow/c_projects/4_ft_printf/src/ft_itoa_uint.c
/Users/bruteflow/c_projects/4_ft_printf/src/ft_itoa_ulong.c
/Users/bruteflow/c_projects/4_ft_printf/src/ft_printf.c
/Users/bruteflow/c_projects/4_ft_printf/src/ft_putnwstr.c
/Users/bruteflow/c_projects/4_ft_printf/src/ft_putwchar.c
/Users/bruteflow/c_projects/4_ft_printf/src/ft_putwchar_fd.c
/Users/bruteflow/c_projects/4_ft_printf/src/ft_putwstr.c
/Users/bruteflow/c_projects/4_ft_printf/src/ft_strnlen.c
/Users/bruteflow/c_projects/4_ft_printf/src/ft_strreverse.c
/Users/bruteflow/c_projects/4_ft_printf/src/ft_wstrlen.c
/Users/bruteflow/c_projects/4_ft_printf/src/main.c
/Users/bruteflow/c_projects/4_ft_printf/src/untoh.c

ft_basification.o \
		ft_capitalize.o \
		ft_isconversion_char.o \
		ft_isflag.o \
		ft_islength.o \
		ft_itoa_long.o \
		ft_itoa_positive.o \
		ft_itoa_uint.o \
		ft_itoa_ulong.o \
		ft_printf.o \
		ft_putnwstr.o \
		ft_putwchar_fd.o \
		ft_putwchar.o \
		ft_putwstr.o \
		ft_strnlen.o \
		ft_strreverse.o \
		ft_wstrlen.o \
		general/ \
		handlers/ \
		parse/ \
		print/ \
		untoh.o

#		main.o
LIB = $(LIB_DIR)libft.a

HEADERS	= $(INC_DIR)

# -lmlx -framework OpenGL -framework AppKit
CC		= gcc
CFLAGS	= -Wall -Wextra -Werror
INC_OPT = -I $(LIB_INC) -I $(INC_DIR)
OUT_OPT = -o
OBJ_OPT = $< -o $@
LIB_OPT	= -c

RMF 	= rm -f

$(OBJ_DIR)%.o : $(SRC_DIR)%.c
	@mkdir -p obj
	$(CC) $(CFLAGS) $(LIB_OPT) $(OBJ_OPT) $(INC_OPT)

all: $(NAME)

$(NAME): $(addprefix $(OBJ_DIR), $(OBJ))
	$(MAKE) -C ./libft/
	$(CC) $(CFLAGS) $(SDL) $(LIB_LIB) $^ $(OUT_OPT) $(NAME)

clean:
	$(RMF) $(addprefix $(OBJ_DIR), $(OBJ))
	cd $(LIB_DIR) && $(MAKE) clean

fclean: clean
	$(RMF) $(NAME)
	cd $(LIB_DIR) && $(MAKE) fclean

re: fclean all
	cd $(LIB_DIR) && $(MAKE) re
