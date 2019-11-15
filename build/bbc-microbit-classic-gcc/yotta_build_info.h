#ifndef __YOTTA_BUILD_INFO_H__
#define __YOTTA_BUILD_INFO_H__
// yotta build info, #include YOTTA_BUILD_INFO_HEADER to access
#define YOTTA_BUILD_YEAR 2019 // UTC year
#define YOTTA_BUILD_MONTH 11 // UTC month 1-12
#define YOTTA_BUILD_DAY 15 // UTC day 1-31
#define YOTTA_BUILD_HOUR 9 // UTC hour 0-24
#define YOTTA_BUILD_MINUTE 25 // UTC minute 0-59
#define YOTTA_BUILD_SECOND 39 // UTC second 0-61
#define YOTTA_BUILD_UUID 4cacce0f-abe8-4289-a9f6-3216924affb5 // unique random UUID for each build
#define YOTTA_BUILD_VCS_ID b'6c12657ed61e728960266f8c1e6f20bdefd9e435' // git or mercurial hash
#define YOTTA_BUILD_VCS_CLEAN 0 // evaluates true if the version control system was clean, otherwise false
#define YOTTA_BUILD_VCS_DESCRIPTION b'6c12657' // git describe or mercurial equivalent
#endif // ndef __YOTTA_BUILD_INFO_H__
