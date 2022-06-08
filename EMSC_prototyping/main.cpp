//Put C code here
#include <stdio.h>
#include <emscripten/emscripten.h>
#include <iostream>

using namespace std;

int main (void)
{
//cout << "The c++ code is here\n";
}

// EMSCRIPTEN_KEEPALIVE int addingTwoNumbers(int a, int b){
//   cout << (a+b);
//   return(a + b);
// }

#ifdef __cplusplus
extern "C" {
#endif

 EMSCRIPTEN_KEEPALIVE int addingTwoNumbers(int a, int b){
 return (a+b);
 }

#ifdef __cplusplus
}
#endif