#0x14. C - Bit manipulation
##Requirements
###General
1.Allowed editors: vi, vim, emacs
2.All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
All your files should end with a new line
3.A README.md file, at the root of the folder of the project is mandatory
4.Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
5.You are not allowed to use global variables
6.No more than 5 functions per file
7.The only C standard library functions allowed are malloc, free and exit. Any use of functions like printf, puts, calloc, realloc etc… is forbidden
8.You are allowed to use _putchar
9.You don’t have to push _putchar.c, we will use our file. If you do it won’t be taken into account
10.In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples
11.The prototypes of all your functions and the prototype of the function _putchar should be included in your header file called main.h
Don’t forget to push your header file
12.All your header files should be include guarded
------------------
##Tasks
###0. 0
Write a function that converts a binary number to an unsigned int.
1.Prototype: unsigned int binary_to_uint(const char *b);
2.where b is pointing to a string of 0 and 1 chars
3.Return: the converted number, or 0 if
	-there is one or more chars in the string b that is not 0 or 1
	-b is NULL

###1. 1
Write a function that prints the binary representation of a number.
1.Prototype: void print_binary(unsigned long int n);
2.Format: see example
3.You are not allowed to use arrays
4.You are not allowed to use malloc
5.You are not allowed to use the % or / operators

###2. 10
Write a function that returns the value of a bit at a given index.
1.Prototype: int get_bit(unsigned long int n, unsigned int index);
2.where index is the index, starting from 0 of the bit you want to get
3.Returns: the value of the bit at index index or -1 if an error occured

###3. 11
Write a function that sets the value of a bit to 1 at a given index.
1.Prototype: int set_bit(unsigned long int *n, unsigned int index);
2.where index is the index, starting from 0 of the bit you want to set
3.Returns: 1 if it worked, or -1 if an error occurred

###4. 100
Write a function that sets the value of a bit to 0 at a given index.
1.Prototype: int clear_bit(unsigned long int *n, unsigned int index);
2.where index is the index, starting from 0 of the bit you want to set
3.Returns: 1 if it worked, or -1 if an error occurred

###5. 101
Write a function that returns the number of bits you would need to flip to get from one number to another.
1.Prototype: unsigned int flip_bits(unsigned long int n, unsigned long int m);
2.You are not allowed to use the % or / operators
------------------
