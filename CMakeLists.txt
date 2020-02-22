cmake_minimum_required(VERSION 3.1...3.16)

if (${CMAKE_VERSION} VERSION_LESS 3.12)
        cmake_policy(VERSION {CMAKE_MAJOR_VERSION.${CMAKE_MINOR_VERSION}})
endif()

project(libft
        VERSION 0.1
        LANGUAGES C)

set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Wall -Werror -Wextra")
set(CMAKE_C_STANDARD 99)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

add_library(ft STATIC
        src/ft/itoa.c
        src/ft/strjoin.c
        src/ft/strnew.c
        src/ft/strsplit.c
        src/ft/strtrim.c
        src/ft/ufputc.c
        src/ft/ufputs.c
        src/ft/ufputsn.c
        src/ft/uputc.c
        src/ft/uputs.c
        src/ft/uputsn.c
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
        src/ft_ctype/ft_toascii.c
        src/ft_ctype/ft_tolower.c
        src/ft_ctype/ft_toupper.c
        src/ft_stdio/ft_asprintf.c
        src/ft_stdio/ft_fprintf.c
        src/ft_stdio/ft_fputc.c
        src/ft_stdio/ft_fputs.c
        src/ft_stdio/ft_fscanf.c
        src/ft_stdio/ft_printf.c
        src/ft_stdio/ft_putc.c
        src/ft_stdio/ft_puts.c
        src/ft_stdio/ft_scanf.c
        src/ft_stdio/ft_snprintf.c
        src/ft_stdio/ft_sprintf.c
        src/ft_stdio/ft_sscanf.c
        src/ft_stdio/ft_vasprintf.c
        src/ft_stdio/ft_vprintf.c
        src/ft_stdio/ft_vscanf.c
        src/ft_stdio/ft_vsprintf.c
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
        src/ft_string/ft_bcmp.c
        src/ft_string/ft_bcopy.c
        src/ft_string/ft_bzero.c
        src/ft_string/ft_ffs.c
        src/ft_string/ft_ffsl.c
        src/ft_string/ft_ffsll.c
        src/ft_string/ft_fls.c
        src/ft_string/ft_flsl.c
        src/ft_string/ft_flsll.c
        src/ft_string/ft_index.c
        src/ft_string/ft_memccpy.c
        src/ft_string/ft_memchr.c
        src/ft_string/ft_memcmp.c
        src/ft_string/ft_memcpy.c
        src/ft_string/ft_memmove.c
        src/ft_string/ft_mempcpy.c
        src/ft_string/ft_memrchr.c
        src/ft_string/ft_memset.c
        src/ft_string/ft_rindex.c
        src/ft_string/ft_stpcpy.c
        src/ft_string/ft_stpncpy.c
        src/ft_string/ft_strcasecmp.c
        src/ft_string/ft_strcasestr.c
        src/ft_string/ft_strcat.c
        src/ft_string/ft_strchr.c
        src/ft_string/ft_strchrnul.c
        src/ft_string/ft_strcmp.c
        src/ft_string/ft_strcpy.c
        src/ft_string/ft_strcspn.c
        src/ft_string/ft_strdup.c
        src/ft_string/ft_strlcat.c
        src/ft_string/ft_strlcpy.c
        src/ft_string/ft_strlen.c
        src/ft_string/ft_strncasecmp.c
        src/ft_string/ft_strncat.c
        src/ft_string/ft_strncmp.c
        src/ft_string/ft_strncpy.c
        src/ft_string/ft_strndup.c
        src/ft_string/ft_strnlen.c
        src/ft_string/ft_strnstr.c
        src/ft_string/ft_strpbrk.c
        src/ft_string/ft_strrchr.c
        src/ft_string/ft_strsep.c
        src/ft_string/ft_strspn.c
        src/ft_string/ft_strstr.c
        src/ft_string/ft_strtok.c
        src/ft_string/ft_strxfrm.c
        src/ft_string/ft_swab.c)
target_include_directories(ft
        PUBLIC include)
