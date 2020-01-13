/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   therbret_main_test_printf.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: therbret <therbret@gmx.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/02 17:20:03 by therbret          #+#    #+#             */
/*   Updated: 2020/01/13 01:48:48 by therbret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*			SUCH TESTS.
										MUCH STYLE.

I SUCK AT SCRIPTS. go to line <test_number + 100> to find the matching test
https://vim.fandom.com/wiki/Go_to_line


                    .-::::.
                   :-:/++++/.                                             .-//-.
                  -:-osyssyyo/.                                       -::::///+/`
                  /:ohysssshyoo/.                                  .:///+oossooo-
                 `//shso++oshhooo:.       _._       _._         `.::/osssoooosss/
                 ./+yho//:/+oyso+o/---:/++++++////++++++//:-.``.:::+sssso+//+oss/
                 -/oyyo/-.-:++o+/////:/+oo+/+++++/++/++///+/:::::/oyysso+:::/sss/
                 .+yhhs/.``./++/-.--:/++++//++++/:/+//+/::/+/:/+/osyso/:---:/sss/
                 `/sddy+-```-//:--://+++///++//+/:/++/++++/++++//osso+:---::+sss:
                 `/+yhyo-.``.-:-:///////////+++/:-:///+++++++oosooooo/:-::/+osso.
                 `/++o+//....-:/:::///////++++++/.:/++ooooooooosssso///::+++oyys`
                 `+o+oo++::::/:::::::///++oooo++/.:/+ooosssoooosssyysssooo++osho
                  .:://:::///:::::::::/+sssssoo+/.:+oossyyyssoooossyyysssyyhhyy:
                   .:-::////:-::::::-:/+syyyysso+-/+ossyhdhyssosssssyyyyssssss+`
                   `//+++/::---::::::/++ooyyyyyo+:/ooosyhddhhyssssssssyyyysso/`
                   ./+++/::-...-:-://++//oshhhyso/+oooshhddddhhhyyssssyyyyyyy-
                   -/+/:::--....-.....-.-+oyhhysooossosyhhhhssyyyyyysyyyyyhyy:
                  `://:::::------:-`/.` `:+ossoooossyssyhho   ./yhdhyyyhhhhhy/
                  .:/::--:::://--/o/-`    .:///+++osyyyso:-.../hmmNmddddhhhhho`
                 `-:::-::////++:.:/++/-..`-:-:////++osyss++oshdmmNNNNmmddddhhs-
                 `::/::/++///++:.-:///:-----::/://+++osssydddddmNNNNNNNmmmmdds.
                 .://///+/:/+++/-.-:://:--:///////+++oosyydmmmNNNNNNNNNNNNmmdy-
                 .:////++//++++:-.-:///:://///////++++syhhdmNNNNNNNNNNNNNNmmdh/
                 -//++/////++//-.-///////+++///////+ooyhdddmNNNNNNNNNNNNNNNmmh/`
                `-/+++///////:-..-//+++++++/////++//oshhddmmNNNNNNmmNNNNNNNmdy/`
                `-/+++//:::::-...-///+o++++///:--...-/sdmmmmmNNNNmmmmNNNNNNmds:`
                `-:/+++/:----....:/+++++++//:-`` ``...-/dNNmmmmNmmdmmmNNNNmdyo.
                 .://++//:---....:+/+oo++//:.`   `.--..-sNNNNmmmmddmmmNNmmmhy+.
                 .:///+//::--.....//+oo////:`      ``.-/dmNNmddmmmmmmNNmmddhs/`
                 .://////::--.....-:-+so////:`      `.:ymmmmmdmmmmmmmmmmdhhys/`
                `-://///:::--......---+o+/+/::-..``.-/ohdmmddmmmmmmmmmddhhyys/`
               `.:////+/:::---.........:////:--..``.-:+syhdmmmmmmmmmmdhhhhyyyo:
              `.://///++/:-----..........-:/::----:/+oshdmmNmmmmmmmmddhhhhyyys+.
              .://////++/::----------------://+++++syydmmmmNmmNNmmmdddhhhhyhhys/`
             `-/////::/++/::---::::::::::::/++oossssyyhdmmmmmmmmmmdddhhhyyhhhys+-
            `-:/+///:::/+//:::-::::////////++ossyyyyyyhddddmmmmmmdddhhhyyhhhhhyo:`
            `-/+++//::::////::::::///+++ooooossyhhhhhhddddddmmmmmdddhhyyhhhhhhys:`
            `:/oo++//:::://////::///++oossssssyhhdddddddmddmmmmmddddhhhhhhhhhhyo/.
            `-+ooo++//:::://+//////++oooosssyyyhhddddddmmmmmmmmmddddhhhddddddhyo-`
            `-+osoo++/::--:://////++++ooossyyyyhhdddddddmmmmmmmmmdddhhdddmmddhs+-
            `-/ossoo++/::-://////+++oooossyyyyhhdddddddddmmmmmmmmmmddddmmmmmdhs:`
             -/ossooo+//::::////+++oooossyyyhhhhdddddddmmmmmmmmmmmmmdmmmmmmmdho*/
             #include <stdio.h>//`+++oosssssyyyhhhdddddmmmmmmmmmmmmmmmmmmmmmmdh+`.
            #include <errno.h>//`/+++oosssssyyhhhhhhddddmmmmmmmmmmmmmmmmNmmmmmdy+`.
            #include <limits.h>//+/++++ooossssyyhhhhhhdhdddmmmmmmmmmmmmmmNmmmmmddhs:
           #include <stdlib.h>//+++//+/++oossssyyyhhhhddddddddmmmmmmmmmmmmmNmmmmddhh\
          //good doggo, fetching headers like a good doggo \ddmmmmmmmmmmmmmmmmmmmmmdh+

	#define RED "\x1b[31m"
	#define RESET "\x1b[0m"
	#ifndef PRINTF
	# define PRINTF printf
	#endif
	#define PRINTF_CHECK_RETURN PRINTF("\ntest: %i | ", test_number++) && PRINTF(" (return = %i)", PRINTF
	int	ft_printf(const char * restrict format, ...);

