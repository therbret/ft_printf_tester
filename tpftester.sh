#!/bin/bash

case $1 in
 -m)
  clang -g -fsanitize=memory therbret_main_test_printf.c -L. -lftprintf -D PRINTF=ft_printf -o ft.out && ./ft.out > ft_output.txt
  clang -g -fsanitize=memory therbret_main_test_printf.c -o stdio.out  && ./stdio.out > stdio_output.txt
  ;;
 -a)
  clang -g -fsanitize=address therbret_main_test_printf.c -L. -lftprintf -D PRINTF=ft_printf -o ft.out && ./ft.out > ft_output.txt
  clang -g -fsanitize=address therbret_main_test_printf.c -o stdio.out  && ./stdio.out > stdio_output.txt
  ;;
 *)
  clang therbret_main_test_printf.c -L. -lftprintf -D PRINTF=ft_printf -o ft.out && ./ft.out > ft_output.txt
  clang therbret_main_test_printf.c -o stdio.out && ./stdio.out > stdio_output.txt
  ;;
esac
diff -a stdio_output.txt ft_output.txt > diff.txt
cat diff.txt
