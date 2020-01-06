/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   therbret_main_test_printf.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: therbret <therbret@gmx.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/02 17:20:03 by therbret          #+#    #+#             */
/*   Updated: 2020/01/06 04:14:12 by therbret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <errno.h>
#include <limits.h>
#include <stdlib.h>

#define RED "\x1b[31m"
#define RESET "\x1b[0m"

#ifndef PRINTF
# define PRINTF printf
#endif

#define PRINTF_CHECK_RETURN PRINTF("\nreturn :%i\n", PRINTF

int		ft_printf(const char * restrict format, ...);

void test_abourin()
{
	int t;
	void *c;

	c = (void *)123456;
	t = 50;
	PRINTF_CHECK_RETURN("pp %.50d\n", 10000));
	PRINTF_CHECK_RETURN("p1 %.4s\n", "cccc\n"));
	PRINTF_CHECK_RETURN("p2 %.10s\n", "cccc\n"));
	PRINTF_CHECK_RETURN("p3 %.4s\n", NULL));
	PRINTF_CHECK_RETURN("p4 %.5s\n", "aaaaa\n"));
	PRINTF_CHECK_RETURN("p5 %.3d\n", 100));
	PRINTF_CHECK_RETURN("p6 %.0d\n", 100));
	PRINTF_CHECK_RETURN("p7 %.4d\n", 100));
	PRINTF_CHECK_RETURN("p8 %.10d\n", 100));
	PRINTF_CHECK_RETURN("p9 %.50d\n", 100));
	PRINTF_CHECK_RETURN("p10 %.1d\n", 100));
	PRINTF_CHECK_RETURN("p11 %.3d\n", 100));
	PRINTF_CHECK_RETURN("p12 %.0d\n", 0));
	PRINTF_CHECK_RETURN("p13 %.3i\n", 100));
	PRINTF_CHECK_RETURN("p14 %.0i\n", 100));
	PRINTF_CHECK_RETURN("p15 %.4i\n", 100));
	PRINTF_CHECK_RETURN("p16 %.10i\n", 100));
	PRINTF_CHECK_RETURN("p17 %.50i\n", 100));
	PRINTF_CHECK_RETURN("p18 %.1i\n", 100));
	PRINTF_CHECK_RETURN("p19 %.3x\n", 100));
	PRINTF_CHECK_RETURN("p20 %.0x\n", 0));
	PRINTF_CHECK_RETURN("p21 %.3x\n", 100));
	PRINTF_CHECK_RETURN("p22 %.0x\n", 100));
	PRINTF_CHECK_RETURN("p23 %.4x\n", 100));
	PRINTF_CHECK_RETURN("p24 %.10x\n", 100));
	PRINTF_CHECK_RETURN("p25 %.50x\n", 100));
	PRINTF_CHECK_RETURN("p26 %.1x\n", 100));
	PRINTF_CHECK_RETURN("p27 %.3x\n", 100));
	PRINTF_CHECK_RETURN("p28 %.0x\n", 0));
	PRINTF_CHECK_RETURN("p29 %.3u\n", 100));
	PRINTF_CHECK_RETURN("p30 %.0u\n", 100));
	PRINTF_CHECK_RETURN("p31 %.4u\n", 100));
	PRINTF_CHECK_RETURN("p32 %.10u\n", 100));
	PRINTF_CHECK_RETURN("p33 %.50u\n", 100));
	PRINTF_CHECK_RETURN("p34 %.1u\n", 100));
	PRINTF_CHECK_RETURN("p35 %.3u\n", 100));
	PRINTF_CHECK_RETURN("p36 %.0u\n", 0));
	PRINTF_CHECK_RETURN("%%\n"));
	PRINTF_CHECK_RETURN("Hello 42 school! %s\n", NULL));
	PRINTF_CHECK_RETURN("%d\n", 2147483647));
	PRINTF_CHECK_RETURN("%x\n", 2147483647));
	PRINTF_CHECK_RETURN("%X\n", 2147483647));
	PRINTF_CHECK_RETURN("%x\n", 0));
	PRINTF_CHECK_RETURN("%010x\n", 0));
	PRINTF_CHECK_RETURN("%010x\n", 20));
	PRINTF_CHECK_RETURN("%010x\n", -20));
	PRINTF_CHECK_RETURN("%10x\n", 20));
	PRINTF_CHECK_RETURN("%10.2x\n", -20));
	PRINTF_CHECK_RETURN("%-10x\n", 50));
	PRINTF_CHECK_RETURN("%-15x\n", 0));
	PRINTF_CHECK_RETURN("%.1x\n", 500));
	PRINTF_CHECK_RETURN("%*.*x\n", 50, 10, 2));
	PRINTF_CHECK_RETURN("%x\n", -1));
	PRINTF_CHECK_RETURN("%40.50d\n", 50));
	PRINTF_CHECK_RETURN("%d\n", -589));
	PRINTF_CHECK_RETURN("%-4d\n", -2464));
	PRINTF_CHECK_RETURN("%.5d\n", -2372));
	PRINTF_CHECK_RETURN("%p\n", NULL));
	PRINTF_CHECK_RETURN("%15p\n", NULL));
	PRINTF_CHECK_RETURN("%%p::[%010d]\n", -8473));
	PRINTF_CHECK_RETURN("%%p::[%10d]\n", -8473));
	PRINTF_CHECK_RETURN("%%p::[%.5d]\n", -8473));
	PRINTF_CHECK_RETURN("%%p::[%01.1d]\n", -8473));
	PRINTF_CHECK_RETURN("%%p::[%010.1d]\n", -8473));
	PRINTF_CHECK_RETURN("%%p::[%01.50d]\n", -8473));
	PRINTF_CHECK_RETURN("%%p::[%1.50d]\n", -8473));
	PRINTF_CHECK_RETURN("%%p::[%0100.50d]\n", -8473));
	PRINTF_CHECK_RETURN("%%p::[%010d]\n", 8473));
	PRINTF_CHECK_RETURN("%%p::[%10d]\n", 8473));
	PRINTF_CHECK_RETURN("%%p::[%.5d]\n", 8473));
	PRINTF_CHECK_RETURN("%%p::[%01.1d]\n", 8473));
	PRINTF_CHECK_RETURN("%%p::[%010.1d]\n", 8473));
	PRINTF_CHECK_RETURN("%%p::[%01.50d]\n", 8473));
	PRINTF_CHECK_RETURN("%%p::[%1.50d]\n", 8473));
	PRINTF_CHECK_RETURN("%%p::[%0100.50d]\n", 8473));
	PRINTF_CHECK_RETURN("%c\n", 'a'));
	PRINTF_CHECK_RETURN("%10c\n", 't'));
	PRINTF_CHECK_RETURN("%1c\n", 'y'));
	PRINTF_CHECK_RETURN("%50.2s\n", "Coucou\n"));
	PRINTF_CHECK_RETURN("%50.2s\n", NULL));
	PRINTF_CHECK_RETURN("%5.0s\n", "Hello\n"));
	PRINTF_CHECK_RETURN("%.1s\n", "Test\n"));
	PRINTF_CHECK_RETURN("%10s\n", NULL));
	PRINTF_CHECK_RETURN("%10s\n", "Ok\n"));
	PRINTF_CHECK_RETURN("1chiffre 1 %d chiffre 2 %d\n", 42, -42));
	PRINTF_CHECK_RETURN("2chiffre 1 %d chiffre 2 %d\n", 42, -42));
	PRINTF_CHECK_RETURN("4chiffre 1 %-12d chiffre 2 %-12d\n", 42, -42));
	PRINTF_CHECK_RETURN("t1 %050d\n", 10));
	PRINTF_CHECK_RETURN("t2 %-50d\n", 10));
	PRINTF_CHECK_RETURN("t3 %50.0d\n", 10));
	PRINTF_CHECK_RETURN("t4 %50.50d\n", 10));
	PRINTF_CHECK_RETURN("t5 %50.10d\n", 10));
	PRINTF_CHECK_RETURN("t6 %*.*d\n", 50, 5, 10));
	PRINTF_CHECK_RETURN("t7 %1.50d\n", -10));
	PRINTF_CHECK_RETURN("t8 %1.50d\n", 10));
	PRINTF_CHECK_RETURN("t9 %2.2d\n", 10));
	PRINTF_CHECK_RETURN("t10 %2.2d\n", -10));
	PRINTF_CHECK_RETURN("t12 %.0d\n", 0));
	PRINTF_CHECK_RETURN("t13 %01d\n", -20));
	PRINTF_CHECK_RETURN("t14 %10d\n", 1000));
	PRINTF_CHECK_RETURN("5chiffre 1 %0d chiffre 2 %0d\n", 42, -4));
	PRINTF_CHECK_RETURN("6chiffre 1 %012d chiffre 2 %012d\n", 42, -42));
	PRINTF_CHECK_RETURN("8chiffre 1 %*d chiffre 2 %*d\n", 42, 6, 6, 6));
	PRINTF_CHECK_RETURN("15chiffre 1 %.d chiffre 2 %.d\n", 42, -42));
	PRINTF_CHECK_RETURN("4caractere 1 %12c caractere 2 %12c\n", 'a', 'c'));
	PRINTF_CHECK_RETURN("1caractere 1 %c caractere 2 %c\n", 'a', 'c'));
	PRINTF_CHECK_RETURN("1hexa-maj 1 %X hexa-maj 2 %X\n", 42, -42));
	PRINTF_CHECK_RETURN("4hexa-maj 1 %12X hexa-maj 2 %int12X\n", 42, -42));
	PRINTF_CHECK_RETURN("4hexa-maj 1 %-12X hexa-maj 2 %-12X\n", 42, -42));
	PRINTF_CHECK_RETURN("5hexa-maj 1 %0X hexa-maj 2 %0X\n", 42, -42));
	PRINTF_CHECK_RETURN("6hexa-maj 1 %012X hexa-maj 2 %012X\n", 42, -42));
	PRINTF_CHECK_RETURN("8hexa-maj 1 %*X hexa-maj 2 %*X\n", 42, 6, 6, 6));
	PRINTF_CHECK_RETURN("1pointeur 1 %p pointeur 2 %p\n", c, c));
	PRINTF_CHECK_RETURN("4pointeur 1 %12p pointeur 2 %12p\n", c, c));
	PRINTF_CHECK_RETURN("4pointeur 1 %-12p pointeur 2 %-12p\n", c, c));
	PRINTF_CHECK_RETURN("1unsigned 1 %u unsigned 2 %u\n", 42, -42));
	PRINTF_CHECK_RETURN("4unsigned 1 %12u unsigned 2 %12u\n", 42, -42));
	PRINTF_CHECK_RETURN("4unsigned 1 %-12u unsigned 2 %-12u\n", 42, -42));
	PRINTF_CHECK_RETURN("5unsigned 1 %0u unsigned 2 %0u\n", 42, -42));
	PRINTF_CHECK_RETURN("6unsigned 1 %012u unsigned 2 %012u\n", 42, -42));
	PRINTF_CHECK_RETURN("8unsigned 1 %*u unsigned 2 %*u\n", 42, 6, 6, 6));
	PRINTF_CHECK_RETURN("15unsigned 1 %.u unsigned 2 %.u\n", 42, -42));
	PRINTF_CHECK_RETURN("%%\n"));
	PRINTF_CHECK_RETURN("%-.12u\n", -20000000));
	PRINTF_CHECK_RETURN("%-.12i\n", -20000000));
	PRINTF_CHECK_RETURN("truc\n"));
	PRINTF_CHECK_RETURN("04 Test de chiffre sans h : %d, et %d\n", 432767, -432767));
	PRINTF_CHECK_RETURN("31 This is an int : %.0d\n", 0));
	PRINTF_CHECK_RETURN("32 This is an int : %0d\n", 0));
	PRINTF_CHECK_RETURN("%d\n", t));
	PRINTF_CHECK_RETURN("%d\n", t));
	PRINTF_CHECK_RETURN("%d\n", t));
	PRINTF_CHECK_RETURN("%d\n", t));
	PRINTF_CHECK_RETURN("%d\n", t));
	PRINTF_CHECK_RETURN("%d\n", t));
	PRINTF_CHECK_RETURN("%d\n", t));
	PRINTF_CHECK_RETURN("1string 1 %s string 2 %s\n", "toto\n", "bonjour\n"));
	PRINTF_CHECK_RETURN("4string 1 %12s string 2 %12s\n", "toto\n", "bonjour\n"));
	PRINTF_CHECK_RETURN("4string 1 %-12s string 2 %-12s\n", "toto\n", "bonjour\n"));
	PRINTF_CHECK_RETURN("st1 %*.*d\n", 10, 10, 50));
	PRINTF_CHECK_RETURN("st2 %*.*d\n", 1, 50, 50));
	PRINTF_CHECK_RETURN("st3 %*.*d\n", 0, 0, 50));
	PRINTF_CHECK_RETURN("st4 %*.*d\n", 0, 50, 50));
	PRINTF_CHECK_RETURN("st5 %*.*d\n", 10, 0, 50));
	PRINTF_CHECK_RETURN("st6 %*.*d\n", 10, 10, 50));
	PRINTF_CHECK_RETURN("st12 %*d\n", 10, 50));
	PRINTF_CHECK_RETURN("st13 %*d\n", 0, 0));
	PRINTF_CHECK_RETURN("st14 %.*d\n", 0, 0));
	PRINTF_CHECK_RETURN("st15 %*d\n", 50, 5));
	PRINTF_CHECK_RETURN("st16 %0.*d\n", 50, 5));
	PRINTF_CHECK_RETURN("st17 %0.*d\n", 0, 0));
	PRINTF_CHECK_RETURN("st7 %*.*s\n", 1, 50, "hey\n"));
	PRINTF_CHECK_RETURN("st8 %*.*s\n", 0, 0, "coucou\n"));
	PRINTF_CHECK_RETURN("st9 %*.*s\n", 0, 50, "hey\n"));
	PRINTF_CHECK_RETURN("st10 %*.*s\n", 10, 0, "dsa\n"));
	PRINTF_CHECK_RETURN("st11 %*.*s\n", 10, 10, "hello\n"));
	PRINTF_CHECK_RETURN("st8 %.*s\n", 0, "coucou\n"));
	PRINTF_CHECK_RETURN("st9 %*s\n", 0, "hey\n"));
	PRINTF_CHECK_RETURN("st10 %*s\n", 10, "dsa\n"));
	PRINTF_CHECK_RETURN("st118 %*s\n", 100, "hello\n"));
	PRINTF_CHECK_RETURN("st118 %*d\n", 100, 0));
	PRINTF_CHECK_RETURN("ultimate1 %*d        %*i\n", 500, 0, 10, 10));
	PRINTF_CHECK_RETURN("ultimate2 %*d %*s %*x %*X %*i %*u\n", 1, 5000, 1, "hey\n", 10, 54700, 1, 300, 10000, -55, 1, -60));
	PRINTF_CHECK_RETURN("ultimate3 %*.*d %*.*s\n", 1, 50, 5000, 1, 0, "hey\n"));
	PRINTF_CHECK_RETURN("ultimate4 %*.*x %*.*X\n", 1, 50, 5000, 1, 0, 10));
	PRINTF_CHECK_RETURN("ultimate5 %*.*u\n", 1, 50, 5000));
	PRINTF_CHECK_RETURN("neg1 %*s\n", -9, "coucou\n"));
	PRINTF_CHECK_RETURN("neg2 %*.*s\n", -9, 4, "coucou\n"));
	PRINTF_CHECK_RETURN("neg3 %*s\n", -9, NULL));
	PRINTF_CHECK_RETURN("neg4 %*.*s\n", 0, 0, "coucou\n"));
	PRINTF_CHECK_RETURN("neg5 %*s\n", -100, "coucou\n"));
	PRINTF_CHECK_RETURN("neg6 %*s\n", -156, "coucou\n"));
	PRINTF_CHECK_RETURN("neg1 %*d\n", -9, 150));
	PRINTF_CHECK_RETURN("neg2 %*.*d\n", -9, 4, 1555));
	PRINTF_CHECK_RETURN("neg3 %*d\n", -9, -255));
	PRINTF_CHECK_RETURN("neg4 %*.*d\n", 0, 0, -30));
	PRINTF_CHECK_RETURN("neg5 %*d\n", -100, -589));
	PRINTF_CHECK_RETURN("neg6 %*d\n", -156, 15555));
	PRINTF_CHECK_RETURN("***************%*s%*d**************%*u*************\n", 10, "coucou\n", 10, 10, -50, 20));
	PRINTF_CHECK_RETURN("taaa %100s\n", "hello\n"));
}


void test_int_min()
{
	puts("=====test_int_min=====\n");
	PRINTF_CHECK_RETURN("<%0.0i>\n", INT_MIN));
	PRINTF_CHECK_RETURN("<%i>\n", INT_MIN));
	PRINTF_CHECK_RETURN("<%-i>\n", INT_MIN));
	PRINTF_CHECK_RETURN("<%1.1i>\n", INT_MIN));
	PRINTF_CHECK_RETURN("<%-1.1i>\n", INT_MIN));
	PRINTF_CHECK_RETURN("<%-1.*i>\n", -1, INT_MIN));
	PRINTF_CHECK_RETURN("<%13.15i>\n", INT_MIN));
	PRINTF_CHECK_RETURN("<%25.*i>\n", -30, INT_MIN));
	PRINTF_CHECK_RETURN("<%-25.1i>\n", INT_MIN));
	PRINTF_CHECK_RETURN("<%-25.*i>\n", -1, INT_MIN));
	PRINTF_CHECK_RETURN("<%-1.15i>\n", INT_MIN));
	PRINTF_CHECK_RETURN("<%-1.*i>\n", -25, INT_MIN));
}

void test_int_max()
{
	puts("=====test_int_max=====\n");
	PRINTF_CHECK_RETURN("<%0.0i>\n", INT_MAX));
	PRINTF_CHECK_RETURN("<%i>\n", INT_MAX));
	PRINTF_CHECK_RETURN("<%-i>\n", INT_MAX));
	PRINTF_CHECK_RETURN("<%1.1i>\n", INT_MAX));
	PRINTF_CHECK_RETURN("<%-1.1i>\n", INT_MAX));
	PRINTF_CHECK_RETURN("<%-1.*i>\n", -1, INT_MAX));
	PRINTF_CHECK_RETURN("<%25.30i>\n", INT_MAX));
	PRINTF_CHECK_RETURN("<%25.*i>\n", -30, INT_MAX));
	PRINTF_CHECK_RETURN("<%-25.1i>\n", INT_MAX));
	PRINTF_CHECK_RETURN("<%-25.*i>\n", -1, INT_MAX));
	PRINTF_CHECK_RETURN("<%-1.25i>\n", INT_MAX));
	PRINTF_CHECK_RETURN("<%-1.*i>\n", -25, INT_MAX));
}

void test_misc()
{
	PRINTF_CHECK_RETURN("\n"));
	PRINTF_CHECK_RETURN("<%0*d%17s%p>\n", 20, -123456789, " HELLO WORLD \n", NULL));
	PRINTF_CHECK_RETURN("%s\n", "easy string\n"));
	PRINTF_CHECK_RETURN("and another %s!\n", "easy string\n"));
	PRINTF_CHECK_RETURN("%c%c%c%c%c%c%c%c\n", '.', '0', '5', '\0', '	', 'y', 'o', '!'));
	PRINTF_CHECK_RETURN("%c\n", 0));
	PRINTF_CHECK_RETURN("ints: MIN:%i MAX:%d 0:%i, -1:%d\n", INT_MIN, INT_MAX, 0, -1));
	PRINTF_CHECK_RETURN("\n"));
	PRINTF_CHECK_RETURN("\0hey\n"));
	PRINTF_CHECK_RETURN("🌑 🌒 🌓 %s\n", "🌔\n"));
}

void test_all_char()
{
	char c = 0;

	do
		PRINTF_CHECK_RETURN("<%*c>\n", 10, c));
	while (c++ < 127);
}

void test_c()
{
	PRINTF_CHECK_RETURN("%-c\n", 'c'));
}

void test_percent()
{
	PRINTF_CHECK_RETURN("<%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%>\n"));
}

void test_s()
{
	PRINTF_CHECK_RETURN("<%1s>\n", "\n"));
	PRINTF_CHECK_RETURN("<%s>\n", "\n"));
	PRINTF_CHECK_RETURN("<%s>\n", "abc\n"));

	PRINTF_CHECK_RETURN("<%s>\n", NULL));
	PRINTF_CHECK_RETURN("<%1s>\n", NULL));
	PRINTF_CHECK_RETURN("<%2s>\n", NULL));
	PRINTF_CHECK_RETURN("<%3s>\n", NULL));
	PRINTF_CHECK_RETURN("<%4s>\n", NULL));
	PRINTF_CHECK_RETURN("<%5s>\n", NULL));
	PRINTF_CHECK_RETURN("<%6s>\n", NULL));
	PRINTF_CHECK_RETURN("<%7s>\n", NULL));
	PRINTF_CHECK_RETURN("<%8s>\n", NULL));
	PRINTF_CHECK_RETURN("<%9s>\n", NULL));

	PRINTF_CHECK_RETURN("<%-s>\n", NULL));
	PRINTF_CHECK_RETURN("<%-1s>\n", NULL));
	PRINTF_CHECK_RETURN("<%-2s>\n", NULL));
	PRINTF_CHECK_RETURN("<%-3s>\n", NULL));
	PRINTF_CHECK_RETURN("<%-4s>\n", NULL));
	PRINTF_CHECK_RETURN("<%-5s>\n", NULL));
	PRINTF_CHECK_RETURN("<%-6s>\n", NULL));
	PRINTF_CHECK_RETURN("<%-7s>\n", NULL));
	PRINTF_CHECK_RETURN("<%-8s>\n", NULL));
	PRINTF_CHECK_RETURN("<%-9s>\n", NULL));

	PRINTF_CHECK_RETURN("<%s>\n", NULL));
	PRINTF_CHECK_RETURN("<%1s>\n", NULL));
	PRINTF_CHECK_RETURN("<%2s>\n", NULL));
	PRINTF_CHECK_RETURN("<%3s>\n", NULL));
	PRINTF_CHECK_RETURN("<%4s>\n", NULL));
	PRINTF_CHECK_RETURN("<%5s>\n", NULL));
	PRINTF_CHECK_RETURN("<%6s>\n", NULL));
	PRINTF_CHECK_RETURN("<%7s>\n", NULL));
	PRINTF_CHECK_RETURN("<%8s>\n", NULL));
	PRINTF_CHECK_RETURN("<%9s>\n", NULL));

	PRINTF_CHECK_RETURN("<%.0s>\n", NULL));
	PRINTF_CHECK_RETURN("<%.1s>\n", NULL));
	PRINTF_CHECK_RETURN("<%.2s>\n", NULL));
	PRINTF_CHECK_RETURN("<%.3s>\n", NULL));
	PRINTF_CHECK_RETURN("<%.4s>\n", NULL));
	PRINTF_CHECK_RETURN("<%.5s>\n", NULL));
	PRINTF_CHECK_RETURN("<%.6s>\n", NULL));
	PRINTF_CHECK_RETURN("<%.7s>\n", NULL));
	PRINTF_CHECK_RETURN("<%.8s>\n", NULL));
	PRINTF_CHECK_RETURN("<%.9s>\n", NULL));

	PRINTF_CHECK_RETURN("<%-9.0s>\n", NULL));
	PRINTF_CHECK_RETURN("<%-8.1s>\n", NULL));
	PRINTF_CHECK_RETURN("<%-7.2s>\n", NULL));
	PRINTF_CHECK_RETURN("<%-6.3s>\n", NULL));
	PRINTF_CHECK_RETURN("<%-5.4s>\n", NULL));
	PRINTF_CHECK_RETURN("<%-4.5s>\n", NULL));
	PRINTF_CHECK_RETURN("<%-3.6s>\n", NULL));
	PRINTF_CHECK_RETURN("<%-2.7s>\n", NULL));
	PRINTF_CHECK_RETURN("<%-1.8s>\n", NULL));
	PRINTF_CHECK_RETURN("<%-.9s>\n", NULL));

	PRINTF_CHECK_RETURN("<%9.0s>\n", NULL));
	PRINTF_CHECK_RETURN("<%8.1s>\n", NULL));
	PRINTF_CHECK_RETURN("<%7.2s>\n", NULL));
	PRINTF_CHECK_RETURN("<%6.3s>\n", NULL));
	PRINTF_CHECK_RETURN("<%5.4s>\n", NULL));
	PRINTF_CHECK_RETURN("<%4.5s>\n", NULL));
	PRINTF_CHECK_RETURN("<%3.6s>\n", NULL));
	PRINTF_CHECK_RETURN("<%2.7s>\n", NULL));
	PRINTF_CHECK_RETURN("<%1.8s>\n", NULL));
	PRINTF_CHECK_RETURN("<%.9s>\n", NULL));

	/*	PRINTF_CHECK_RETURN("<%010s>\n", "\n"));
	PRINTF_CHECK_RETURN("<%-1s>\n", "\n"));
	PRINTF_CHECK_RETURN("<%-10s>\n", "\n"));
	PRINTF_CHECK_RETURN("<%10s>\n", "\n"));
	PRINTF_CHECK_RETURN("<%-0s>\n", "\n"));
	PRINTF_CHECK_RETURN("<%00s>\n", "\n"));
	PRINTF_CHECK_RETURN("<%-s>\n", "\n"));
	PRINTF_CHECK_RETURN("<%.1s>\n", "\n"));
	PRINTF_CHECK_RETURN("<%-.s>\n", "\n"));
	PRINTF_CHECK_RETURN("<%s\n", "abcdefghijk 046546861320651032164\n"));
	PRINTF_CHECK_RETURN("<%7.5s>\n", "precision\n"));
	PRINTF_CHECK_RETURN("<%.s>\n", "precision\n"));
	PRINTF_CHECK_RETURN("<%.s>\n", "precision\n"));
	PRINTF_CHECK_RETURN("<%20.8s>\n", "precision\n"));
	PRINTF_CHECK_RETURN("<%10.10s>\n", "precision\n"));
	PRINTF_CHECK_RETURN("<%1.9s>\n", "precision\n"));
	PRINTF_CHECK_RETURN("<%-20.11s>\n", "precision\n"));
	PRINTF_CHECK_RETURN("<%-10.10s>\n", "precision\n"));
	PRINTF_CHECK_RETURN("<%-1.9s>\n", "precision\n"));
	PRINTF_CHECK_RETURN("<%10s>\n", "0123456789\n"));
	PRINTF_CHECK_RETURN("<%10s>\n", "012345678\n"));
	PRINTF_CHECK_RETURN("<%010s>\n", "0123456789\n"));
	PRINTF_CHECK_RETURN("<%010s>\n", "012345678\n"));
	PRINTF_CHECK_RETURN("<%-10s>\n", "0123456789\n"));
	PRINTF_CHECK_RETURN("<%-10s>\n", "012345678\n"));
	PRINTF_CHECK_RETURN("<%*.*s>\n", 0, 0, "\n"));
	PRINTF_CHECK_RETURN("<%*.*s>\n", 1, 1, "\n"));
	PRINTF_CHECK_RETURN("<%*.*s>\n", -1, 1, "\n"));
	PRINTF_CHECK_RETURN("<%*.*s>\n", 1, -1, "\n"));
	PRINTF_CHECK_RETURN("<%*.*s>\n", -1, -1, "\n"));
	PRINTF_CHECK_RETURN("<%*.*s>\n", 10, 1, "\n"));
	PRINTF_CHECK_RETURN("<%*.*s>\n", -10, 1, "\n"));
	PRINTF_CHECK_RETURN("<%*.*s>\n", 10, -1, "\n"));
	PRINTF_CHECK_RETURN("<%*.*s>\n", -10, -1, "\n"));
	PRINTF_CHECK_RETURN("<%*.*s>\n", 1, 10, "\n"));
	PRINTF_CHECK_RETURN("<%*.*s>\n", -1, 10, "\n"));
	PRINTF_CHECK_RETURN("<%*.*s>\n", 1, -10, "\n"));
	PRINTF_CHECK_RETURN("<%*.*s>\n", -1, -10, "\n"));
	char *tnull = NULL;
	PRINTF_CHECK_RETURN("<%s|%s>\n", tnull,"\n"));
	PRINTF_CHECK_RETURN("<%.*s|%.*s|%.*s|%.*s>\n",-0,tnull,-5,tnull,-10,tnull,-15,tnull));
	char *t = "0123456789";
	PRINTF_CHECK_RETURN("<%*.s|%*.s|%*.s|%*.s|%*.s>\n", 0,t, 10,t, 30,t, -10,t, -20,t));
	PRINTF_CHECK_RETURN("<%-.*s|%-.*s|%-.*s|%-.*s>\n",-0,t, -5,t, -10,t, -15,t));
	PRINTF_CHECK_RETURN("<%s|%s>\n",tnull,"\n"));
	PRINTF_CHECK_RETURN("<%30.*s>\n", -10, "s\n"));*/
}

