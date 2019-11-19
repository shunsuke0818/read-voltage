#ifndef __YOTTA_BUILD_INFO_H__
#define __YOTTA_BUILD_INFO_H__
// yotta build info, #include YOTTA_BUILD_INFO_HEADER to access
#define YOTTA_BUILD_YEAR 2019 // UTC year
#define YOTTA_BUILD_MONTH 11 // UTC month 1-12
#define YOTTA_BUILD_DAY 19 // UTC day 1-31
#define YOTTA_BUILD_HOUR 5 // UTC hour 0-24
#define YOTTA_BUILD_MINUTE 47 // UTC minute 0-59
#define YOTTA_BUILD_SECOND 45 // UTC second 0-61
#define YOTTA_BUILD_UUID 430b6bb7-e9f9-48d3-9d46-aadfe17e6b07 // unique random UUID for each build
#define YOTTA_BUILD_VCS_ID b'7cb887ce450e42ddebe5dcb9b336f2c76c6d8737' // git or mercurial hash
#define YOTTA_BUILD_VCS_CLEAN 0 // evaluates true if the version control system was clean, otherwise false
#define YOTTA_BUILD_VCS_DESCRIPTION b'7cb887c' // git describe or mercurial equivalent
#endif // ndef __YOTTA_BUILD_INFO_H__
