# 0x15. C - File I/O
## General
1. Look for the right source of information online
2. How to create, open, close, read and write files
3. What are file descriptors
4. What are the 3 standard file descriptors, what are their purpose and what are their POSIX names
5. How to use the I/O system calls open, close, read and write
6. What are and how to use the flags 'O_RDONLY', 'O_WRONLY', 'O_RDWR'
7. What are file permissions, and how to set them when creating a file with the open system call
8. What is a system call
9. What is the difference between a function and a system call

## Requirements
### General
1. Allowed editors: vi, vim, emacs
2. All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
3. All your files should end with a new line
4. A README.md file, at the root of the folder of the project is mandatory
5. Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
6. You are not allowed to use global variables
7. No more than 5 functions per file
8. The only C standard library functions allowed are malloc, free and exit. Any use of functions like printf, puts, calloc, realloc etc… is forbidden
9. Allowed syscalls: read, write, open, close
10. You are allowed to use _putchar
11. You don’t have to push _putchar.c, we will use our file. If you do it won’t be taken into account
12. In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples
13. The prototypes of all your functions and the prototype of the function _putchar should be included in your header file called main.h
14. Don’t forget to push your header file
15. All your header files should be include guarded
Tip: always prefer using symbolic constants (POSIX) vs numbers when it makes sense. For instance read(STDIN_FILENO, ... vs read(0, ...

