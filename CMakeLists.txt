cmake_minimum_required(VERSION 3.1...3.17)

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
        src/ft_stdlib/ft_abs.c
        src/ft_stdlib/ft_atoi.c
        src/ft_stdlib/ft_atol.c
        src/ft_stdlib/ft_atoll.c
        src/ft_stdlib/ft_calloc.c
        src/ft_stdlib/ft_clearenv.c
        src/ft_stdlib/ft_div.c
        src/ft_stdlib/ft_free.c
        src/ft_stdlib/ft_getenv.c
        src/ft_stdlib/ft_labs.c
        src/ft_stdlib/ft_ldiv.c
        src/ft_stdlib/ft_llabs.c
        src/ft_stdlib/ft_lldiv.c
        src/ft_stdlib/ft_malloc.c
        src/ft_stdlib/ft_putenv.c
        src/ft_stdlib/ft_realloc.c
        src/ft_stdlib/ft_setenv.c
        src/ft_stdlib/ft_unsetenv.c
        src/ft_string/ft_memccpy.c
        src/ft_string/ft_memchr.c
        src/ft_string/ft_memcmp.c
        src/ft_string/ft_memcpy.c
        src/ft_string/ft_memmove.c
        src/ft_string/ft_mempcpy.c
        src/ft_string/ft_memrchr.c
        src/ft_string/ft_memset.c
        src/ft_string/ft_stpcpy.c
        src/ft_string/ft_stpncpy.c
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
        src/ft_string/ft_strtok_r.c
        src/ft_string/ft_strxfrm.c
        src/ft_strings/ft_bcmp.c
        src/ft_strings/ft_bcopy.c
        src/ft_strings/ft_bzero.c
        src/ft_strings/ft_ffs.c
        src/ft_strings/ft_ffsl.c
        src/ft_strings/ft_ffsll.c
        src/ft_strings/ft_fls.c
        src/ft_strings/ft_flsl.c
        src/ft_strings/ft_flsll.c
        src/ft_strings/ft_index.c
        src/ft_strings/ft_rindex.c
        src/ft_strings/ft_strcasecmp.c
        src/ft_strings/ft_strncasecmp.c
        src/ft_unistd/ft_execv.c
        src/ft_unistd/ft_execve.c
        src/ft_unistd/ft_execvp.c
        src/ft_unistd/ft_getopt.c
        src/uio/ufgetc.c
        src/uio/ufgetl.c
        src/uio/ufputc.c
        src/uio/ufputcn.c
        src/uio/ufputn.c
        src/uio/ufputnn.c
        src/uio/ufputs.c
        src/uio/ufputsn.c
        src/uio/ugetc.c
        src/uio/ugetl.c
        src/uio/uputc.c
        src/uio/uputcn.c
        src/uio/uputn.c
        src/uio/uputnn.c
        src/uio/uputs.c
        src/uio/uputsn.c)
target_include_directories(ft
        PUBLIC include)
