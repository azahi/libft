# libft

This is a highly-modified version of [École 42](https://42.fr)'s project to reimplement [libc](https://en.wikipedia.org/wiki/C_standard_library).

Project documentation and the main subject can be found [here](../blob/master/doc/libft.en.pdf).

The peculiar indentation and variable/function declaration is dictated by 42's internal coding style.
The document itself can be found [here](../blob/master/doc/norme.en.pdf).

Note: Current state of the project does not conform to the original subject for libft.
This was done in order to make the project more readable and modifiable.

## Structure

Functions are split between different headers:
* _ft_ctype_ An implementation of [ctype.h](https://pubs.opengroup.org/onlinepubs/9699919799/basedefs/ctype.h.html)
* _ft_stdlib_ An implementation of [stdlib.h](https://pubs.opengroup.org/onlinepubs/9699919799/basedefs/stdlib.h.html)
* _ft_string_ An implementation of [string.h](https://pubs.opengroup.org/onlinepubs/9699919799/basedefs/string.h.html)
* _ft_strings_ An implementation of [strings.h](https://pubs.opengroup.org/onlinepubs/9699919799/basedefs/strings.h.html)
* _ft_unistd_ An implementation of [unistd.h](https://pubs.opengroup.org/onlinepubs/9699919799/basedefs/unistd.h.html)
* _uio_ An extension of "useless" I/O operations to comply with 42's subjects

I made an honest attempt to make everything that can conform to some kind of a official standard to conform to it.

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
