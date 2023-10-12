/* SPDX-License-Identifier: GPL-2.0-or-later */
#ifndef BOTPADV3_H
#define BOTPADV3_H

#include "quantum.h"

#define LAYOUT( \
	K000, K001, K002, \
	K100, K101, K102, \
	K200, K201, K202, \
	K300 \
) { \
	{ K000,  K001,  K002 }, \
	{ K100,  K101,  K102 }, \
	{ K200,  K201,  K202 }, \
	{ K300 }\
}

#endif
