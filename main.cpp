//Put C code here
#include <iostream>
#include "comparisons.h"
#include "EMSC_prototyping/SQL/mysql/SQLAPI.h"

using namespace std;

int main (void)
{
 // create connection object to connect to database
SAConnection conn;         //initializes a new SAConnection object

    try 

    {

       conn.Connect(("yn7m0SUz0Y"),("yn7m0SUz0Y"),("LWRebclM6g"), SA_MySQL_Client); //method to connection with data source

       cout << "We are connected!\n";


       conn.Disconnect();

       cout << "We are disconnected!\n";   

    }   

    catch (SAException& x) 

    {

        conn.Rollback();

        cout << "\n" << x.ErrText().GetMultiByteChars();   

    }   

    return 0;
}
