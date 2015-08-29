#pragma once
#include "Windows.h"

namespace stub
{
  typedef DWORD pointer_t;
  // todo(azerg) redesign for x64 & x86 etc. required
  typedef struct STUB_DATA_
  {
    pointer_t pLoadLibrary; // <-- IAT should point here in Alpha
    pointer_t pGetProcAddress;
    pointer_t pRtlDecompressBuffer;
    DWORD unused_iatnull_1;
    DWORD dwImageBase;
    DWORD dwOriginalEP;
    DWORD dwOriIAT;
    DWORD dwOriginalIVA;        //Original Virtual Address Of Import
    DWORD dwOriginalIS;         //Original Size Of Import
  }STUB_DATA, *PSTUB_DATA;

  #define STUB_IAT_SIZE 16
} // namespace stub