void test_p()
{
	void *i = (void *)123;
	void *j = (void *)1234;
	void *k = (void *)12345;
	void *l = (void *)0;
	void *m = (void *)1;
	void *n = (void *)12;
	void *o = (void *)345;
	void *p = (void *)543;
	void *q = (void *)1596248;

	PRINTF_CHECK_RETURN("<%p>\n", NULL));
	PRINTF_CHECK_RETURN("<%p>\n", (void *)i));
	PRINTF_CHECK_RETURN("<%p>\n", (void *)j));
	PRINTF_CHECK_RETURN("<%p>\n", (void *)k));
	PRINTF_CHECK_RETURN("<%p>\n", (void *)l));
	PRINTF_CHECK_RETURN("<%p>\n", (void *)m));
	PRINTF_CHECK_RETURN("<%p>\n", (void *)n));
	PRINTF_CHECK_RETURN("<%p>\n", (void *)o));
	PRINTF_CHECK_RETURN("<%p>\n", (void *)p));
	PRINTF_CHECK_RETURN("<%p>\n", (void *)q));
	PRINTF_CHECK_RETURN("<%p>\n", (void *)(i - j)));
	PRINTF_CHECK_RETURN("<%p>\n", (void *)(j - k)));
	PRINTF_CHECK_RETURN("<%p>\n", (void *)(k - l)));
	PRINTF_CHECK_RETURN("<%p>\n", (void *)(NULL - (void *)(p))));
	PRINTF_CHECK_RETURN("<%p>\n", (void *)(q - p)));
	PRINTF_CHECK_RETURN("<%p>\n", (void *)LONG_MAX));
	PRINTF_CHECK_RETURN("<%p>\n", (void *)99999999999));
	PRINTF_CHECK_RETURN("<%p>\n", (void *)9999999999));
	PRINTF_CHECK_RETURN("<%p>\n", (void *)999999999));
	PRINTF_CHECK_RETURN("<%p>\n", (void *)99999999));
	PRINTF_CHECK_RETURN("<%p>\n", (void *)9999999));
	PRINTF_CHECK_RETURN("<%p>\n", (void *)999999));
	PRINTF_CHECK_RETURN("<%p>\n", (void *)99999));
	PRINTF_CHECK_RETURN("<%p>\n", (void *)9999));
	PRINTF_CHECK_RETURN("<%p>\n", (void *)999));
	PRINTF_CHECK_RETURN("<%p>\n", (void *)99));
	PRINTF_CHECK_RETURN("<%p>\n", (void *)9));
	PRINTF_CHECK_RETURN("<%p>\n", (void *)LONG_MIN));
	PRINTF_CHECK_RETURN("<%-8p>\n", (void *)LONG_MAX));
	PRINTF_CHECK_RETURN("<%-8p>\n", (void *)99999999999));
	PRINTF_CHECK_RETURN("<%-8p>\n", (void *)9999999999));
	PRINTF_CHECK_RETURN("<%-8p>\n", (void *)999999999));
	PRINTF_CHECK_RETURN("<%-8p>\n", (void *)99999999));
	PRINTF_CHECK_RETURN("<%-8p>\n", (void *)9999999));
	PRINTF_CHECK_RETURN("<%-8p>\n", (void *)999999));
	PRINTF_CHECK_RETURN("<%-8p>\n", (void *)99999));
	PRINTF_CHECK_RETURN("<%-8p>\n", (void *)9999));
	PRINTF_CHECK_RETURN("<%-8p>\n", (void *)999));
	PRINTF_CHECK_RETURN("<%-8p>\n", (void *)99));
	PRINTF_CHECK_RETURN("<%-8p>\n", (void *)9));
	PRINTF_CHECK_RETURN("<%-8p>\n", (void *)LONG_MIN));
	PRINTF_CHECK_RETURN("<%8p>\n", (void *)LONG_MAX));
	PRINTF_CHECK_RETURN("<%8p>\n", (void *)99999999999));
	PRINTF_CHECK_RETURN("<%8p>\n", (void *)9999999999));
	PRINTF_CHECK_RETURN("<%8p>\n", (void *)999999999));
	PRINTF_CHECK_RETURN("<%8p>\n", (void *)99999999));
	PRINTF_CHECK_RETURN("<%8p>\n", (void *)9999999));
	PRINTF_CHECK_RETURN("<%8p>\n", (void *)999999));
	PRINTF_CHECK_RETURN("<%8p>\n", (void *)99999));
	PRINTF_CHECK_RETURN("<%8p>\n", (void *)9999));
	PRINTF_CHECK_RETURN("<%8p>\n", (void *)999));
	PRINTF_CHECK_RETURN("<%8p>\n", (void *)99));
	PRINTF_CHECK_RETURN("<%8p>\n", (void *)9));
	PRINTF_CHECK_RETURN("<%8p>\n", (void *)LONG_MIN));
	PRINTF_CHECK_RETURN("<%19p>\n", (void *)LONG_MAX));
	PRINTF_CHECK_RETURN("<%19p>\n", (void *)99999999999));
	PRINTF_CHECK_RETURN("<%19p>\n", (void *)9999999999));
	PRINTF_CHECK_RETURN("<%19p>\n", (void *)999999999));
	PRINTF_CHECK_RETURN("<%19p>\n", (void *)99999999));
	PRINTF_CHECK_RETURN("<%19p>\n", (void *)9999999));
	PRINTF_CHECK_RETURN("<%19p>\n", (void *)999999));
	PRINTF_CHECK_RETURN("<%19p>\n", (void *)99999));
	PRINTF_CHECK_RETURN("<%19p>\n", (void *)9999));
	PRINTF_CHECK_RETURN("<%19p>\n", (void *)999));
	PRINTF_CHECK_RETURN("<%19p>\n", (void *)99));
	PRINTF_CHECK_RETURN("<%19p>\n", (void *)9));
	PRINTF_CHECK_RETURN("<%*p>\n", -1, (void *)0));
	PRINTF_CHECK_RETURN("<%19p>\n", (void *)INTPTR_MIN));
	PRINTF_CHECK_RETURN("<%*p>\n", 0, (void *)INTPTR_MIN));
	PRINTF_CHECK_RETURN("<%*p>\n", -1, (void *)INTPTR_MIN));
	PRINTF_CHECK_RETURN("<%*p>\n", -10, (void *)INTPTR_MIN));
	PRINTF_CHECK_RETURN("<%*p>\n", -25, (void *)INTPTR_MIN));
}

