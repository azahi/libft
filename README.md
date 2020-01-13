# libft

This is a highly-modified version of (École 42)[https://42.fr]'s project to reimplement (libc)[https://en.wikipedia.org/wiki/C_standard_library].

Project documentation and the main subject can be found (here)[../blob/master/doc/libft.en.pdf].

The peculiar indentation and variable/function declaration is dictated by 42's internal coding style.
The document itself can be found (here)[../blob/master/doc/norme.en.pdf].

Note: Current state of the project does not conform to actual original subject for libft.
This was done in order to make the project more readable and modifiable.
The project tries to conform with (POSIX)[https://en.wikipedia.org/wiki/POSIX] standard, the only exception remains is anything related to (pthreads)[https://en.wikipedia.org/wiki/POSIX_Threads].

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
