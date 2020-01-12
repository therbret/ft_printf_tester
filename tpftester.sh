gcc libftprintf.a therbret_main_test_printf.c -D PRINTF=ft_printf && ./a.out > ft_output.txt
gcc libftprintf.a therbret_main_test_printf.c && ./a.out > stdio_output.txt
diff -a stdio_output.txt ft_output.txt > diff.txt
cat diff.txt