void test_x()
{
	void *i = (void *)0;
	void *j = (void *)10;
	void *k = (void *)200;
	void *l = (void *)3000;
	void *m = (void *)40000;
	void *n = (void *)500000;
	void *o = (void *)6000000;
	void *p = (void *)70000000;
	void *q = (void *)800000000;

	PRINTF_CHECK_RETURN("<%x>\n", 0));
	PRINTF_CHECK_RETURN("<%x>\n", 5));
	PRINTF_CHECK_RETURN("<%x>\n", 10));
	PRINTF_CHECK_RETURN("<%x>\n", 100));
	PRINTF_CHECK_RETURN("<%x>\n", (unsigned int)i));
	PRINTF_CHECK_RETURN("<%x>\n", (unsigned int)j));
	PRINTF_CHECK_RETURN("<%x>\n", (unsigned int)k));
	PRINTF_CHECK_RETURN("<%x>\n", (unsigned int)l));
	PRINTF_CHECK_RETURN("<%x>\n", (unsigned int)m));
	PRINTF_CHECK_RETURN("<%x>\n", (unsigned int)n));
	PRINTF_CHECK_RETURN("<%x>\n", (unsigned int)o));
	PRINTF_CHECK_RETURN("<%x>\n", (unsigned int)p));
	PRINTF_CHECK_RETURN("<%x>\n", (unsigned int)q));
	PRINTF_CHECK_RETURN("<%x>\n", (unsigned int)(i - j)));
	PRINTF_CHECK_RETURN("<%x>\n", (unsigned int)(j - k)));
	PRINTF_CHECK_RETURN("<%x>\n", (unsigned int)(k - l)));
	PRINTF_CHECK_RETURN("<%x>\n", (unsigned int)(q - p)));
	PRINTF_CHECK_RETURN("<%x>\n", (unsigned int)LONG_MAX));
	PRINTF_CHECK_RETURN("<%x>\n", (unsigned int)99999999999));
	PRINTF_CHECK_RETURN("<%x>\n", (unsigned int)9999999999));
	PRINTF_CHECK_RETURN("<%x>\n", (unsigned int)999999999));
	PRINTF_CHECK_RETURN("<%x>\n", (unsigned int)99999999));
	PRINTF_CHECK_RETURN("<%x>\n", (unsigned int)9999999));
	PRINTF_CHECK_RETURN("<%x>\n", (unsigned int)999999));
	PRINTF_CHECK_RETURN("<%x>\n", (unsigned int)99999));
	PRINTF_CHECK_RETURN("<%x>\n", (unsigned int)9999));
	PRINTF_CHECK_RETURN("<%x>\n", (unsigned int)999));
	PRINTF_CHECK_RETURN("<%x>\n", (unsigned int)99));
	PRINTF_CHECK_RETURN("<%x>\n", (unsigned int)9));
	PRINTF_CHECK_RETURN("<%x>\n", (unsigned int)LONG_MIN));
	PRINTF_CHECK_RETURN("<%-8x>\n", (unsigned int)LONG_MAX));
	PRINTF_CHECK_RETURN("<%-8x>\n", (unsigned int)99999999999));
	PRINTF_CHECK_RETURN("<%-8x>\n", (unsigned int)9999999999));
	PRINTF_CHECK_RETURN("<%-8x>\n", 999999999));
	PRINTF_CHECK_RETURN("<%-8x>\n", 99999999));
	PRINTF_CHECK_RETURN("<%-8x>\n", 9999999));
	PRINTF_CHECK_RETURN("<%-8x>\n", 999999));
	PRINTF_CHECK_RETURN("<%-8x>\n", 99999));
	PRINTF_CHECK_RETURN("<%-8x>\n", 9999));
	PRINTF_CHECK_RETURN("<%-8x>\n", 999));
	PRINTF_CHECK_RETURN("<%-8x>\n", 99));
	PRINTF_CHECK_RETURN("<%-8x>\n", 9));
	PRINTF_CHECK_RETURN("<%-8x>\n", (unsigned int)LONG_MIN));
	PRINTF_CHECK_RETURN("<%8x>\n", (unsigned int)LONG_MAX));
	PRINTF_CHECK_RETURN("<%8x>\n", (unsigned int)99999999999));
	PRINTF_CHECK_RETURN("<%8x>\n", (unsigned int)9999999999));
	PRINTF_CHECK_RETURN("<%8x>\n", 999999999));
	PRINTF_CHECK_RETURN("<%8x>\n", 99999999));
	PRINTF_CHECK_RETURN("<%8x>\n", 9999999));
	PRINTF_CHECK_RETURN("<%8x>\n", 999999));
	PRINTF_CHECK_RETURN("<%8x>\n", 99999));
	PRINTF_CHECK_RETURN("<%8x>\n", 9999));
	PRINTF_CHECK_RETURN("<%8x>\n", 999));
	PRINTF_CHECK_RETURN("<%8x>\n", 99));
	PRINTF_CHECK_RETURN("<%8x>\n", 9));
	PRINTF_CHECK_RETURN("<%8x>\n", (unsigned int)LONG_MIN));
	PRINTF_CHECK_RETURN("<%19X>\n", (unsigned int)LONG_MAX));
	PRINTF_CHECK_RETURN("<%19X>\n", (unsigned int)99999999999));
	PRINTF_CHECK_RETURN("<%19X>\n", (unsigned int)9999999999));
	PRINTF_CHECK_RETURN("<%19X>\n", 999999999));
	PRINTF_CHECK_RETURN("<%19X>\n", 99999999));
	PRINTF_CHECK_RETURN("<%19X>\n", 9999999));
	PRINTF_CHECK_RETURN("<%19X>\n", 999999));
	PRINTF_CHECK_RETURN("<%19X>\n", 99999));
	PRINTF_CHECK_RETURN("<%19X>\n", 9999));
	PRINTF_CHECK_RETURN("<%19X>\n", 999));
	PRINTF_CHECK_RETURN("<%19X>\n", 99));
	PRINTF_CHECK_RETURN("<%19X>\n", 9));
	PRINTF_CHECK_RETURN("<%*X>\n", 0, (unsigned int)INTPTR_MIN));
	PRINTF_CHECK_RETURN("<%*X>\n", -1, (unsigned int)INTPTR_MIN));
	PRINTF_CHECK_RETURN("<%*X>\n", -10, (unsigned int)INTPTR_MIN));
	PRINTF_CHECK_RETURN("<%*X>\n", -25, (unsigned int)INTPTR_MIN));
	PRINTF_CHECK_RETURN("<%0.20x>\n", 12345));
	PRINTF_CHECK_RETURN("<%.x>\n", 7458));
	PRINTF_CHECK_RETURN("<%.0X>\n", 7458));
	PRINTF_CHECK_RETURN("<%.0X>\n", 0));
}

