/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   therbret_main_test_printf.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: therbret <therbret@gmx.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/02 17:20:03 by therbret          #+#    #+#             */
/*   Updated: 2022/02/04 18:08:47 by therbret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** **

		SUCH TESTS.
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
            #include <limits.h>//+/++++ooossssyyhhhhhhdhdddmmmmmmmmmmmmmmNmmmmddhs:
           #include <stdlib.h>//+++//+/++oossssyyyhhhhddddddddmmmmmmmmmmmmmNmmmddhh.
           //good doggo, fetching headers like a good doggo \ddmmmmmmmmmmmmmNmmmmmdh.

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
	PRINTF_CHECK_RETURN("ints: MIN:%i MAX:%d 0:%i, -1:%d", INT_MIN, INT_MAX, 0, -1));
	PRINTF_CHECK_RETURN(""));
	PRINTF_CHECK_RETURN("\0a little bit of trolling"));
	PRINTF_CHECK_RETURN("%s", "\0a little bit of trolling"));
	PRINTF_CHECK_RETURN("🌑 🌒 🌓 %s", "🌔"));
	PRINTF_CHECK_RETURN("<%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%>"));
	PRINTF_CHECK_RETURN("<%s>", NULL));
	PRINTF_CHECK_RETURN("<%p>", NULL));
	PRINTF_CHECK_RETURN("<%x>", 0)); //x
	PRINTF_CHECK_RETURN("<%x>", 5));
	PRINTF_CHECK_RETURN("<%x>", 10));
	PRINTF_CHECK_RETURN("<%x>", 100));
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
        PRINTF_CHECK_RETURN("<%x>", (unsigned int)-99999999999));
        PRINTF_CHECK_RETURN("<%x>", (unsigned int)-9999999999));
        PRINTF_CHECK_RETURN("<%x>", (unsigned int)-999999999));
        PRINTF_CHECK_RETURN("<%x>", (unsigned int)-99999999));
        PRINTF_CHECK_RETURN("<%x>", (unsigned int)-9999999));
        PRINTF_CHECK_RETURN("<%x>", (unsigned int)-999999));
        PRINTF_CHECK_RETURN("<%x>", (unsigned int)-99999));
        PRINTF_CHECK_RETURN("<%x>", (unsigned int)-9999));
        PRINTF_CHECK_RETURN("<%x>", (unsigned int)-999));
        PRINTF_CHECK_RETURN("<%x>", (unsigned int)-99));
        PRINTF_CHECK_RETURN("<%x>", (unsigned int)-9));
	PRINTF_CHECK_RETURN("<%x>", (unsigned int)LONG_MIN));
	PRINTF_CHECK_RETURN("<%X>", 0)); //X
	PRINTF_CHECK_RETURN("<%X>", 5));
	PRINTF_CHECK_RETURN("<%X>", 10));
	PRINTF_CHECK_RETURN("<%X>", 100));
	PRINTF_CHECK_RETURN("<%X>", (unsigned int)LONG_MAX));
        PRINTF_CHECK_RETURN("<%X>", (unsigned int)99999999999));
        PRINTF_CHECK_RETURN("<%X>", (unsigned int)9999999999));
        PRINTF_CHECK_RETURN("<%X>", (unsigned int)999999999));
        PRINTF_CHECK_RETURN("<%X>", (unsigned int)99999999));
        PRINTF_CHECK_RETURN("<%X>", (unsigned int)9999999));
        PRINTF_CHECK_RETURN("<%X>", (unsigned int)999999));
        PRINTF_CHECK_RETURN("<%X>", (unsigned int)99999));
        PRINTF_CHECK_RETURN("<%X>", (unsigned int)9999));
        PRINTF_CHECK_RETURN("<%X>", (unsigned int)999));
        PRINTF_CHECK_RETURN("<%X>", (unsigned int)99));
        PRINTF_CHECK_RETURN("<%X>", (unsigned int)9));
        PRINTF_CHECK_RETURN("<%X>", (unsigned int)-99999999999));
        PRINTF_CHECK_RETURN("<%X>", (unsigned int)-9999999999));
        PRINTF_CHECK_RETURN("<%X>", (unsigned int)-999999999));
        PRINTF_CHECK_RETURN("<%X>", (unsigned int)-99999999));
        PRINTF_CHECK_RETURN("<%X>", (unsigned int)-9999999));
        PRINTF_CHECK_RETURN("<%X>", (unsigned int)-999999));
        PRINTF_CHECK_RETURN("<%X>", (unsigned int)-99999));
        PRINTF_CHECK_RETURN("<%X>", (unsigned int)-9999));
        PRINTF_CHECK_RETURN("<%X>", (unsigned int)-999));
        PRINTF_CHECK_RETURN("<%X>", (unsigned int)-99));
        PRINTF_CHECK_RETURN("<%X>", (unsigned int)-9));
        PRINTF_CHECK_RETURN("<%X>", (unsigned int)LONG_MIN));
}

void test_all_char()
{
	unsigned int	test_number = 0;
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
