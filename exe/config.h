/*
**
**  Hack header so that isql for UnixODBC can be built under Windows.
**  When running isql a DSN is required.
**  When running isql a `-v` flag is recommended, e.g. to see errors on connect failure.
**
**  Windows MVSC (using what ever is in the path, 32-bit or 64-bit):
**
**      cl isql.c odbc32.lib
**
**  Windows gcc (MingW32 and also w64-mingw32):
**
**      gcc -I. -o isql isql.c -lodbc32
**
**  Linux/Unix gcc (assuming UnixODBC in default system location):
**
**      gcc -I. -o isql isql.c -lodbc
**
**  Linux/Unix with Ingres CLI
**
**      sh odbccc.sh isql.c
*/

#include <windows.h>

#define VERSION "?"
