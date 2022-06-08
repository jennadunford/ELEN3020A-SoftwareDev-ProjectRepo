//Put C code here
#include <iostream>
#include "comparisons.h"

using namespace std;

int main (void)
{
      // Create and open a text file
  ofstream MyFile("//wsl.localhost/Ubuntu/home/jennadunford/ELEN3020A-SoftwareDev-ProjectRepo/JavascriptOutputTesting/text.exe");

  // Write to the file
  MyFile << "Trying to get this text file to be created through javascript";

  // Close the file
  MyFile.close();
}
