# libft

This is a highly-modified version of [École 42](https://42.fr)'s project to reimplement [libc](https://en.wikipedia.org/wiki/C_standard_library).

Project documentation and the main subject can be found [here](../blob/master/doc/libft.en.pdf).

The peculiar indentation and variable/function declaration is dictated by 42's internal coding style.
The document itself can be found [here](../blob/master/doc/norme.en.pdf).

Note: Current state of the project does not conform to the original subject for libft.
This was done in order to make the project more readable and modifiable.

## Structure

Functions are split between different headers:
* _ft_ Miscellaneous functions [42 compatible]
* _ft_ctype_ A rewrite of [ctype.h](https://pubs.opengroup.org/onlinepubs/9699919799/basedefs/ctype.h.html) [42 compatible]
* _ft_stdio_ A rewrite of [stdio.h](https://pubs.opengroup.org/onlinepubs/9699919799/basedefs/stdio.h.html) __[Not 42 compatible]__
* _ft_stdlib_ A rewrite of [stdlib.h](https://pubs.opengroup.org/onlinepubs/9699919799/basedefs/stdlib.h.html) [42 compatible]
* _ft_string_ A rewrite of [string.h](https://pubs.opengroup.org/onlinepubs/9699919799/basedefs/string.h.html) [42 compatible]
* _ft_unistd_ A rewrite of [unistd.h](https://pubs.opengroup.org/onlinepubs/9699919799/basedefs/unistd.h.html) [42 compatible]

All functions in headers that try to mimic the existing POSIX libc are written in accordance with [POSIX.1-2017](https://pubs.opengroup.org/onlinepubs/9699919799/) standard.

## Building

CMake:
```
cmake -S . -B build -DCMAKE_BUILD_TYPE=Release
cmake --build build --target all
```

GNU Make:
```
make
```
