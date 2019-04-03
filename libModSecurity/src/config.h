#pragma once

#ifdef _MSC_VER
#define strncasecmp _strnicmp
#define strcasecmp _stricmp
#endif

#define YY_NO_UNISTD_H 1
#define _CRT_SECURE_NO_WARNINGS 1

#define isatty _isatty

#define strdup _strdup
#define fileno _fileno
#define strdup _strdup

