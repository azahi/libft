# libft

This is a highly-modified version of [École 42](https://42.fr)'s project to reimplement [libc](https://en.wikipedia.org/wiki/C_standard_library).

Project documentation and the main subject can be found [here](../blob/master/doc/libft.en.pdf).

The peculiar indentation and variable/function declaration is dictated by 42's internal coding style.
The document itself can be found [here](../blob/master/doc/norme.en.pdf).

Note: Current state of the project does not conform to actual original subject for libft.
This was done in order to make the project more readable and modifiable.

## Structure

The majority of functions are split between different headers:
* _ft_ Miscellaneous functions that conform to 42's "UNIX" subjects. [42 Compatible]
* _ft_ctype_ A rewrite of [ctype.h](http://www.cplusplus.com/reference/cctype/) [42 Compatible]
* _ft_stdio_ A rewrite of [stdio.h](http://www.cplusplus.com/reference/cstdlib/) __[Not 42 Compatible]__
* _ft_stdlib_ A rewrite of [stdlib.h](http://www.cplusplus.com/reference/cstdlib/) [42 Compatible]
* _ft_string_ A rewrite of [string.h](http://www.cplusplus.com/reference/cstring/) [42 Compatible]

All headers that try to mimic the existing POSIX libc are written in accordance with [POSIX.1-2008](https://pubs.opengroup.org/onlinepubs/9699919799.2008edition/) standard.

## Building

CMake:
```
mkdir build
cd build
cmake ..
make
```

GNU Make:
```
make
```
