#ifndef __WSTRING_H
#define __WSTRING_H

#include <windows.h>

///////////////////////////////////////////////////////////////////////////////
//
// copies a single byte string to a unicode string
//
// param:  str  - buffer for single byte string
//         wStr - unicode string
//
// return: success - not null
//         failure - null
//
///////////////////////////////////////////////////////////////////////////////

int MBTWC(LPSTR str, LPWSTR wStr, int size);


///////////////////////////////////////////////////////////////////////////////
//
// copies a unicode string to a single byte string
//
// param:  wStr - unicode string
//         str  - buffer for single byte string
//
// return: success - not null
//         failure - null
//
///////////////////////////////////////////////////////////////////////////////

int WCTMB(LPWSTR wStr, LPSTR str, int size);


///////////////////////////////////////////////////////////////////////////////
//
// allocates memory for a unicode string and copies a single byte string to a 
// unicode string
//
// param:  str    - single byte string
//         strLen - length of str or -1 if str is null terminated
//
// return: success - unicode string (must be deallocated with FreeStr)
//         failure - null
//
///////////////////////////////////////////////////////////////////////////////

PWSTR S2W(PSTR str, int strLen = -1);


///////////////////////////////////////////////////////////////////////////////
//
// allocates memory for a single byte string and copies a unicode string to a 
// single byte string
//
// param:  wStr   - unicode string
//         strLen - length of wStr or -1 if wStr is null terminated
//
// return: success - single byte string (must be deallocated with FreeStr)
//         failure - null
//
///////////////////////////////////////////////////////////////////////////////

PSTR W2S(PWSTR wStr, int strLen = -1);


///////////////////////////////////////////////////////////////////////////////
//
// frees a single byte string
//
// param:  str - single byte string
//
// return: nothing
//
///////////////////////////////////////////////////////////////////////////////

void FreeStr(PSTR str);


///////////////////////////////////////////////////////////////////////////////
//
// frees a unicode string
//
// param:  wStr - unicode string
//
// return: nothing
//
///////////////////////////////////////////////////////////////////////////////

void FreeStr(PWSTR wStr);



#endif


