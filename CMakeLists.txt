cmake_minimum_required(VERSION 3.14)
project(libft C)

set(CMAKE_C_STANDARD 11)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

include_directories(include)

add_library(ft STATIC
        include/ft_ctype.h
        include/ft_stdio.h
        include/ft_stdlib.h
        include/ft_string.h
        src/ft_ctype/ft_isalnum.c
        src/ft_ctype/ft_isalpha.c
        src/ft_ctype/ft_isascii.c
        src/ft_ctype/ft_isblank.c
        src/ft_ctype/ft_iscntrl.c
        src/ft_ctype/ft_isdigit.c
        src/ft_ctype/ft_isgraph.c
        src/ft_ctype/ft_islower.c
        src/ft_ctype/ft_isprint.c
        src/ft_ctype/ft_ispunct.c
        src/ft_ctype/ft_isspace.c
        src/ft_ctype/ft_isupper.c
        src/ft_ctype/ft_isxdigit.c
        src/ft_ctype/ft_tolower.c
        src/ft_ctype/ft_toupper.c
        src/ft_stdio/ft_putchar.c
        src/ft_stdio/ft_puts.c
        src/ft_stdlib/ft_a64l.c
        src/ft_stdlib/ft_abs.c
        src/ft_stdlib/ft_atoi.c
        src/ft_stdlib/ft_atol.c
        src/ft_stdlib/ft_atoll.c
        src/ft_stdlib/ft_calloc.c
        src/ft_stdlib/ft_div.c
        src/ft_stdlib/ft_l64a.c
        src/ft_stdlib/ft_labs.c
        src/ft_stdlib/ft_ldiv.c
        src/ft_stdlib/ft_llabs.c
        src/ft_stdlib/ft_lldiv.c
        src/ft_stdlib/ft_strtol.c
        src/ft_stdlib/ft_strtoll.c
        src/ft_string/ft_ffs.c
        src/ft_string/ft_ffsl.c
        src/ft_string/ft_ffsll.c
        src/ft_string/ft_fls.c
        src/ft_string/ft_flsl.c
        src/ft_string/ft_flsll.c
        src/ft_string/ft_memccpy.c
        src/ft_string/ft_memchr.c
        src/ft_string/ft_memcmp.c
        src/ft_string/ft_memcpy.c
        src/ft_string/ft_memmove.c
        src/ft_string/ft_memrchr.c
        src/ft_string/ft_memset.c
        src/ft_string/ft_strcasecmp.c
        src/ft_string/ft_strcat.c
        src/ft_string/ft_strchr.c
        src/ft_string/ft_strchrnul.c
        src/ft_string/ft_strcmp.c
        src/ft_string/ft_strcpy.c
        src/ft_string/ft_strdup.c
        src/ft_string/ft_strjoin.c
        src/ft_string/ft_strlcat.c
        src/ft_string/ft_strlcpy.c
        src/ft_string/ft_strlen.c
        src/ft_string/ft_strlwr.c
        src/ft_string/ft_strncasecmp.c
        src/ft_string/ft_strncat.c
        src/ft_string/ft_strncmp.c
        src/ft_string/ft_strncpy.c
        src/ft_string/ft_strndup.c
        src/ft_string/ft_strnlen.c
        src/ft_string/ft_strnstr.c
        src/ft_string/ft_strpbrk.c
        src/ft_string/ft_strrchr.c
        src/ft_string/ft_strstr.c
        src/ft_string/ft_strupr.c
        src/ft_string/ft_strxfrm.c
        src/ft_string/ft_swab.c)