void test_u()
{
	PRINTF_CHECK_RETURN("%u\n", 0));
	PRINTF_CHECK_RETURN("%u\n", 10));
	PRINTF_CHECK_RETURN("%u\n", 100));
	PRINTF_CHECK_RETURN("%u\n", 10000));
	PRINTF_CHECK_RETURN("%u\n", 100000));
	PRINTF_CHECK_RETURN("%u\n", 1000000));
	PRINTF_CHECK_RETURN("%u\n", 10000000));
	PRINTF_CHECK_RETURN("%u\n", 100000000));
	PRINTF_CHECK_RETURN("%u\n", 1000000000));
	PRINTF_CHECK_RETURN("%u\n", UINT_MAX));
	PRINTF_CHECK_RETURN("<%-8u>\n", UINT_MAX));
	PRINTF_CHECK_RETURN("<%-8u>\n", 1999999999));
	PRINTF_CHECK_RETURN("<%-8u>\n", 999999999));
	PRINTF_CHECK_RETURN("<%-8u>\n", 99999999));
	PRINTF_CHECK_RETURN("<%-8u>\n", 9999999));
	PRINTF_CHECK_RETURN("<%-8u>\n", 999999));
	PRINTF_CHECK_RETURN("<%-8u>\n", 99999));
	PRINTF_CHECK_RETURN("<%-8u>\n", 9999));
	PRINTF_CHECK_RETURN("<%-8u>\n", 999));
	PRINTF_CHECK_RETURN("<%-8u>\n", 99));
	PRINTF_CHECK_RETURN("<%-8u>\n", 9));
	PRINTF_CHECK_RETURN("<%8u>\n", UINT_MAX));
	PRINTF_CHECK_RETURN("<%8u>\n", 1999999999));
	PRINTF_CHECK_RETURN("<%8u>\n", 999999999));
	PRINTF_CHECK_RETURN("<%8u>\n", 99999999));
	PRINTF_CHECK_RETURN("<%8u>\n", 9999999));
	PRINTF_CHECK_RETURN("<%8u>\n", 999999));
	PRINTF_CHECK_RETURN("<%8u>\n", 99999));
	PRINTF_CHECK_RETURN("<%8u>\n", 9999));
	PRINTF_CHECK_RETURN("<%8u>\n", 999));
	PRINTF_CHECK_RETURN("<%8u>\n", 99));
	PRINTF_CHECK_RETURN("<%8u>\n", 9));
	PRINTF_CHECK_RETURN("<%-18u>\n", UINT_MAX));
	PRINTF_CHECK_RETURN("<%-18u>\n", 1999999999));
	PRINTF_CHECK_RETURN("<%-18u>\n", 999999999));
	PRINTF_CHECK_RETURN("<%-18u>\n", 99999999));
	PRINTF_CHECK_RETURN("<%-18u>\n", 9999999));
	PRINTF_CHECK_RETURN("<%-18u>\n", 999999));
	PRINTF_CHECK_RETURN("<%-18u>\n", 99999));
	PRINTF_CHECK_RETURN("<%-18u>\n", 9999));
	PRINTF_CHECK_RETURN("<%-18u>\n", 999));
	PRINTF_CHECK_RETURN("<%-18u>\n", 99));
	PRINTF_CHECK_RETURN("<%-18u>\n", 9));
	PRINTF_CHECK_RETURN("<%18u>\n", UINT_MAX));
	PRINTF_CHECK_RETURN("<%18u>\n", 1999999999));
	PRINTF_CHECK_RETURN("<%18u>\n", 999999999));
	PRINTF_CHECK_RETURN("<%18u>\n", 99999999));
	PRINTF_CHECK_RETURN("<%18u>\n", 9999999));
	PRINTF_CHECK_RETURN("<%18u>\n", 999999));
	PRINTF_CHECK_RETURN("<%18u>\n", 99999));
	PRINTF_CHECK_RETURN("<%18u>\n", 9999));
	PRINTF_CHECK_RETURN("<%18u>\n", 999));
	PRINTF_CHECK_RETURN("<%18u>\n", 99));
	PRINTF_CHECK_RETURN("<%18u>\n", 9));
	PRINTF_CHECK_RETURN("<%18.u>\n", UINT_MAX));
	PRINTF_CHECK_RETURN("<%18.0u>\n", 1999999999));
	PRINTF_CHECK_RETURN("<%18.u>\n", 999999999));
	PRINTF_CHECK_RETURN("<%18.0u>\n", 99999999));
	PRINTF_CHECK_RETURN("<%18.u>\n", 9999999));
	PRINTF_CHECK_RETURN("<%18.0u>\n", 999999));
	PRINTF_CHECK_RETURN("<%18.u>\n", 99999));
	PRINTF_CHECK_RETURN("<%18.0u>\n", 9999));
	PRINTF_CHECK_RETURN("<%18.u>\n", 999));
	PRINTF_CHECK_RETURN("<%18.0u>\n", 99));
	PRINTF_CHECK_RETURN("<%18.u>\n", 9));
	PRINTF_CHECK_RETURN("<%18.6u>\n", UINT_MAX));
	PRINTF_CHECK_RETURN("<%18.6u>\n", 1999999999));
	PRINTF_CHECK_RETURN("<%18.6u>\n", 999999999));
	PRINTF_CHECK_RETURN("<%18.6u>\n", 99999999));
	PRINTF_CHECK_RETURN("<%18.6u>\n", 9999999));
	PRINTF_CHECK_RETURN("<%18.6u>\n", 999999));
	PRINTF_CHECK_RETURN("<%18.6u>\n", 99999));
	PRINTF_CHECK_RETURN("<%18.6u>\n", 9999));
	PRINTF_CHECK_RETURN("<%18.6u>\n", 999));
	PRINTF_CHECK_RETURN("<%18.6u>\n", 99));
	PRINTF_CHECK_RETURN("<%18.6u>\n", 9));
	PRINTF_CHECK_RETURN("<%18.*u>\n", -5, UINT_MAX));
	PRINTF_CHECK_RETURN("<%18.*u>\n", -5, 1999999999));
	PRINTF_CHECK_RETURN("<%18.*u>\n", -5, 999999999));
	PRINTF_CHECK_RETURN("<%18.*u>\n", -5, 99999999));
	PRINTF_CHECK_RETURN("<%18.*u>\n", -5, 9999999));
	PRINTF_CHECK_RETURN("<%18.*u>\n", -5, 999999));
	PRINTF_CHECK_RETURN("<%18.*u>\n", -5, 99999));
	PRINTF_CHECK_RETURN("<%18.*u>\n", -5, 9999));
	PRINTF_CHECK_RETURN("<%18.*u>\n", -5, 999));
	PRINTF_CHECK_RETURN("<%18.*u>\n", -5, 99));
	PRINTF_CHECK_RETURN("<%18.*u>\n", -5, 9));
	PRINTF_CHECK_RETURN("<%18.*u>\n", 10, UINT_MAX));
	PRINTF_CHECK_RETURN("<%18.*u>\n", 10, 1999999999));
	PRINTF_CHECK_RETURN("<%18.*u>\n", 10, 999999999));
	PRINTF_CHECK_RETURN("<%18.*u>\n", 10, 99999999));
	PRINTF_CHECK_RETURN("<%18.*u>\n", 10, 9999999));
	PRINTF_CHECK_RETURN("<%18.*u>\n", 10, 999999));
	PRINTF_CHECK_RETURN("<%18.*u>\n", 10, 99999));
	PRINTF_CHECK_RETURN("<%18.*u>\n", 10, 9999));
	PRINTF_CHECK_RETURN("<%18.*u>\n", 10, 999));
	PRINTF_CHECK_RETURN("<%18.*u>\n", 10, 99));
	PRINTF_CHECK_RETURN("<%18.*u>\n", 10, 9));
	PRINTF_CHECK_RETURN("<%7.*u>\n", 10, UINT_MAX));
	PRINTF_CHECK_RETURN("<%7.*u>\n", 10, 1999999999));
	PRINTF_CHECK_RETURN("<%7.*u>\n", 10, 999999999));
	PRINTF_CHECK_RETURN("<%7.*u>\n", 10, 99999999));
	PRINTF_CHECK_RETURN("<%7.*u>\n", 10, 9999999));
	PRINTF_CHECK_RETURN("<%7.*u>\n", 10, 999999));
	PRINTF_CHECK_RETURN("<%7.*u>\n", 10, 99999));
	PRINTF_CHECK_RETURN("<%7.*u>\n", 10, 9999));
	PRINTF_CHECK_RETURN("<%7.*u>\n", 10, 999));
	PRINTF_CHECK_RETURN("<%7.*u>\n", 10, 99));
	PRINTF_CHECK_RETURN("<%7.*u>\n", 10, 9));
}

