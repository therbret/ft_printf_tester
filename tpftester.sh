#!/bin/bash

case $1 in
 -l)
  gcc therbret_main_test_printf.c -D L -L. -lftprintf -D PRINTF=ft_printf -o ft.out && ./ft.out > ft_output.txt
  gcc therbret_main_test_printf.c -D L -o stdio.out && ./stdio.out > stdio_output.txt
  ;;
 -f)
  gcc -g -fsanitize=address therbret_main_test_printf.c -L. -lftprintf -D PRINTF=ft_printf -o ft.out && ./ft.out > ft_output.txt
  gcc -g -fsanitize=address therbret_main_test_printf.c -o stdio.out  && ./stdio.out > stdio_output.txt
  ;;
 *)
  gcc therbret_main_test_printf.c -L. -lftprintf -D PRINTF=ft_printf -o ft.out && ./ft.out > ft_output.txt
  gcc therbret_main_test_printf.c -o stdio.out && ./stdio.out > stdio_output.txt
  ;;
esac
diff -a stdio_output.txt ft_output.txt > diff.txt
cat diff.txt
