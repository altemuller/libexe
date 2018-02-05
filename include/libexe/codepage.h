/*
 * Codepage definitions for libexe
 *
 * Copyright (C) 2011-2018, Joachim Metz <joachim.metz@gmail.com>
 *
 * Refer to AUTHORS for acknowledgements.
 *
 * This software is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This software is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this software.  If not, see <http://www.gnu.org/licenses/>.
 */

#if !defined( _LIBEXE_CODEPAGE_H )
#define _LIBEXE_CODEPAGE_H

#include <libexe/types.h>

#if defined( __cplusplus )
extern "C" {
#endif

/* The codepage definitions
 */
enum LIBEXE_CODEPAGES
{
	LIBEXE_CODEPAGE_ASCII				= 20127,

	LIBEXE_CODEPAGE_ISO_8859_1			= 28591,
	LIBEXE_CODEPAGE_ISO_8859_2			= 28592,
	LIBEXE_CODEPAGE_ISO_8859_3			= 28593,
	LIBEXE_CODEPAGE_ISO_8859_4			= 28594,
	LIBEXE_CODEPAGE_ISO_8859_5			= 28595,
	LIBEXE_CODEPAGE_ISO_8859_6			= 28596,
	LIBEXE_CODEPAGE_ISO_8859_7			= 28597,
	LIBEXE_CODEPAGE_ISO_8859_8			= 28598,
	LIBEXE_CODEPAGE_ISO_8859_9			= 28599,
	LIBEXE_CODEPAGE_ISO_8859_10			= 28600,
	LIBEXE_CODEPAGE_ISO_8859_11			= 28601,
	LIBEXE_CODEPAGE_ISO_8859_13			= 28603,
	LIBEXE_CODEPAGE_ISO_8859_14			= 28604,
	LIBEXE_CODEPAGE_ISO_8859_15			= 28605,
	LIBEXE_CODEPAGE_ISO_8859_16			= 28606,

	LIBEXE_CODEPAGE_KOI8_R				= 20866,
	LIBEXE_CODEPAGE_KOI8_U				= 21866,

	LIBEXE_CODEPAGE_WINDOWS_874			= 874,
	LIBEXE_CODEPAGE_WINDOWS_932			= 932,
	LIBEXE_CODEPAGE_WINDOWS_936			= 936,
	LIBEXE_CODEPAGE_WINDOWS_949			= 949,
	LIBEXE_CODEPAGE_WINDOWS_950			= 950,
	LIBEXE_CODEPAGE_WINDOWS_1250			= 1250,
	LIBEXE_CODEPAGE_WINDOWS_1251			= 1251,
	LIBEXE_CODEPAGE_WINDOWS_1252			= 1252,
	LIBEXE_CODEPAGE_WINDOWS_1253			= 1253,
	LIBEXE_CODEPAGE_WINDOWS_1254			= 1254,
	LIBEXE_CODEPAGE_WINDOWS_1255			= 1255,
	LIBEXE_CODEPAGE_WINDOWS_1256			= 1256,
	LIBEXE_CODEPAGE_WINDOWS_1257			= 1257,
	LIBEXE_CODEPAGE_WINDOWS_1258			= 1258
};

#define LIBEXE_CODEPAGE_US_ASCII			LIBEXE_CODEPAGE_ASCII

#define LIBEXE_CODEPAGE_ISO_WESTERN_EUROPEAN		LIBEXE_CODEPAGE_ISO_8859_1
#define LIBEXE_CODEPAGE_ISO_CENTRAL_EUROPEAN		LIBEXE_CODEPAGE_ISO_8859_2
#define LIBEXE_CODEPAGE_ISO_SOUTH_EUROPEAN		LIBEXE_CODEPAGE_ISO_8859_3
#define LIBEXE_CODEPAGE_ISO_NORTH_EUROPEAN		LIBEXE_CODEPAGE_ISO_8859_4
#define LIBEXE_CODEPAGE_ISO_CYRILLIC			LIBEXE_CODEPAGE_ISO_8859_5
#define LIBEXE_CODEPAGE_ISO_ARABIC			LIBEXE_CODEPAGE_ISO_8859_6
#define LIBEXE_CODEPAGE_ISO_GREEK			LIBEXE_CODEPAGE_ISO_8859_7
#define LIBEXE_CODEPAGE_ISO_HEBREW			LIBEXE_CODEPAGE_ISO_8859_8
#define LIBEXE_CODEPAGE_ISO_TURKISH			LIBEXE_CODEPAGE_ISO_8859_9
#define LIBEXE_CODEPAGE_ISO_NORDIC			LIBEXE_CODEPAGE_ISO_8859_10
#define LIBEXE_CODEPAGE_ISO_THAI			LIBEXE_CODEPAGE_ISO_8859_11
#define LIBEXE_CODEPAGE_ISO_BALTIC			LIBEXE_CODEPAGE_ISO_8859_13
#define LIBEXE_CODEPAGE_ISO_CELTIC			LIBEXE_CODEPAGE_ISO_8859_14

#define LIBEXE_CODEPAGE_ISO_LATIN_1			LIBEXE_CODEPAGE_ISO_8859_1
#define LIBEXE_CODEPAGE_ISO_LATIN_2			LIBEXE_CODEPAGE_ISO_8859_2
#define LIBEXE_CODEPAGE_ISO_LATIN_3			LIBEXE_CODEPAGE_ISO_8859_3
#define LIBEXE_CODEPAGE_ISO_LATIN_4			LIBEXE_CODEPAGE_ISO_8859_4
#define LIBEXE_CODEPAGE_ISO_LATIN_5			LIBEXE_CODEPAGE_ISO_8859_9
#define LIBEXE_CODEPAGE_ISO_LATIN_6			LIBEXE_CODEPAGE_ISO_8859_10
#define LIBEXE_CODEPAGE_ISO_LATIN_7			LIBEXE_CODEPAGE_ISO_8859_13
#define LIBEXE_CODEPAGE_ISO_LATIN_8			LIBEXE_CODEPAGE_ISO_8859_14
#define LIBEXE_CODEPAGE_ISO_LATIN_9			LIBEXE_CODEPAGE_ISO_8859_15
#define LIBEXE_CODEPAGE_ISO_LATIN_10			LIBEXE_CODEPAGE_ISO_8859_16

#define LIBEXE_CODEPAGE_KOI8_RUSSIAN			LIBEXE_CODEPAGE_KOI8_R
#define LIBEXE_CODEPAGE_KOI8_UKRAINIAN			LIBEXE_CODEPAGE_KOI8_U

#define LIBEXE_CODEPAGE_WINDOWS_THAI			LIBEXE_CODEPAGE_WINDOWS_874
#define LIBEXE_CODEPAGE_WINDOWS_JAPANESE		LIBEXE_CODEPAGE_WINDOWS_932
#define LIBEXE_CODEPAGE_WINDOWS_CHINESE_SIMPLIFIED	LIBEXE_CODEPAGE_WINDOWS_936
#define LIBEXE_CODEPAGE_WINDOWS_KOREAN			LIBEXE_CODEPAGE_WINDOWS_949
#define LIBEXE_CODEPAGE_WINDOWS_CHINESE_TRADITIONAL	LIBEXE_CODEPAGE_WINDOWS_950
#define LIBEXE_CODEPAGE_WINDOWS_CENTRAL_EUROPEAN	LIBEXE_CODEPAGE_WINDOWS_1250
#define LIBEXE_CODEPAGE_WINDOWS_CYRILLIC		LIBEXE_CODEPAGE_WINDOWS_1251
#define LIBEXE_CODEPAGE_WINDOWS_WESTERN_EUROPEAN	LIBEXE_CODEPAGE_WINDOWS_1252
#define LIBEXE_CODEPAGE_WINDOWS_GREEK			LIBEXE_CODEPAGE_WINDOWS_1253
#define LIBEXE_CODEPAGE_WINDOWS_TURKISH			LIBEXE_CODEPAGE_WINDOWS_1254
#define LIBEXE_CODEPAGE_WINDOWS_HEBREW			LIBEXE_CODEPAGE_WINDOWS_1255
#define LIBEXE_CODEPAGE_WINDOWS_ARABIC			LIBEXE_CODEPAGE_WINDOWS_1256
#define LIBEXE_CODEPAGE_WINDOWS_BALTIC			LIBEXE_CODEPAGE_WINDOWS_1257
#define LIBEXE_CODEPAGE_WINDOWS_VIETNAMESE		LIBEXE_CODEPAGE_WINDOWS_1258

#if defined( __cplusplus )
}
#endif

#endif /* !defined( _LIBEXE_CODEPAGE_H ) */

