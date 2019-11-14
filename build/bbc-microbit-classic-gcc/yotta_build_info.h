#ifndef __YOTTA_BUILD_INFO_H__
#define __YOTTA_BUILD_INFO_H__
// yotta build info, #include YOTTA_BUILD_INFO_HEADER to access
#define YOTTA_BUILD_YEAR 2019 // UTC year
#define YOTTA_BUILD_MONTH 11 // UTC month 1-12
#define YOTTA_BUILD_DAY 14 // UTC day 1-31
#define YOTTA_BUILD_HOUR 4 // UTC hour 0-24
#define YOTTA_BUILD_MINUTE 11 // UTC minute 0-59
#define YOTTA_BUILD_SECOND 7 // UTC second 0-61
#define YOTTA_BUILD_UUID 2d8a010c-4aac-4a59-8651-727d7c3da4b8 // unique random UUID for each build
#define YOTTA_BUILD_VCS_ID b'849d1dd7622b0034860f35496593f0a073378a42' // git or mercurial hash
#define YOTTA_BUILD_VCS_CLEAN 0 // evaluates true if the version control system was clean, otherwise false
#define YOTTA_BUILD_VCS_DESCRIPTION b'849d1dd' // git describe or mercurial equivalent
#endif // ndef __YOTTA_BUILD_INFO_H__
