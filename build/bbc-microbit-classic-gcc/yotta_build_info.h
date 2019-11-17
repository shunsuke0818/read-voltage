#ifndef __YOTTA_BUILD_INFO_H__
#define __YOTTA_BUILD_INFO_H__
// yotta build info, #include YOTTA_BUILD_INFO_HEADER to access
#define YOTTA_BUILD_YEAR 2019 // UTC year
#define YOTTA_BUILD_MONTH 11 // UTC month 1-12
#define YOTTA_BUILD_DAY 17 // UTC day 1-31
#define YOTTA_BUILD_HOUR 13 // UTC hour 0-24
#define YOTTA_BUILD_MINUTE 30 // UTC minute 0-59
#define YOTTA_BUILD_SECOND 45 // UTC second 0-61
#define YOTTA_BUILD_UUID b4a44b2d-af53-4288-be49-8a0f0814930b // unique random UUID for each build
#define YOTTA_BUILD_VCS_ID b'8d1e9c8cf22df2e1dec576480d0908959935896d' // git or mercurial hash
#define YOTTA_BUILD_VCS_CLEAN 0 // evaluates true if the version control system was clean, otherwise false
#define YOTTA_BUILD_VCS_DESCRIPTION b'8d1e9c8' // git describe or mercurial equivalent
#endif // ndef __YOTTA_BUILD_INFO_H__
