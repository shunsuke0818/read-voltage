#ifndef __YOTTA_BUILD_INFO_H__
#define __YOTTA_BUILD_INFO_H__
// yotta build info, #include YOTTA_BUILD_INFO_HEADER to access
#define YOTTA_BUILD_YEAR 2019 // UTC year
#define YOTTA_BUILD_MONTH 11 // UTC month 1-12
#define YOTTA_BUILD_DAY 17 // UTC day 1-31
#define YOTTA_BUILD_HOUR 4 // UTC hour 0-24
#define YOTTA_BUILD_MINUTE 50 // UTC minute 0-59
#define YOTTA_BUILD_SECOND 25 // UTC second 0-61
#define YOTTA_BUILD_UUID 5daf4cd0-b789-46da-9d9d-89cd1c160f79 // unique random UUID for each build
#define YOTTA_BUILD_VCS_ID b'016af883307093d4d036e11b296744f40c24baf8' // git or mercurial hash
#define YOTTA_BUILD_VCS_CLEAN 0 // evaluates true if the version control system was clean, otherwise false
#define YOTTA_BUILD_VCS_DESCRIPTION b'016af88' // git describe or mercurial equivalent
#endif // ndef __YOTTA_BUILD_INFO_H__
