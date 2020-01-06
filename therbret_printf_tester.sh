#gcc -g -fsanitize=address libftprintf.a therbret_main_test_printf.c -D PRINTF=ft_printf && ../a.out > ft_output.txt
#gcc -g -fsanitize=address libftprintf.a therbret_main_test_printf.c && ../a.out > stdio_output.txt
gcc -g libftprintf.a therbret_main_test_printf.c -D L -D PRINTF=ft_printf && ./a.out > ft_output.txt
gcc -g libftprintf.a therbret_main_test_printf.c -D L && ./a.out > stdio_output.txt
diff -a stdio_output.txt ft_output.txt > diff.txt
cat diff.txt
