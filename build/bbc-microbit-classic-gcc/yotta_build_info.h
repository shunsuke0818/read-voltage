#ifndef __YOTTA_BUILD_INFO_H__
#define __YOTTA_BUILD_INFO_H__
// yotta build info, #include YOTTA_BUILD_INFO_HEADER to access
#define YOTTA_BUILD_YEAR 2019 // UTC year
#define YOTTA_BUILD_MONTH 11 // UTC month 1-12
#define YOTTA_BUILD_DAY 28 // UTC day 1-31
#define YOTTA_BUILD_HOUR 4 // UTC hour 0-24
#define YOTTA_BUILD_MINUTE 31 // UTC minute 0-59
#define YOTTA_BUILD_SECOND 12 // UTC second 0-61
#define YOTTA_BUILD_UUID f3e4da84-8b5a-4f14-9177-686ab50a8e3a // unique random UUID for each build
#define YOTTA_BUILD_VCS_ID b'd98b22e8334624a66e8aa4de19b5a34f9b621eb8' // git or mercurial hash
#define YOTTA_BUILD_VCS_CLEAN 0 // evaluates true if the version control system was clean, otherwise false
#define YOTTA_BUILD_VCS_DESCRIPTION b'd98b22e' // git describe or mercurial equivalent
#endif // ndef __YOTTA_BUILD_INFO_H__