void test_int_basic()
{
	puts("=====test_int_basic=====\n");
	PRINTF_CHECK_RETURN("<%.0i>\n", 0));
	PRINTF_CHECK_RETURN("<%.0i>\n", 458));
	PRINTF_CHECK_RETURN("<%30.0i>\n", 0));
	PRINTF_CHECK_RETURN("<%30i>\n", 0));
	PRINTF_CHECK_RETURN("<%2i>\n", 0));
	PRINTF_CHECK_RETURN("<%*.*i>\n", 1, 2, 4));
	PRINTF_CHECK_RETURN("<%5.*i>\n", -2, 4));
	PRINTF_CHECK_RETURN("<%30.*i>\n", -10, 1));
	PRINTF_CHECK_RETURN("<%*.*i>\n", -10, 10, 10));
	PRINTF_CHECK_RETURN("<%*.*i>\n", -10, -1, 1));
	PRINTF_CHECK_RETURN("<%10i>\n", 0));
	PRINTF_CHECK_RETURN("%05i\n", 0));
	PRINTF_CHECK_RETURN("%05i\n", -7));
	PRINTF_CHECK_RETURN("%05i\n", -203));
	PRINTF_CHECK_RETURN("%05i\n", 1560133635));
	PRINTF_CHECK_RETURN("%0i\n", -20));
	PRINTF_CHECK_RETURN("%-0i\n", -20));
	PRINTF_CHECK_RETURN("%-0i\n", 20));
	PRINTF_CHECK_RETURN("%000000000000000000i\n", -20));
	PRINTF_CHECK_RETURN("%0*.*i,%0*.*i,%0*.*i\n", 4, -2, 8, 4, -2, 88, 4, -2, 888));
	PRINTF_CHECK_RETURN("%0*.*i,%0*.*i,%0*.*i\n", 4, 2, 8, 4, 2, 88, 4, 2, 888));
	PRINTF_CHECK_RETURN("<%00--20i>\n", 0));
	PRINTF_CHECK_RETURN("<%20i>\n", -123456789));
	PRINTF_CHECK_RETURN("%07i\n", -54));
	PRINTF_CHECK_RETURN("%017i\n", INT_MIN));
	PRINTF_CHECK_RETURN("%d\t\t\t\t\n", 151));
	PRINTF_CHECK_RETURN("%.*d\t\t\t\t\n", 151, -2));
}

