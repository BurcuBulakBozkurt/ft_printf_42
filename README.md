# Printf

## About
This project is about a partial recoding of the standard printf() function while learning about variadic functions in C.

* The prototype of ft_printf should be int ft_printf(const char *, ...);
* You have to recode the libc’s printf function|
* It must not do the buffer management like the real printf 
* It will manage the following conversions: cspdiuxX%
* It will be compared with the real printf
* You must use the command ar to create your librairy, using the command libtool is forbidden. 

| |  A small description of the required conversion:      |                                                                                                                       
|:-:|:-------------:                                      |                                                                                                                                        
| 1 | %c print a single character.|
| 2 | %s print a string of characters.|
| 3 |  %p The void * pointer argument is printed in hexadecimal.   |
| 4 | %d print a decimal (base 10) number.|
| 5 | %i print an integer in base 10. |
| 6 | %u print an unsigned decimal (base 10) number. |
| 7 | %x print a number in hexadecimal (base 16), with lowercase.|
| 8 | %X print a number in hexadecimal (base 16), with uppercase.|
| 9 | %% print a percent sign.|


For detailed information, please check [the subject of this project](https://github.com/BurcuBulakBozkurt/ft_printf_42/blob/main/Prinft_subject.pdf).


Since I used some of the functions from libft in that project, allows I copied its sources and its associated Makefile in a libft folder with its associated Makefile. Because our project’s Makefile must compile the library by using its Makefile, then compile the project.
### Makefile
- [Makefile](https://github.com/BurcuBulakBozkurt/ft_printf_42/blob/main/Makefile)
