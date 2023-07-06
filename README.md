## About printf
This project is about a partial recoding of the standard printf() function while learning about variadic functions in C.

• The prototype of ft_printf should be int ft_printf(const char *, ...);
• You have to recode the libc’s printf function
• It must not do the buffer management like the real printf
• It will manage the following conversions: cspdiuxX%
• It will be compared with the real printf
• You must use the command ar to create your librairy, using the command libtool
is forbidden.

For detailed information, please check [the subject of this project](https://github.com/BurcuBulakBozkurt/ft_printf_42/blob/main/Prinft_subject.pdf)

A small description of the required conversion:
• %c print a single character.
• %s print a string of characters.
• %p The void * pointer argument is printed in hexadecimal.
• %d print a decimal (base 10) number.
• %i print an integer in base 10.
• %u print an unsigned decimal (base 10) number.
• %x print a number in hexadecimal (base 16), with lowercase.
• %X print a number in hexadecimal (base 16), with uppercase.
• %% print a percent sign.

### Makefile
- [Makefile](https://github.com/BurcuBulakBozkurt/ft_printf_42/blob/main/Makefile)