void test_uint_basic()
{
	puts("=====test_uint_basic=====\n");
	PRINTF_CHECK_RETURN("<%.0u>\n", 0));
	PRINTF_CHECK_RETURN("<%.0u>\n", 458));
	PRINTF_CHECK_RETURN("<%30.0u>\n", 0));
	PRINTF_CHECK_RETURN("<%30u>\n", 0));
	PRINTF_CHECK_RETURN("<%2u>\n", 0));
	PRINTF_CHECK_RETURN("<%*.5u>\n", 1, 1));
	PRINTF_CHECK_RETURN("<%5.*u>\n", -2, 4));
	PRINTF_CHECK_RETURN("<%30.*u>\n", -10, 1));
	PRINTF_CHECK_RETURN("<%*.*u>\n", -10, 10, 10));
	PRINTF_CHECK_RETURN("<%*.*u>\n", -10, -1, 1));
	PRINTF_CHECK_RETURN("<%10u>\n", 0));
	PRINTF_CHECK_RETURN("%05u\n", 0));
	PRINTF_CHECK_RETURN("%05u\n", -7));
	PRINTF_CHECK_RETURN("%05u\n", -203));
	PRINTF_CHECK_RETURN("%05u\n", 1560133635));
	PRINTF_CHECK_RETURN("%0u\n", -20));
	PRINTF_CHECK_RETURN("%-0u\n", -20));
	PRINTF_CHECK_RETURN("%000000000000000000u\n", -20));
	PRINTF_CHECK_RETURN("%0*.*u,%0*.*u,%0*.*u\n", 4, -2, 8, 4, -2, 88, 4, -2, 888));
	PRINTF_CHECK_RETURN("%0*.*u,%0*.*u,%0*.*u\n", 4, 0, 8, 4, 0, 88, 4, 0, 888));
	PRINTF_CHECK_RETURN("%0*.*u,%0*.*u,%0*.*u\n", 4, 2, 8, 4, 2, 88, 4, 2, 888));
	PRINTF_CHECK_RETURN("<%.5u>\n", 4));
	PRINTF_CHECK_RETURN("<%-0-0-05u>\n", 4));
	PRINTF_CHECK_RETURN("<%-5u>\n", 4));
}

