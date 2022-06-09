#include <stdlib.h>
#include <iostream>
#include <mysql_connection.h>
#include <driver.h>
#include <exception.h>
#include <resultset.h>
#include <statement.h>

//#include <emscripten/emscripten.h>

using namespace sql;
 void showDatabase(){
  Driver *driver;
  Connection *con;
  Statement *stmt;
  ResultSet  *res;

  driver = get_driver_instance();
  con = driver->connect("remotemysql.com","yn7m0SUz0Y","LWRebclM6g");

  if(con->isValid()){
    std::cout << "The connection is valid!" << std::endl;
  }

  stmt = con->createStatement();
  stmt->execute("USE yn7m0SUz0Y");
  res = stmt->executeQuery("SELECT Make, Model, Id, Class, Petrol_Usage FROM TransportTypes;");
  std:: cout << "Make - Model - Id - Class - Petrol Usage" << std::endl;
  while(res->next()){   
    std::cout << res->getString("Make") << " - ";
    std::cout << res->getString("Model") << " - ";
    std::cout << res->getString("Id") << " - ";
    std::cout << res->getString("Class") << " - ";
    std::cout << res->getDouble("Petrol_Usage") << std::endl;
  }
 }
int main(void){
    showDatabase();

  return 0;

}

