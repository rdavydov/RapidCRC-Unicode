#include "globals.h"

HINSTANCE g_hInstance;
PROGRAM_OPTIONS g_program_options;
PROGRAM_STATUS g_pstatus;
CRITICAL_SECTION thread_fileinfo_crit;
TCHAR *g_hash_names[] = { TEXT("CRC"), TEXT("MD5"), TEXT("ED2K"), TEXT("SHA1"), TEXT("SHA256"), TEXT("SHA512") };