void test_neg_prec()
{
	PRINTF_CHECK_RETURN("%4.*s\n", -1, "abcdefghl\n"));
	PRINTF_CHECK_RETURN("%4.*s\n", -1, "ab\n"));
	PRINTF_CHECK_RETURN("%4.*i\n", -1, 0123));
	PRINTF_CHECK_RETURN("%4.*i\n", -10, 0123));
	PRINTF_CHECK_RETURN("<%5.*i>\n", -2, 4));
	PRINTF_CHECK_RETURN("%4.*u\n", -1, 0123));
	PRINTF_CHECK_RETURN("%4.*u\n", -10, 0123));
	PRINTF_CHECK_RETURN("<%5.*u>\n", -2, 4));
	PRINTF_CHECK_RETURN("%147.*X\n", -58, 359303151u));
	PRINTF_CHECK_RETURN("%.*X\n", -1, 1));
	PRINTF_CHECK_RETURN("%.*X\n", -1, 4099649006u));
	PRINTF_CHECK_RETURN("%0181.x\n", -66));
	PRINTF_CHECK_RETURN("%147.*i\n", -58, 359303151u));
	PRINTF_CHECK_RETURN("%.*i\n", -1, 1));
	PRINTF_CHECK_RETURN("%.*i\n", -1, 4099649006u));
	PRINTF_CHECK_RETURN("%0181.i\n", -66));
	PRINTF_CHECK_RETURN("%147.*u\n", -58, 359303151u));
	PRINTF_CHECK_RETURN("%.*u\n", -1, 1));
	PRINTF_CHECK_RETURN("%.*u\n", -1, 4099649006u));
	PRINTF_CHECK_RETURN("%0181.u\n", -66));
}

int main(void)
{
	setbuf(stdout, NULL);
	test_c();
	test_all_char();
	test_percent();
	test_s();
	test_u();
	test_x();
	test_p();
	test_int_min();
	test_int_max();
	test_int_basic();
	test_neg_prec();
	test_uint_basic();
	test_abourin();

//	if (fail_nb)
//		PRINTF_CHECK_RETURN(RED "%i return fails" RESET, fail_nb);
//	else
//		PRINTF_CHECK_RETURN("no return fails\n");
#ifdef L
	system("leaks --quiet a.out\n");
#endif
	return (0);
}

/*
int			ft_PRINTF_CHECK_RETURN(const char *fmt, ...)
{
	int		ret;
	va_list	arg;

	va_start(arg, fmt);
	ret = ft_vPRINTF_CHECK_RETURN(fmt, arg);
	va_end(arg);
	return (ret);
}
*/
