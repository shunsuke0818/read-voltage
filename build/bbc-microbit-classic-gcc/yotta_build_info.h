#ifndef __YOTTA_BUILD_INFO_H__
#define __YOTTA_BUILD_INFO_H__
// yotta build info, #include YOTTA_BUILD_INFO_HEADER to access
#define YOTTA_BUILD_YEAR 2019 // UTC year
#define YOTTA_BUILD_MONTH 11 // UTC month 1-12
#define YOTTA_BUILD_DAY 15 // UTC day 1-31
#define YOTTA_BUILD_HOUR 8 // UTC hour 0-24
#define YOTTA_BUILD_MINUTE 43 // UTC minute 0-59
#define YOTTA_BUILD_SECOND 36 // UTC second 0-61
#define YOTTA_BUILD_UUID a5722855-f83b-45f4-80cd-b3ad5fe0ef5f // unique random UUID for each build
#define YOTTA_BUILD_VCS_ID b'd507e5a3a4daaf76c055ee5b6e0edd29c4706894' // git or mercurial hash
#define YOTTA_BUILD_VCS_CLEAN 0 // evaluates true if the version control system was clean, otherwise false
#define YOTTA_BUILD_VCS_DESCRIPTION b'd507e5a' // git describe or mercurial equivalent
#endif // ndef __YOTTA_BUILD_INFO_H__
