# ft_printf
printf remade by me for the 42 program. 

First we create a va_list named args so we can start the variadic argument handling. 
After starting it we create a while loop for the string given so we can go through it with the integer i. 
In this loop we check if the given index is the character '%' or if there is anything left in s.

If we find a '%' we first have to increment to the next index to check it's contents. Then we go into a function called
format_handler to take care of the given specificer (For example a %c tells us to only print the next character in arg1 while a %s tells us to go ahead and print the string given in arg2.).

In format_handler we are passed the parameters va_list args, int i and const char *s. 
Args is going to hold all the parameters given to our ft_printf function which we can then go ahead and call in
each of the specifier checks. 

Once all of '%' is handled, we return the integer i which has been incremented to the parent function ft_printf. We continue down in the loop to handle more characters that come our way. Each loop checks one character until we run out of s.
We then close with va_end(args) to end the list which makes our code more mobile for environments that require you to
close open ends and finally return the finalized integer i. 
