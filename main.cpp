//Put C code here
#include <iostream>
#include "comparisons.h"
#include<SQLAPI.h>  

using namespace std;

int main (void)
{
 // create connection object to connect to database
    SAConnection con;
    try
    {
        // connect to database
        // in this example, it is Oracle,
        // but can also be Sybase, Informix, DB2
        // SQLServer, InterBase, SQLBase and ODBC
        con.Connect ("yn7m0SUz0Y",    // database name
                     "yn7m0SUz0Y",  // user name
                     "LWRebclM6g",  // password
                     SQLServer); //Oracle Client
        printf("We are connected!\n");
 
        // Disconnect is optional
        // autodisconnect will occur in destructor if needed
        con.Disconnect();
        printf("We are disconnected!\n");
    }
 
    catch(SAException &amp; x)
    {
        // SAConnection::Rollback()
        // can also throw an exception
        // (if a network error for example),
        // we will be ready
        try
        {
            // on error rollback changes
            con.Rollback ();
        }
        catch(SAException &amp;)
        {
        }
        // print error message
        printf("%s\n", (const char*)x.ErrText());
    }
    return 0;
}
