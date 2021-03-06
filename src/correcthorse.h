/* correcthorse - a passphrase generator inspired by http://xkcd.com/936/
 *
 * Copyright (c) 2012-2013 Robin Martinjak
 *
 * This work is free. You can redistribute it and/or modify it under the
 * terms of the Do What The Fuck You Want To Public License, Version 2,
 * as published by Sam Hocevar. See the COPYING file for more details.
 */

#ifndef CORRECTHORSE_H
#define CORRECTHORSE_H

#define _POSIX_C_SOURCE 2
#define _XOPEN_SOURCE 500

#define WORDS_MAX 10
#define CHARS_MAX 1024

#define CHARS_MIN_DEFAULT 12
#define WORDS_MIN_DEFAULT 4

#define UWORDS_MAX WORDS_MIN_DEFAULT

#define WLISTS_MAX 10
#define WORDLIST_DEFAULT "english"

#ifndef WORDLIST_DIR
#define WORDLIST_DIR "/usr/share/correcthorse"
#endif

#define STR1(x) # x
#define STR(x) STR1(x)

#endif
