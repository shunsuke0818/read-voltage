#ifndef __YOTTA_BUILD_INFO_H__
#define __YOTTA_BUILD_INFO_H__
// yotta build info, #include YOTTA_BUILD_INFO_HEADER to access
#define YOTTA_BUILD_YEAR 2019 // UTC year
#define YOTTA_BUILD_MONTH 11 // UTC month 1-12
#define YOTTA_BUILD_DAY 15 // UTC day 1-31
#define YOTTA_BUILD_HOUR 8 // UTC hour 0-24
#define YOTTA_BUILD_MINUTE 53 // UTC minute 0-59
#define YOTTA_BUILD_SECOND 4 // UTC second 0-61
#define YOTTA_BUILD_UUID 94fa1e23-b31e-45bf-b5cc-0131c46702bc // unique random UUID for each build
#define YOTTA_BUILD_VCS_ID b'5d78dbf8f254fad69c01b56a99a1b3a6678f7eb1' // git or mercurial hash
#define YOTTA_BUILD_VCS_CLEAN 0 // evaluates true if the version control system was clean, otherwise false
#define YOTTA_BUILD_VCS_DESCRIPTION b'5d78dbf' // git describe or mercurial equivalent
#endif // ndef __YOTTA_BUILD_INFO_H__
