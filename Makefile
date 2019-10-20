#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jdeathlo <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/03 19:48:19 by jdeathlo          #+#    #+#              #
#    Updated: 2019/10/20 21:20:16 by jdeathlo         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

TARGET := libft.a

CFLAGS := -std=c99 -Wall -Werror -Wextra -Wpedantic -O2

INCDIR := include/
_INC := \
	ft_ctype.h \
	ft_stdio.h \
	ft_stdlib.h \
	ft_string.h
INC := $(addprefix $(INCDIR), $(_INC))

SRCDIR = src/
_SRCDIR_FT_CTYPE = ft_ctype/
_SRC_FT_CTYPE = \
	ft_isalnum.c \
	ft_isalpha.c \
	ft_isascii.c \
	ft_isblank.c \
	ft_iscntrl.c \
	ft_isdigit.c \
	ft_isgraph.c \
	ft_islower.c \
	ft_isprint.c \
	ft_ispunct.c \
	ft_isspace.c \
	ft_isupper.c \
	ft_isxdigit.c \
	ft_tolower.c \
	ft_toupper.c
SRC += $(addprefix $(SRCDIR), \
	   $(addprefix $(_SRCDIR_FT_CTYPE), $(_SRC_FT_CTYPE)))

_SRCDIR_FT_STDIO := ft_stdio/
_SRC_FT_STDIO := \
	ft_putchar.c \
	ft_puts.c
SRC += $(addprefix $(SRCDIR), \
	   $(addprefix $(_SRCDIR_FT_STDIO), $(_SRC_FT_STDIO)))

_SRCDIR_FT_STDLIB := ft_stdlib/
_SRC_FT_STDLIB := \
	ft_a64l.c \
	ft_abs.c \
	ft_atoi.c \
	ft_atol.c \
	ft_atoll.c \
	ft_calloc.c \
	ft_div.c \
	ft_l64a.c \
	ft_labs.c \
	ft_ldiv.c \
	ft_llabs.c \
	ft_lldiv.c \
	ft_strtol.c \
	ft_strtoll.c
SRC += $(addprefix $(SRCDIR), \
	   $(addprefix $(_SRCDIR_FT_STDLIB), $(_SRC_FT_STDLIB)))

_SRCDIR_FT_STRING := ft_string/
_SRC_FT_STRING := \
	ft_ffs.c \
	ft_ffsl.c \
	ft_ffsll.c \
	ft_fls.c \
	ft_flsl.c \
	ft_flsll.c \
	ft_memccpy.c \
	ft_memchr.c \
	ft_memcmp.c \
	ft_memcpy.c \
	ft_memmove.c \
	ft_memrchr.c \
	ft_memset.c \
	ft_strcasecmp.c \
	ft_strcat.c \
	ft_strchr.c \
	ft_strchrnul.c \
	ft_strcmp.c \
	ft_strcpy.c \
	ft_strdup.c \
	ft_strjoin.c \
	ft_strlcat.c \
	ft_strlcpy.c \
	ft_strlen.c \
	ft_strlwr.c \
	ft_strncasecmp.c \
	ft_strncat.c \
	ft_strncmp.c \
	ft_strncpy.c \
	ft_strndup.c \
	ft_strnlen.c \
	ft_strnstr.c \
	ft_strpbrk.c \
	ft_strrchr.c \
	ft_strstr.c \
	ft_strupr.c \
	ft_strxfrm.c \
	ft_swab.c
SRC += $(addprefix $(SRCDIR), \
	   $(addprefix $(_SRCDIR_FT_STRING), $(_SRC_FT_STRING)))

OBJ := $(SRC:.c=.o)

%.o: %.c
	$(CC) $(CFLAGS) -I $(INCDIR) -o $@ -c $<

$(TARGET): $(OBJ)
	$(AR) rucsv $@ $?

all: $(TARGET)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(TARGET)

re: fclean all

.PHONY: all clean fclean re
