isql under Windows
==================

Quick hack to allow isql to be built/ran under Windows

Does NOT rely on Cygwin, can be used with MSVC or mingw32/msys2. Builds 32-bit or 64-bit

See samples directory, `config.h`.

`isql` has a number of undocumented (in the help output) options. Of note:

  * `-v` - verbose, needed to make sense of any error condition. E.g. connection errors have no information unless -v is specified.
  * `-3` use ODBC3 calls
  * `-k` connect using a connection string (default is a dsn)

Examples
--------

DSN

    isql.exe -3 v mydsn
    isql.exe -3 v mydsn username password

Connection string remote

    isql.exe -3 -k -v "Driver={Ingres CS};Server=@servername,II[username,password];Database=iidbdb"

Connection string local (password no needed for osauth)

    isql.exe -3 -k -v "Driver={Ingres II};Server=(local);Database=iidbdb"