void lots_of_tests()
{
	unsigned int	test_number = 0;
	int				t = 50;
	void			*c = (void *)123456;
	void			*i = (void *)123;
	void			*j = (void *)1234;
	void			*k = (void *)12345;
	void			*l = (void *)0;
	void			*m = (void *)1;
	void			*n = (void *)12;
	void			*o = (void *)345;
	void			*p = (void *)543;
	void			*q = (void *)1596248;
	void			*bi = (void *)0;
	void			*bj = (void *)10;
	void			*bk = (void *)200;
	void			*bl = (void *)3000;
	void			*bm = (void *)40000;
	void			*bn = (void *)500000;
	void			*bo = (void *)6000000;
	void			*bp = (void *)70000000;
	void			*bq = (void *)800000000;

	PRINTF_CHECK_RETURN("pp %.50d", 10000));
	PRINTF_CHECK_RETURN("p1 %.4s", "cccc"));
	PRINTF_CHECK_RETURN("p2 %.10s", "cccc"));
	PRINTF_CHECK_RETURN("p3 %.4s", NULL));
	PRINTF_CHECK_RETURN("p4 %.5s", "aaaaa"));
	PRINTF_CHECK_RETURN("p5 %.3d", 100));
	PRINTF_CHECK_RETURN("p6 %.0d", 100));
	PRINTF_CHECK_RETURN("p7 %.4d", 100));
	PRINTF_CHECK_RETURN("p8 %.10d", 100));
	PRINTF_CHECK_RETURN("p9 %.50dabctest", 100));
	PRINTF_CHECK_RETURN("p10 %.1d", 100));
	PRINTF_CHECK_RETURN("p11 %.3d", 100));
	PRINTF_CHECK_RETURN("p12 %.0d", 0));
	PRINTF_CHECK_RETURN("p13 %.3i", 100));
	PRINTF_CHECK_RETURN("p14 %.0i", 100));
	PRINTF_CHECK_RETURN("p15 %.4i", 100));
	PRINTF_CHECK_RETURN("p16 %.10i", 100));
	PRINTF_CHECK_RETURN("p17 %.50i", 100));
	PRINTF_CHECK_RETURN("p18 %.1i", 100));
	PRINTF_CHECK_RETURN("p19 %.3x", 100));
	PRINTF_CHECK_RETURN("p20 %.0x", 0));
	PRINTF_CHECK_RETURN("p21 %.3x", 100));
	PRINTF_CHECK_RETURN("p22 %.0x", 100));
	PRINTF_CHECK_RETURN("p23 %.4x", 100));
	PRINTF_CHECK_RETURN("p24 %.10x", 100));
	PRINTF_CHECK_RETURN("p25 %.50x", 100));
	PRINTF_CHECK_RETURN("p26 %.1x", 100));
	PRINTF_CHECK_RETURN("p27 %.3x", 100));
	PRINTF_CHECK_RETURN("p28 %.0x", 0));
	PRINTF_CHECK_RETURN("p29 %.3u", 100));
	PRINTF_CHECK_RETURN("p30 %.0u", 100));
	PRINTF_CHECK_RETURN("p31 %.4u", 100));
	PRINTF_CHECK_RETURN("p32 %.10u", 100));
	PRINTF_CHECK_RETURN("p33 %.50u", 100));
	PRINTF_CHECK_RETURN("p34 %.1u", 100));
	PRINTF_CHECK_RETURN("p35 %.3u", 100));
	PRINTF_CHECK_RETURN("p36 %.0u", 0));
	PRINTF_CHECK_RETURN("%%"));
	PRINTF_CHECK_RETURN("Hello 42 school! %s", NULL));
	PRINTF_CHECK_RETURN("%d", 2147483647));
	PRINTF_CHECK_RETURN("%x", 2147483647));
	PRINTF_CHECK_RETURN("%X", 2147483647));
	PRINTF_CHECK_RETURN("%x", 0));
	PRINTF_CHECK_RETURN("%010x", 0));
	PRINTF_CHECK_RETURN("%010x", 20));
	PRINTF_CHECK_RETURN("%010x", -20));
	PRINTF_CHECK_RETURN("%10x", 20));
	PRINTF_CHECK_RETURN("%10.2x", -20));
	PRINTF_CHECK_RETURN("%-10x", 50));
	PRINTF_CHECK_RETURN("%-15x", 0));
	PRINTF_CHECK_RETURN("%.1x", 500));
	PRINTF_CHECK_RETURN("%*.*x", 50, 10, 2));
	PRINTF_CHECK_RETURN("%x", -1));
	PRINTF_CHECK_RETURN("%40.50d", 50));
	PRINTF_CHECK_RETURN("%d", -589));
	PRINTF_CHECK_RETURN("%-4d", -2464));
	PRINTF_CHECK_RETURN("%.5d", -2372));
	PRINTF_CHECK_RETURN("%p", NULL));
	PRINTF_CHECK_RETURN("%15p", NULL));
	PRINTF_CHECK_RETURN("%%p::[%010d]", -8473));
	PRINTF_CHECK_RETURN("%%p::[%10d]", -8473));
	PRINTF_CHECK_RETURN("%%p::[%.5d]", -8473));
	PRINTF_CHECK_RETURN("%%p::[%01.1d]", -8473));
	PRINTF_CHECK_RETURN("%%p::[%010.1d]", -8473));
	PRINTF_CHECK_RETURN("%%p::[%01.50d]", -8473));
	PRINTF_CHECK_RETURN("%%p::[%1.50d]", -8473));
	PRINTF_CHECK_RETURN("%%p::[%0100.50d]", -8473));
	PRINTF_CHECK_RETURN("%%p::[%010d]", 8473));
	PRINTF_CHECK_RETURN("%%p::[%10d]", 8473));
	PRINTF_CHECK_RETURN("%%p::[%.5d]", 8473));
	PRINTF_CHECK_RETURN("%%p::[%01.1d]", 8473));
	PRINTF_CHECK_RETURN("%%p::[%010.1d]", 8473));
	PRINTF_CHECK_RETURN("%%p::[%01.50d]", 8473));
	PRINTF_CHECK_RETURN("%%p::[%1.50d]", 8473));
	PRINTF_CHECK_RETURN("%%p::[%0100.50d]", 8473));
	PRINTF_CHECK_RETURN("%c", 'a'));
	PRINTF_CHECK_RETURN("%10c", 't'));
	PRINTF_CHECK_RETURN("%1c", 'y'));
	PRINTF_CHECK_RETURN("%50.2s", "Coucou"));
	PRINTF_CHECK_RETURN("%50.2s", NULL));
	PRINTF_CHECK_RETURN("%5.0s", "Hello"));
	PRINTF_CHECK_RETURN("%.1s", "Test"));
	PRINTF_CHECK_RETURN("%10s", NULL));
	PRINTF_CHECK_RETURN("%10s", "Ok"));
	PRINTF_CHECK_RETURN("1chiffre 1 %d chiffre 2 %d", 42, -42));
	PRINTF_CHECK_RETURN("2chiffre 1 %d chiffre 2 %d", 42, -42));
	PRINTF_CHECK_RETURN("4chiffre 1 %-12d chiffre 2 %-12d", 42, -42));
	PRINTF_CHECK_RETURN("t1 %050d", 10));
	PRINTF_CHECK_RETURN("t2 %-50d", 10));
	PRINTF_CHECK_RETURN("t3 %50.0d", 10));
	PRINTF_CHECK_RETURN("t4 %50.50d", 10));
	PRINTF_CHECK_RETURN("t5 %50.10d", 10));
	PRINTF_CHECK_RETURN("t6 %*.*d", 50, 5, 10));
	PRINTF_CHECK_RETURN("t7 %1.50d", -10));
	PRINTF_CHECK_RETURN("t8 %1.50d", 10));
	PRINTF_CHECK_RETURN("t9 %2.2d", 10));
	PRINTF_CHECK_RETURN("t10 %2.2d", -10));
	PRINTF_CHECK_RETURN("t12 %.0d", 0));
	PRINTF_CHECK_RETURN("t13 %01d", -20));
	PRINTF_CHECK_RETURN("t14 %10d", 1000));
	PRINTF_CHECK_RETURN("5chiffre 1 %0d chiffre 2 %0d", 42, -4));
	PRINTF_CHECK_RETURN("6chiffre 1 %012d chiffre 2 %012d", 42, -42));
	PRINTF_CHECK_RETURN("8chiffre 1 %*d chiffre 2 %*d", 42, 6, 6, 6));
	PRINTF_CHECK_RETURN("15chiffre 1 %.d chiffre 2 %.d", 42, -42));
	PRINTF_CHECK_RETURN("4caractere 1 %12c caractere 2 %12c", 'a', 'c'));
	PRINTF_CHECK_RETURN("1caractere 1 %c caractere 2 %c", 'a', 'c'));
	PRINTF_CHECK_RETURN("1hexa-maj 1 %X hexa-maj 2 %X", 42, -42));
	PRINTF_CHECK_RETURN("4hexa-maj 1 %12X hexa-maj 2 %int12X", 42, -42));
	PRINTF_CHECK_RETURN("4hexa-maj 1 %-12X hexa-maj 2 %-12X", 42, -42));
	PRINTF_CHECK_RETURN("5hexa-maj 1 %0X hexa-maj 2 %0X", 42, -42));
	PRINTF_CHECK_RETURN("6hexa-maj 1 %012X hexa-maj 2 %012X", 42, -42));
	PRINTF_CHECK_RETURN("8hexa-maj 1 %*X hexa-maj 2 %*X", 42, 6, 6, 6));
	PRINTF_CHECK_RETURN("1pointeur 1 %p pointeur 2 %p", c, c));
	PRINTF_CHECK_RETURN("4pointeur 1 %12p pointeur 2 %12p", c, c));
	PRINTF_CHECK_RETURN("4pointeur 1 %-12p pointeur 2 %-12p", c, c));
	PRINTF_CHECK_RETURN("1unsigned 1 %u unsigned 2 %u", 42, -42));
	PRINTF_CHECK_RETURN("4unsigned 1 %12u unsigned 2 %12u", 42, -42));
	PRINTF_CHECK_RETURN("4unsigned 1 %-12u unsigned 2 %-12u", 42, -42));
	PRINTF_CHECK_RETURN("5unsigned 1 %0u unsigned 2 %0u", 42, -42));
	PRINTF_CHECK_RETURN("6unsigned 1 %012u unsigned 2 %012u", 42, -42));
	PRINTF_CHECK_RETURN("8unsigned 1 %*u unsigned 2 %*u", 42, 6, 6, 6));
	PRINTF_CHECK_RETURN("15unsigned 1 %.u unsigned 2 %.u", 42, -42));
	PRINTF_CHECK_RETURN("%%"));
	PRINTF_CHECK_RETURN("%-.12u", -20000000));
	PRINTF_CHECK_RETURN("%-.12i", -20000000));
	PRINTF_CHECK_RETURN("truc"));
	PRINTF_CHECK_RETURN("04 Test de chiffre sans h : %d, et %d", 432767, -432767));
	PRINTF_CHECK_RETURN("31 This is an int : %.0d", 0));
	PRINTF_CHECK_RETURN("32 This is an int : %0d", 0));
	PRINTF_CHECK_RETURN("%d", t));
	PRINTF_CHECK_RETURN("%d", t));
	PRINTF_CHECK_RETURN("%d", t));
	PRINTF_CHECK_RETURN("%d", t));
	PRINTF_CHECK_RETURN("%d", t));
	PRINTF_CHECK_RETURN("%d", t));
	PRINTF_CHECK_RETURN("%d", t));
	PRINTF_CHECK_RETURN("1string 1 %s string 2 %s", "toto", "bonjour"));
	PRINTF_CHECK_RETURN("4string 1 %12s string 2 %12s", "toto", "bonjour"));
	PRINTF_CHECK_RETURN("4string 1 %-12s string 2 %-12s", "toto", "bonjour"));
	PRINTF_CHECK_RETURN("st1 %*.*d", 10, 10, 50));
	PRINTF_CHECK_RETURN("st2 %*.*d", 1, 50, 50));
	PRINTF_CHECK_RETURN("st3 %*.*d", 0, 0, 50));
	PRINTF_CHECK_RETURN("st4 %*.*d", 0, 50, 50));
	PRINTF_CHECK_RETURN("st5 %*.*d", 10, 0, 50));
	PRINTF_CHECK_RETURN("st6 %*.*d", 10, 10, 50));
	PRINTF_CHECK_RETURN("st12 %*d", 10, 50));
	PRINTF_CHECK_RETURN("st13 %*d", 0, 0));
	PRINTF_CHECK_RETURN("st14 %.*d", 0, 0));
	PRINTF_CHECK_RETURN("st15 %*d", 50, 5));
	PRINTF_CHECK_RETURN("st16 %0.*d", 50, 5));
	PRINTF_CHECK_RETURN("st17 %0.*d", 0, 0));
	PRINTF_CHECK_RETURN("st7 %*.*s", 1, 50, "hey"));
	PRINTF_CHECK_RETURN("st8 %*.*s", 0, 0, "coucou"));
	PRINTF_CHECK_RETURN("st9 %*.*s", 0, 50, "hey"));
	PRINTF_CHECK_RETURN("st10 %*.*s", 10, 0, "dsa"));
	PRINTF_CHECK_RETURN("st11 %*.*s", 10, 10, "hello"));
	PRINTF_CHECK_RETURN("st8 %.*s", 0, "coucou"));
	PRINTF_CHECK_RETURN("st9 %*s", 0, "hey"));
	PRINTF_CHECK_RETURN("st10 %*s", 10, "dsa"));
	PRINTF_CHECK_RETURN("st118 %*s", 100, "hello"));
	PRINTF_CHECK_RETURN("st118 %*d", 100, 0));
	PRINTF_CHECK_RETURN("ultimate1 %*d        %*i", 500, 0, 10, 10));
	PRINTF_CHECK_RETURN("ultimate2 %*d %*s %*x %*X %*i %*u", 1, 5000, 1, "hey", 10, 54700, 1, 300, 10000, -55, 1, -60));
	PRINTF_CHECK_RETURN("ultimate3 %*.*d %*.*s", 1, 50, 5000, 1, 0, "hey"));
	PRINTF_CHECK_RETURN("ultimate4 %*.*x %*.*X", 1, 50, 5000, 1, 0, 10));
	PRINTF_CHECK_RETURN("ultimate5 %*.*u", 1, 50, 5000));
	PRINTF_CHECK_RETURN("neg1 %*s", -9, "coucou"));
	PRINTF_CHECK_RETURN("neg2 %*.*s", -9, 4, "coucou"));
	PRINTF_CHECK_RETURN("neg3 %*s", -9, NULL));
	PRINTF_CHECK_RETURN("neg4 %*.*s", 0, 0, "coucou"));
	PRINTF_CHECK_RETURN("neg5 %*s", -100, "coucou"));
	PRINTF_CHECK_RETURN("neg6 %*s", -156, "coucou"));
	PRINTF_CHECK_RETURN("neg1 %*d", -9, 150));
	PRINTF_CHECK_RETURN("neg2 %*.*d", -9, 4, 1555));
	PRINTF_CHECK_RETURN("neg3 %*d", -9, -255));
	PRINTF_CHECK_RETURN("neg4 %*.*d", 0, 0, -30));
	PRINTF_CHECK_RETURN("neg5 %*d", -100, -589));
	PRINTF_CHECK_RETURN("neg6 %*d", -156, 15555));
	PRINTF_CHECK_RETURN("***************%*s%*d**************%*u*************", 10, "coucou", 10, 10, -50, 20));
	PRINTF_CHECK_RETURN("taaa %100s", "hello"));
	PRINTF_CHECK_RETURN("<%0.0i>", INT_MIN));
	PRINTF_CHECK_RETURN("<%i>", INT_MIN));
	PRINTF_CHECK_RETURN("<%-i>", INT_MIN));
	PRINTF_CHECK_RETURN("<%1.1i>", INT_MIN));
	PRINTF_CHECK_RETURN("<%-1.1i>", INT_MIN));
	PRINTF_CHECK_RETURN("<%-1.*i>", -1, INT_MIN));
	PRINTF_CHECK_RETURN("<%13.15i>", INT_MIN));
	PRINTF_CHECK_RETURN("<%25.*i>", -30, INT_MIN));
	PRINTF_CHECK_RETURN("<%-25.1i>", INT_MIN));
	PRINTF_CHECK_RETURN("<%-25.*i>", -1, INT_MIN));
	PRINTF_CHECK_RETURN("<%-1.15i>", INT_MIN));
	PRINTF_CHECK_RETURN("<%-1.*i>", -25, INT_MIN));
	PRINTF_CHECK_RETURN("<%0.0i>", INT_MAX));
	PRINTF_CHECK_RETURN("<%i>", INT_MAX));
	PRINTF_CHECK_RETURN("<%-i>", INT_MAX));
	PRINTF_CHECK_RETURN("<%1.1i>", INT_MAX));
	PRINTF_CHECK_RETURN("<%-1.1i>", INT_MAX));
	PRINTF_CHECK_RETURN("<%-1.*i>", -1, INT_MAX));
	PRINTF_CHECK_RETURN("<%25.30i>", INT_MAX));
	PRINTF_CHECK_RETURN("<%25.*i>", -30, INT_MAX));
	PRINTF_CHECK_RETURN("<%-25.1i>", INT_MAX));
	PRINTF_CHECK_RETURN("<%-25.*i>", -1, INT_MAX));
	PRINTF_CHECK_RETURN("<%-1.25i>", INT_MAX));
	PRINTF_CHECK_RETURN("<%-1.*i>", -25, INT_MAX));
	PRINTF_CHECK_RETURN("<%.0i>", 0));
	PRINTF_CHECK_RETURN("<%.0i>", 458));
	PRINTF_CHECK_RETURN("<%30.0i>", 0));
	PRINTF_CHECK_RETURN("<%30i>", 0));
	PRINTF_CHECK_RETURN("<%2i>", 0));
	PRINTF_CHECK_RETURN("<%*.*i>", 1, 2, 4));
	PRINTF_CHECK_RETURN("<%5.*i>", -2, 4));
	PRINTF_CHECK_RETURN("<%30.*i>", -10, 1));
	PRINTF_CHECK_RETURN("<%*.*i>", -10, 10, 10));
	PRINTF_CHECK_RETURN("<%*.*i>", -10, -1, 1));
	PRINTF_CHECK_RETURN("<%10i>", 0));
	PRINTF_CHECK_RETURN("%05i", 0));
	PRINTF_CHECK_RETURN("%05i", -7));
	PRINTF_CHECK_RETURN("%05i", -203));
	PRINTF_CHECK_RETURN("%05i", 1560133635));
	PRINTF_CHECK_RETURN("%0i", -20));
	PRINTF_CHECK_RETURN("%-0i", -20));
	PRINTF_CHECK_RETURN("%-0i", 20));
	PRINTF_CHECK_RETURN("%000000000000000000i", -20));
	PRINTF_CHECK_RETURN("%0*.*i,%0*.*i,%0*.*i", 4, -2, 8, 4, -2, 88, 4, -2, 888));
	PRINTF_CHECK_RETURN("%0*.*i,%0*.*i,%0*.*i", 4, 2, 8, 4, 2, 88, 4, 2, 888));
	PRINTF_CHECK_RETURN("<%00--20i>", 0));
	PRINTF_CHECK_RETURN("<%20i>", -123456789));
	PRINTF_CHECK_RETURN("%07i", -54));
	PRINTF_CHECK_RETURN("%017i", INT_MIN));
	PRINTF_CHECK_RETURN("%d\t\t\t\t", 151));
	PRINTF_CHECK_RETURN("%.*d\t\t\t\t", 151, -2));
	PRINTF_CHECK_RETURN("%u", 0));
	PRINTF_CHECK_RETURN("%u", 10));
	PRINTF_CHECK_RETURN("%u", 100));
	PRINTF_CHECK_RETURN("%u", 10000));
	PRINTF_CHECK_RETURN("%u", 100000));
	PRINTF_CHECK_RETURN("%u", 1000000));
	PRINTF_CHECK_RETURN("%u", 10000000));
	PRINTF_CHECK_RETURN("%u", 100000000));
	PRINTF_CHECK_RETURN("%u", 1000000000));
	PRINTF_CHECK_RETURN("%u", UINT_MAX));
	PRINTF_CHECK_RETURN("<%-8u>", UINT_MAX));
	PRINTF_CHECK_RETURN("<%-8u>", 1999999999));
	PRINTF_CHECK_RETURN("<%-8u>", 999999999));
	PRINTF_CHECK_RETURN("<%-8u>", 99999999));
	PRINTF_CHECK_RETURN("<%-8u>", 9999999));
	PRINTF_CHECK_RETURN("<%-8u>", 999999));
	PRINTF_CHECK_RETURN("<%-8u>", 99999));
	PRINTF_CHECK_RETURN("<%-8u>", 9999));
	PRINTF_CHECK_RETURN("<%-8u>", 999));
	PRINTF_CHECK_RETURN("<%-8u>", 99));
	PRINTF_CHECK_RETURN("<%-8u>", 9));
	PRINTF_CHECK_RETURN("<%8u>", UINT_MAX));
	PRINTF_CHECK_RETURN("<%8u>", 1999999999));
	PRINTF_CHECK_RETURN("<%8u>", 999999999));
	PRINTF_CHECK_RETURN("<%8u>", 99999999));
	PRINTF_CHECK_RETURN("<%8u>", 9999999));
	PRINTF_CHECK_RETURN("<%8u>", 999999));
	PRINTF_CHECK_RETURN("<%8u>", 99999));
	PRINTF_CHECK_RETURN("<%8u>", 9999));
	PRINTF_CHECK_RETURN("<%8u>", 999));
	PRINTF_CHECK_RETURN("<%8u>", 99));
	PRINTF_CHECK_RETURN("<%8u>", 9));
	PRINTF_CHECK_RETURN("<%-18u>", UINT_MAX));
	PRINTF_CHECK_RETURN("<%-18u>", 1999999999));
	PRINTF_CHECK_RETURN("<%-18u>", 999999999));
	PRINTF_CHECK_RETURN("<%-18u>", 99999999));
	PRINTF_CHECK_RETURN("<%-18u>", 9999999));
	PRINTF_CHECK_RETURN("<%-18u>", 999999));
	PRINTF_CHECK_RETURN("<%-18u>", 99999));
	PRINTF_CHECK_RETURN("<%-18u>", 9999));
	PRINTF_CHECK_RETURN("<%-18u>", 999));
	PRINTF_CHECK_RETURN("<%-18u>", 99));
	PRINTF_CHECK_RETURN("<%-18u>", 9));
	PRINTF_CHECK_RETURN("<%18u>", UINT_MAX));
	PRINTF_CHECK_RETURN("<%18u>", 1999999999));
	PRINTF_CHECK_RETURN("<%18u>", 999999999));
	PRINTF_CHECK_RETURN("<%18u>", 99999999));
	PRINTF_CHECK_RETURN("<%18u>", 9999999));
	PRINTF_CHECK_RETURN("<%18u>", 999999));
	PRINTF_CHECK_RETURN("<%18u>", 99999));
	PRINTF_CHECK_RETURN("<%18u>", 9999));
	PRINTF_CHECK_RETURN("<%18u>", 999));
	PRINTF_CHECK_RETURN("<%18u>", 99));
	PRINTF_CHECK_RETURN("<%18u>", 9));
	PRINTF_CHECK_RETURN("<%18.u>", UINT_MAX));
	PRINTF_CHECK_RETURN("<%18.0u>", 1999999999));
	PRINTF_CHECK_RETURN("<%18.u>", 999999999));
	PRINTF_CHECK_RETURN("<%18.0u>", 99999999));
	PRINTF_CHECK_RETURN("<%18.u>", 9999999));
	PRINTF_CHECK_RETURN("<%18.0u>", 999999));
	PRINTF_CHECK_RETURN("<%18.u>", 99999));
	PRINTF_CHECK_RETURN("<%18.0u>", 9999));
	PRINTF_CHECK_RETURN("<%18.u>", 999));
	PRINTF_CHECK_RETURN("<%18.0u>", 99));
	PRINTF_CHECK_RETURN("<%18.u>", 9));
	PRINTF_CHECK_RETURN("<%18.6u>", UINT_MAX));
	PRINTF_CHECK_RETURN("<%18.6u>", 1999999999));
	PRINTF_CHECK_RETURN("<%18.6u>", 999999999));
	PRINTF_CHECK_RETURN("<%18.6u>", 99999999));
	PRINTF_CHECK_RETURN("<%18.6u>", 9999999));
	PRINTF_CHECK_RETURN("<%18.6u>", 999999));
	PRINTF_CHECK_RETURN("<%18.6u>", 99999));
	PRINTF_CHECK_RETURN("<%18.6u>", 9999));
	PRINTF_CHECK_RETURN("<%18.6u>", 999));
	PRINTF_CHECK_RETURN("<%18.6u>", 99));
	PRINTF_CHECK_RETURN("<%18.6u>", 9));
	PRINTF_CHECK_RETURN("<%18.*u>", -5, UINT_MAX));
	PRINTF_CHECK_RETURN("<%18.*u>", -5, 1999999999));
	PRINTF_CHECK_RETURN("<%18.*u>", -5, 999999999));
	PRINTF_CHECK_RETURN("<%18.*u>", -5, 99999999));
	PRINTF_CHECK_RETURN("<%18.*u>", -5, 9999999));
	PRINTF_CHECK_RETURN("<%18.*u>", -5, 999999));
	PRINTF_CHECK_RETURN("<%18.*u>", -5, 99999));
	PRINTF_CHECK_RETURN("<%18.*u>", -5, 9999));
	PRINTF_CHECK_RETURN("<%18.*u>", -5, 999));
	PRINTF_CHECK_RETURN("<%18.*u>", -5, 99));
	PRINTF_CHECK_RETURN("<%18.*u>", -5, 9));
	PRINTF_CHECK_RETURN("<%18.*u>", 10, UINT_MAX));
	PRINTF_CHECK_RETURN("<%18.*u>", 10, 1999999999));
	PRINTF_CHECK_RETURN("<%18.*u>", 10, 999999999));
	PRINTF_CHECK_RETURN("<%18.*u>", 10, 99999999));
	PRINTF_CHECK_RETURN("<%18.*u>", 10, 9999999));
	PRINTF_CHECK_RETURN("<%18.*u>", 10, 999999));
	PRINTF_CHECK_RETURN("<%18.*u>", 10, 99999));
	PRINTF_CHECK_RETURN("<%18.*u>", 10, 9999));
	PRINTF_CHECK_RETURN("<%18.*u>", 10, 999));
	PRINTF_CHECK_RETURN("<%18.*u>", 10, 99));
	PRINTF_CHECK_RETURN("<%18.*u>", 10, 9));
	PRINTF_CHECK_RETURN("<%7.*u>", 10, UINT_MAX));
	PRINTF_CHECK_RETURN("<%7.*u>", 10, 1999999999));
	PRINTF_CHECK_RETURN("<%7.*u>", 10, 999999999));
	PRINTF_CHECK_RETURN("<%7.*u>", 10, 99999999));
	PRINTF_CHECK_RETURN("<%7.*u>", 10, 9999999));
	PRINTF_CHECK_RETURN("<%7.*u>", 10, 999999));
	PRINTF_CHECK_RETURN("<%7.*u>", 10, 99999));
	PRINTF_CHECK_RETURN("<%7.*u>", 10, 9999));
	PRINTF_CHECK_RETURN("<%7.*u>", 10, 999));
	PRINTF_CHECK_RETURN("<%7.*u>", 10, 99));
	PRINTF_CHECK_RETURN("<%7.*u>", 10, 9));
	PRINTF_CHECK_RETURN("<%.0u>", 0));
	PRINTF_CHECK_RETURN("<%.0u>", 458));
	PRINTF_CHECK_RETURN("<%30.0u>", 0));
	PRINTF_CHECK_RETURN("<%30u>", 0));
	PRINTF_CHECK_RETURN("<%2u>", 0));
	PRINTF_CHECK_RETURN("<%*.5u>", 1, 1));
	PRINTF_CHECK_RETURN("<%5.*u>", -2, 4));
	PRINTF_CHECK_RETURN("<%30.*u>", -10, 1));
	PRINTF_CHECK_RETURN("<%*.*u>", -10, 10, 10));
	PRINTF_CHECK_RETURN("<%*.*u>", -10, -1, 1));
	PRINTF_CHECK_RETURN("<%10u>", 0));
	PRINTF_CHECK_RETURN("%05u", 0));
	PRINTF_CHECK_RETURN("%05u", -7));
	PRINTF_CHECK_RETURN("%05u", -203));
	PRINTF_CHECK_RETURN("%05u", 1560133635));
	PRINTF_CHECK_RETURN("%0u", -20));
	PRINTF_CHECK_RETURN("%-0u", -20));
	PRINTF_CHECK_RETURN("%000000000000000000u", -20));
	PRINTF_CHECK_RETURN("%0*.*u,%0*.*u,%0*.*u", 4, -2, 8, 4, -2, 88, 4, -2, 888));
	PRINTF_CHECK_RETURN("%0*.*u,%0*.*u,%0*.*u", 4, 0, 8, 4, 0, 88, 4, 0, 888));
	PRINTF_CHECK_RETURN("%0*.*u,%0*.*u,%0*.*u", 4, 2, 8, 4, 2, 88, 4, 2, 888));
	PRINTF_CHECK_RETURN("<%.5u>", 4));
	PRINTF_CHECK_RETURN("<%-0-0-05u>", 4));
	PRINTF_CHECK_RETURN("<%-5u>", 4));
	PRINTF_CHECK_RETURN("%4.*s", -1, "abcdefghl"));
	PRINTF_CHECK_RETURN("%4.*s", -1, "ab"));
	PRINTF_CHECK_RETURN("%4.*i", -1, 0123));
	PRINTF_CHECK_RETURN("%4.*i", -10, 0123));
	PRINTF_CHECK_RETURN("<%5.*i>", -2, 4));
	PRINTF_CHECK_RETURN("%4.*u", -1, 0123));
	PRINTF_CHECK_RETURN("%4.*u", -10, 0123));
	PRINTF_CHECK_RETURN("<%5.*u>", -2, 4));
	PRINTF_CHECK_RETURN("%147.*X", -58, 359303151u));
	PRINTF_CHECK_RETURN("%.*X", -1, 1));
	PRINTF_CHECK_RETURN("%.*X", -1, 4099649006u));
	PRINTF_CHECK_RETURN("%0181.x", -66));
	PRINTF_CHECK_RETURN("%147.*i", -58, 359303151u));
	PRINTF_CHECK_RETURN("%.*i", -1, 1));
	PRINTF_CHECK_RETURN("%.*i", -1, 4099649006u));
	PRINTF_CHECK_RETURN("%0181.i", -66));
	PRINTF_CHECK_RETURN("%147.*u", -58, 359303151u));
	PRINTF_CHECK_RETURN("%.*u", -1, 1));
	PRINTF_CHECK_RETURN("%.*u", -1, 4099649006u));
	PRINTF_CHECK_RETURN("%0181.u", -66));
	PRINTF_CHECK_RETURN(""));
	PRINTF_CHECK_RETURN("<%0*d%17s%p>", 20, -123456789, " HELLO WORLD ", NULL));
	PRINTF_CHECK_RETURN("%s", "easy string"));
	PRINTF_CHECK_RETURN("and another %s!", "easy string"));
	PRINTF_CHECK_RETURN("%c%c%c%c%c%c%c%c", '.', '0', '5', '\0', '	', 'y', 'o', '!'));
	PRINTF_CHECK_RETURN("%c", 0));
	PRINTF_CHECK_RETURN("ints: MIN:%i MAX:%d 0:%i, -1:%d", INT_MIN, INT_MAX, 0, -1));
	PRINTF_CHECK_RETURN(""));
	PRINTF_CHECK_RETURN("\0hey"));
	PRINTF_CHECK_RETURN("🌑 🌒 🌓 %s", "🌔"));
	PRINTF_CHECK_RETURN("%-c", 'c'));
	PRINTF_CHECK_RETURN("<%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%>"));
	PRINTF_CHECK_RETURN("<%1s>", ""));
	PRINTF_CHECK_RETURN("<%s>", ""));
	PRINTF_CHECK_RETURN("<%s>", "abc"));
	PRINTF_CHECK_RETURN("<%s>", NULL));
	PRINTF_CHECK_RETURN("<%1s>", NULL));
	PRINTF_CHECK_RETURN("<%2s>", NULL));
	PRINTF_CHECK_RETURN("<%3s>", NULL));
	PRINTF_CHECK_RETURN("<%4s>", NULL));
	PRINTF_CHECK_RETURN("<%5s>", NULL));
	PRINTF_CHECK_RETURN("<%6s>", NULL));
	PRINTF_CHECK_RETURN("<%7s>", NULL));
	PRINTF_CHECK_RETURN("<%8s>", NULL));
	PRINTF_CHECK_RETURN("<%9s>", NULL));
	PRINTF_CHECK_RETURN("<%-s>", NULL));
	PRINTF_CHECK_RETURN("<%-1s>", NULL));
	PRINTF_CHECK_RETURN("<%-2s>", NULL));
	PRINTF_CHECK_RETURN("<%-3s>", NULL));
	PRINTF_CHECK_RETURN("<%-4s>", NULL));
	PRINTF_CHECK_RETURN("<%-5s>", NULL));
	PRINTF_CHECK_RETURN("<%-6s>", NULL));
	PRINTF_CHECK_RETURN("<%-7s>", NULL));
	PRINTF_CHECK_RETURN("<%-8s>", NULL));
	PRINTF_CHECK_RETURN("<%-9s>", NULL));
	PRINTF_CHECK_RETURN("<%s>", NULL));
	PRINTF_CHECK_RETURN("<%1s>", NULL));
	PRINTF_CHECK_RETURN("<%2s>", NULL));
	PRINTF_CHECK_RETURN("<%3s>", NULL));
	PRINTF_CHECK_RETURN("<%4s>", NULL));
	PRINTF_CHECK_RETURN("<%5s>", NULL));
	PRINTF_CHECK_RETURN("<%6s>", NULL));
	PRINTF_CHECK_RETURN("<%7s>", NULL));
	PRINTF_CHECK_RETURN("<%8s>", NULL));
	PRINTF_CHECK_RETURN("<%9s>", NULL));
	PRINTF_CHECK_RETURN("<%.0s>", NULL));
	PRINTF_CHECK_RETURN("<%.1s>", NULL));
	PRINTF_CHECK_RETURN("<%.2s>", NULL));
	PRINTF_CHECK_RETURN("<%.3s>", NULL));
	PRINTF_CHECK_RETURN("<%.4s>", NULL));
	PRINTF_CHECK_RETURN("<%.5s>", NULL));
	PRINTF_CHECK_RETURN("<%.6s>", NULL));
	PRINTF_CHECK_RETURN("<%.7s>", NULL));
	PRINTF_CHECK_RETURN("<%.8s>", NULL));
	PRINTF_CHECK_RETURN("<%.9s>", NULL));
	PRINTF_CHECK_RETURN("<%-9.0s>", NULL));
	PRINTF_CHECK_RETURN("<%-8.1s>", NULL));
	PRINTF_CHECK_RETURN("<%-7.2s>", NULL));
	PRINTF_CHECK_RETURN("<%-6.3s>", NULL));
	PRINTF_CHECK_RETURN("<%-5.4s>", NULL));
	PRINTF_CHECK_RETURN("<%-4.5s>", NULL));
	PRINTF_CHECK_RETURN("<%-3.6s>", NULL));
	PRINTF_CHECK_RETURN("<%-2.7s>", NULL));
	PRINTF_CHECK_RETURN("<%-1.8s>", NULL));
	PRINTF_CHECK_RETURN("<%-.9s>", NULL));
	PRINTF_CHECK_RETURN("<%9.0s>", NULL));
	PRINTF_CHECK_RETURN("<%8.1s>", NULL));
	PRINTF_CHECK_RETURN("<%7.2s>", NULL));
	PRINTF_CHECK_RETURN("<%6.3s>", NULL));
	PRINTF_CHECK_RETURN("<%5.4s>", NULL));
	PRINTF_CHECK_RETURN("<%4.5s>", NULL));
	PRINTF_CHECK_RETURN("<%3.6s>", NULL));
	PRINTF_CHECK_RETURN("<%2.7s>", NULL));
	PRINTF_CHECK_RETURN("<%1.8s>", NULL));
	PRINTF_CHECK_RETURN("<%.9s>", NULL));
	PRINTF_CHECK_RETURN("<%p>", NULL));
	PRINTF_CHECK_RETURN("<%p>", (void *)i));
	PRINTF_CHECK_RETURN("<%p>", (void *)j));
	PRINTF_CHECK_RETURN("<%p>", (void *)k));
	PRINTF_CHECK_RETURN("<%p>", (void *)l));
	PRINTF_CHECK_RETURN("<%p>", (void *)m));
	PRINTF_CHECK_RETURN("<%p>", (void *)n));
	PRINTF_CHECK_RETURN("<%p>", (void *)o));
	PRINTF_CHECK_RETURN("<%p>", (void *)p));
	PRINTF_CHECK_RETURN("<%p>", (void *)q));
	PRINTF_CHECK_RETURN("<%p>", (void *)(i - j)));
	PRINTF_CHECK_RETURN("<%p>", (void *)(j - k)));
	PRINTF_CHECK_RETURN("<%p>", (void *)(k - l)));
	PRINTF_CHECK_RETURN("<%p>", (void *)(NULL - (void *)(p))));
	PRINTF_CHECK_RETURN("<%p>", (void *)(q - p)));
	PRINTF_CHECK_RETURN("<%p>", (void *)LONG_MAX));
	PRINTF_CHECK_RETURN("<%p>", (void *)99999999999));
	PRINTF_CHECK_RETURN("<%p>", (void *)9999999999));
	PRINTF_CHECK_RETURN("<%p>", (void *)999999999));
	PRINTF_CHECK_RETURN("<%p>", (void *)99999999));
	PRINTF_CHECK_RETURN("<%p>", (void *)9999999));
	PRINTF_CHECK_RETURN("<%p>", (void *)999999));
	PRINTF_CHECK_RETURN("<%p>", (void *)99999));
	PRINTF_CHECK_RETURN("<%p>", (void *)9999));
	PRINTF_CHECK_RETURN("<%p>", (void *)999));
	PRINTF_CHECK_RETURN("<%p>", (void *)99));
	PRINTF_CHECK_RETURN("<%p>", (void *)9));
	PRINTF_CHECK_RETURN("<%p>", (void *)LONG_MIN));
	PRINTF_CHECK_RETURN("<%-8p>", (void *)LONG_MAX));
	PRINTF_CHECK_RETURN("<%-8p>", (void *)99999999999));
	PRINTF_CHECK_RETURN("<%-8p>", (void *)9999999999));
	PRINTF_CHECK_RETURN("<%-8p>", (void *)999999999));
	PRINTF_CHECK_RETURN("<%-8p>", (void *)99999999));
	PRINTF_CHECK_RETURN("<%-8p>", (void *)9999999));
	PRINTF_CHECK_RETURN("<%-8p>", (void *)999999));
	PRINTF_CHECK_RETURN("<%-8p>", (void *)99999));
	PRINTF_CHECK_RETURN("<%-8p>", (void *)9999));
	PRINTF_CHECK_RETURN("<%-8p>", (void *)999));
	PRINTF_CHECK_RETURN("<%-8p>", (void *)99));
	PRINTF_CHECK_RETURN("<%-8p>", (void *)9));
	PRINTF_CHECK_RETURN("<%-8p>", (void *)LONG_MIN));
	PRINTF_CHECK_RETURN("<%8p>", (void *)LONG_MAX));
	PRINTF_CHECK_RETURN("<%8p>", (void *)99999999999));
	PRINTF_CHECK_RETURN("<%8p>", (void *)9999999999));
	PRINTF_CHECK_RETURN("<%8p>", (void *)999999999));
	PRINTF_CHECK_RETURN("<%8p>", (void *)99999999));
	PRINTF_CHECK_RETURN("<%8p>", (void *)9999999));
	PRINTF_CHECK_RETURN("<%8p>", (void *)999999));
	PRINTF_CHECK_RETURN("<%8p>", (void *)99999));
	PRINTF_CHECK_RETURN("<%8p>", (void *)9999));
	PRINTF_CHECK_RETURN("<%8p>", (void *)999));
	PRINTF_CHECK_RETURN("<%8p>", (void *)99));
	PRINTF_CHECK_RETURN("<%8p>", (void *)9));
	PRINTF_CHECK_RETURN("<%8p>", (void *)LONG_MIN));
	PRINTF_CHECK_RETURN("<%19p>", (void *)LONG_MAX));
	PRINTF_CHECK_RETURN("<%19p>", (void *)99999999999));
	PRINTF_CHECK_RETURN("<%19p>", (void *)9999999999));
	PRINTF_CHECK_RETURN("<%19p>", (void *)999999999));
	PRINTF_CHECK_RETURN("<%19p>", (void *)99999999));
	PRINTF_CHECK_RETURN("<%19p>", (void *)9999999));
	PRINTF_CHECK_RETURN("<%19p>", (void *)999999));
	PRINTF_CHECK_RETURN("<%19p>", (void *)99999));
	PRINTF_CHECK_RETURN("<%19p>", (void *)9999));
	PRINTF_CHECK_RETURN("<%19p>", (void *)999));
	PRINTF_CHECK_RETURN("<%19p>", (void *)99));
	PRINTF_CHECK_RETURN("<%19p>", (void *)9));
	PRINTF_CHECK_RETURN("<%*p>", -1, (void *)0));
	PRINTF_CHECK_RETURN("<%19p>", (void *)INTPTR_MIN));
	PRINTF_CHECK_RETURN("<%*p>", 0, (void *)INTPTR_MIN));
	PRINTF_CHECK_RETURN("<%*p>", -1, (void *)INTPTR_MIN));
	PRINTF_CHECK_RETURN("<%*p>", -10, (void *)INTPTR_MIN));
	PRINTF_CHECK_RETURN("<%*p>", -25, (void *)INTPTR_MIN));
	PRINTF_CHECK_RETURN("<%x>", 0));
	PRINTF_CHECK_RETURN("<%x>", 5));
	PRINTF_CHECK_RETURN("<%x>", 10));
	PRINTF_CHECK_RETURN("<%x>", 100));
	PRINTF_CHECK_RETURN("<%x>", (unsigned int)bi));
	PRINTF_CHECK_RETURN("<%x>", (unsigned int)bj));
	PRINTF_CHECK_RETURN("<%x>", (unsigned int)bk));
	PRINTF_CHECK_RETURN("<%x>", (unsigned int)bl));
	PRINTF_CHECK_RETURN("<%x>", (unsigned int)bm));
	PRINTF_CHECK_RETURN("<%x>", (unsigned int)bn));
	PRINTF_CHECK_RETURN("<%x>", (unsigned int)bo));
	PRINTF_CHECK_RETURN("<%x>", (unsigned int)bp));
	PRINTF_CHECK_RETURN("<%x>", (unsigned int)bq));
	PRINTF_CHECK_RETURN("<%x>", (unsigned int)(bi - bj)));
	PRINTF_CHECK_RETURN("<%x>", (unsigned int)(bj - bk)));
	PRINTF_CHECK_RETURN("<%x>", (unsigned int)(bk - bl)));
	PRINTF_CHECK_RETURN("<%x>", (unsigned int)(bq - bp)));
	PRINTF_CHECK_RETURN("<%x>", (unsigned int)LONG_MAX));
	PRINTF_CHECK_RETURN("<%x>", (unsigned int)99999999999));
	PRINTF_CHECK_RETURN("<%x>", (unsigned int)9999999999));
	PRINTF_CHECK_RETURN("<%x>", (unsigned int)999999999));
	PRINTF_CHECK_RETURN("<%x>", (unsigned int)99999999));
	PRINTF_CHECK_RETURN("<%x>", (unsigned int)9999999));
	PRINTF_CHECK_RETURN("<%x>", (unsigned int)999999));
	PRINTF_CHECK_RETURN("<%x>", (unsigned int)99999));
	PRINTF_CHECK_RETURN("<%x>", (unsigned int)9999));
	PRINTF_CHECK_RETURN("<%x>", (unsigned int)999));
	PRINTF_CHECK_RETURN("<%x>", (unsigned int)99));
	PRINTF_CHECK_RETURN("<%x>", (unsigned int)9));
	PRINTF_CHECK_RETURN("<%x>", (unsigned int)LONG_MIN));
	PRINTF_CHECK_RETURN("<%-8x>", (unsigned int)LONG_MAX));
	PRINTF_CHECK_RETURN("<%-8x>", (unsigned int)99999999999));
	PRINTF_CHECK_RETURN("<%-8x>", (unsigned int)9999999999));
	PRINTF_CHECK_RETURN("<%-8x>", 999999999));
	PRINTF_CHECK_RETURN("<%-8x>", 99999999));
	PRINTF_CHECK_RETURN("<%-8x>", 9999999));
	PRINTF_CHECK_RETURN("<%-8x>", 999999));
	PRINTF_CHECK_RETURN("<%-8x>", 99999));
	PRINTF_CHECK_RETURN("<%-8x>", 9999));
	PRINTF_CHECK_RETURN("<%-8x>", 999));
	PRINTF_CHECK_RETURN("<%-8x>", 99));
	PRINTF_CHECK_RETURN("<%-8x>", 9));
	PRINTF_CHECK_RETURN("<%-8x>", (unsigned int)LONG_MIN));
	PRINTF_CHECK_RETURN("<%8x>", (unsigned int)LONG_MAX));
	PRINTF_CHECK_RETURN("<%8x>", (unsigned int)99999999999));
	PRINTF_CHECK_RETURN("<%8x>", (unsigned int)9999999999));
	PRINTF_CHECK_RETURN("<%8x>", 999999999));
	PRINTF_CHECK_RETURN("<%8x>", 99999999));
	PRINTF_CHECK_RETURN("<%8x>", 9999999));
	PRINTF_CHECK_RETURN("<%8x>", 999999));
	PRINTF_CHECK_RETURN("<%8x>", 99999));
	PRINTF_CHECK_RETURN("<%8x>", 9999));
	PRINTF_CHECK_RETURN("<%8x>", 999));
	PRINTF_CHECK_RETURN("<%8x>", 99));
	PRINTF_CHECK_RETURN("<%8x>", 9));
	PRINTF_CHECK_RETURN("<%8x>", (unsigned int)LONG_MIN));
	PRINTF_CHECK_RETURN("<%19X>", (unsigned int)LONG_MAX));
	PRINTF_CHECK_RETURN("<%19X>", (unsigned int)99999999999));
	PRINTF_CHECK_RETURN("<%19X>", (unsigned int)9999999999));
	PRINTF_CHECK_RETURN("<%19X>", 999999999));
	PRINTF_CHECK_RETURN("<%19X>", 99999999));
	PRINTF_CHECK_RETURN("<%19X>", 9999999));
	PRINTF_CHECK_RETURN("<%19X>", 999999));
	PRINTF_CHECK_RETURN("<%19X>", 99999));
	PRINTF_CHECK_RETURN("<%19X>", 9999));
	PRINTF_CHECK_RETURN("<%19X>", 999));
	PRINTF_CHECK_RETURN("<%19X>", 99));
	PRINTF_CHECK_RETURN("<%19X>", 9));
	PRINTF_CHECK_RETURN("<%*X>", 0, (unsigned int)INTPTR_MIN));
	PRINTF_CHECK_RETURN("<%*X>", -1, (unsigned int)INTPTR_MIN));
	PRINTF_CHECK_RETURN("<%*X>", -10, (unsigned int)INTPTR_MIN));
	PRINTF_CHECK_RETURN("<%*X>", -25, (unsigned int)INTPTR_MIN));
	PRINTF_CHECK_RETURN("<%0.20x>", 12345));
	PRINTF_CHECK_RETURN("<%.x>", 7458));
	PRINTF_CHECK_RETURN("<%.0X>", 7458));
	PRINTF_CHECK_RETURN("<%.0X>", 0));
}

void test_all_char()
{
	char c = 0;
	do
		PRINTF_CHECK_RETURN("%*c", 2, c));
	while (c++ < 127);
}

int main(void)
{
	setbuf(stdout, NULL);
	lots_of_tests();
	test_all_char();
#ifdef L
	system("leaks --quiet a.out");
#endif
	return (0);
}
