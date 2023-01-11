
# About ft_printf

This project was made for the 42 Program in Hive Helsinki by me. 
This code defines a custom implementation of the printf function in C, named ft_printf. It accepts a string as the first argument and any additional arguments are passed using the va_list variable argument feature in C.

The concepts I had to explore were variadic functions, base conversion
and combining multiple libraries into one working program. It was by no
means an easy task and thanks to it I learned a lot about structuring your
code. 


## Installation

To use ft_printf in your code, include the "ft_printf.h" header file and call the ft_printf function in the same way you would call the standard printf function.

```bash
  #include "ft_printf.h"
```
In case you are using a Makefile of your own you have to link the two together.
## Usage

This implementation is intended to provide similar functionality as the standard printf function in C, with additional handling for certain formatting options such as hexadecimal and void pointer, you can test them by using the following format specifiers : 'c', 's' ,'%' ,'d' ,'i' ,'x' ,'X' , 'u', 'p'.

Note: This code is only a skeleton of the final implementation, it may not have all the functionality nor error handling of the original printf function, so it is recommended to check the completeness before using it in production environments.


## Usage/Examples

Code examples: 
```javascript
ft_printf("Hello, %s!\n", "world");
ft_printf("The hex value of %d is %x.\n", 255, 255);
ft_printf("The void pointer is %p.\n",&p);

```
These will output the following: 
```javascript
Hello, world!
The hex value of 255 is ff.
The void pointer is 0x7ffee11b99a0.

```