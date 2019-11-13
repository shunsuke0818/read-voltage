#ifndef __YOTTA_BUILD_INFO_H__
#define __YOTTA_BUILD_INFO_H__
// yotta build info, #include YOTTA_BUILD_INFO_HEADER to access
#define YOTTA_BUILD_YEAR 2019 // UTC year
#define YOTTA_BUILD_MONTH 11 // UTC month 1-12
#define YOTTA_BUILD_DAY 13 // UTC day 1-31
#define YOTTA_BUILD_HOUR 3 // UTC hour 0-24
#define YOTTA_BUILD_MINUTE 56 // UTC minute 0-59
#define YOTTA_BUILD_SECOND 36 // UTC second 0-61
#define YOTTA_BUILD_UUID 389e4d51-a77c-4b94-8c15-4eae3218e193 // unique random UUID for each build
#define YOTTA_BUILD_VCS_ID b'69d590a29ce271b3c111929c5691f9be9b90a962' // git or mercurial hash
#define YOTTA_BUILD_VCS_CLEAN 0 // evaluates true if the version control system was clean, otherwise false
#define YOTTA_BUILD_VCS_DESCRIPTION b'69d590a' // git describe or mercurial equivalent
#endif // ndef __YOTTA_BUILD_INFO_H__
