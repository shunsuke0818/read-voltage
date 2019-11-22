#ifndef __YOTTA_BUILD_INFO_H__
#define __YOTTA_BUILD_INFO_H__
// yotta build info, #include YOTTA_BUILD_INFO_HEADER to access
#define YOTTA_BUILD_YEAR 2019 // UTC year
#define YOTTA_BUILD_MONTH 11 // UTC month 1-12
#define YOTTA_BUILD_DAY 22 // UTC day 1-31
#define YOTTA_BUILD_HOUR 5 // UTC hour 0-24
#define YOTTA_BUILD_MINUTE 42 // UTC minute 0-59
#define YOTTA_BUILD_SECOND 25 // UTC second 0-61
#define YOTTA_BUILD_UUID f1687ab6-50c2-4764-b20d-19bf5ea209a5 // unique random UUID for each build
#define YOTTA_BUILD_VCS_ID b'7c485225bb10210e323afd4c211130031a6c824f' // git or mercurial hash
#define YOTTA_BUILD_VCS_CLEAN 0 // evaluates true if the version control system was clean, otherwise false
#define YOTTA_BUILD_VCS_DESCRIPTION b'7c48522' // git describe or mercurial equivalent
#endif // ndef __YOTTA_BUILD_INFO_H__
