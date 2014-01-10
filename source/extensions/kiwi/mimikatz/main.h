#ifndef _METERPRETER_SOURCE_EXTENSION_KIWI_KIWI_H
#define _METERPRETER_SOURCE_EXTENSION_KIWI_KIWI_H

#include "../../common/common.h"

#define TLV_TYPE_EXTENSION_KIWI 0

#define KIWI_PWD_ID_SEK_ALLPASS    ((UINT)0)
#define KIWI_PWD_ID_SEK_WDIGEST    ((UINT)1)
#define KIWI_PWD_ID_SEK_MSV        ((UINT)2)
#define KIWI_PWD_ID_SEK_KERBEROS   ((UINT)3)
#define KIWI_PWD_ID_SEK_TSPKG      ((UINT)4)
#define KIWI_PWD_ID_SEK_LIVESSP    ((UINT)5)
#define KIWI_PWD_ID_SEK_SSP        ((UINT)6)
#define KIWI_PWD_ID_SEK_TICKETS    ((UINT)7)
#define KIWI_PWD_ID_SEK_DPAPI      ((UINT)8)

#define TLV_TYPE_KIWI_PWD_ID          MAKE_CUSTOM_TLV(TLV_META_TYPE_UINT,   TLV_TYPE_EXTENSION_KIWI, TLV_EXTENSIONS + 1)
#define TLV_TYPE_KIWI_PWD_RESULT      MAKE_CUSTOM_TLV(TLV_META_TYPE_GROUP,  TLV_TYPE_EXTENSION_KIWI, TLV_EXTENSIONS + 2)
#define TLV_TYPE_KIWI_PWD_USERNAME    MAKE_CUSTOM_TLV(TLV_META_TYPE_STRING, TLV_TYPE_EXTENSION_KIWI, TLV_EXTENSIONS + 3)
#define TLV_TYPE_KIWI_PWD_DOMAIN      MAKE_CUSTOM_TLV(TLV_META_TYPE_STRING, TLV_TYPE_EXTENSION_KIWI, TLV_EXTENSIONS + 4)
#define TLV_TYPE_KIWI_PWD_PASSWORD    MAKE_CUSTOM_TLV(TLV_META_TYPE_STRING, TLV_TYPE_EXTENSION_KIWI, TLV_EXTENSIONS + 5)
#define TLV_TYPE_KIWI_PWD_AUTH_HI     MAKE_CUSTOM_TLV(TLV_META_TYPE_UINT,   TLV_TYPE_EXTENSION_KIWI, TLV_EXTENSIONS + 6)
#define TLV_TYPE_KIWI_PWD_AUTH_LO     MAKE_CUSTOM_TLV(TLV_META_TYPE_UINT,   TLV_TYPE_EXTENSION_KIWI, TLV_EXTENSIONS + 7)
#define TLV_TYPE_KIWI_PWD_LMHASH      MAKE_CUSTOM_TLV(TLV_META_TYPE_STRING, TLV_TYPE_EXTENSION_KIWI, TLV_EXTENSIONS + 8)
#define TLV_TYPE_KIWI_PWD_NTLMHASH    MAKE_CUSTOM_TLV(TLV_META_TYPE_STRING, TLV_TYPE_EXTENSION_KIWI, TLV_EXTENSIONS + 9)

#define TLV_TYPE_KIWI_GOLD_USER       MAKE_CUSTOM_TLV(TLV_META_TYPE_STRING, TLV_TYPE_EXTENSION_KIWI, TLV_EXTENSIONS + 10)
#define TLV_TYPE_KIWI_GOLD_DOMAIN     MAKE_CUSTOM_TLV(TLV_META_TYPE_STRING, TLV_TYPE_EXTENSION_KIWI, TLV_EXTENSIONS + 11)
#define TLV_TYPE_KIWI_GOLD_SID        MAKE_CUSTOM_TLV(TLV_META_TYPE_STRING, TLV_TYPE_EXTENSION_KIWI, TLV_EXTENSIONS + 12)
#define TLV_TYPE_KIWI_GOLD_TGT        MAKE_CUSTOM_TLV(TLV_META_TYPE_STRING, TLV_TYPE_EXTENSION_KIWI, TLV_EXTENSIONS + 13)
#define TLV_TYPE_KIWI_GOLD_TICKET     MAKE_CUSTOM_TLV(TLV_META_TYPE_RAW,    TLV_TYPE_EXTENSION_KIWI, TLV_EXTENSIONS + 14)

#endif