#include <stdlib.h>
#include <iostream>
#include <mysql_connection.h>
#include <driver.h>
#include <exception.h>
#include <resultset.h>
#include <statement.h>

using namespace sql;
int main(void){
  sql::Driver *driver;
  sql::Connection *con;

  driver = get_driver_instance();
  con = driver->connect("tcp://105.213.169.78","yn7m0SUz0Y","LWRebclM6g");

  return 0;
}