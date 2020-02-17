#include <iostream>
#include <fstream>
#include <clocale>                                   
#include "complex.h"

using namespace std;

int main() {
  setlocale(LC_CTYPE, "Russian");

 Point c0(1 , 2);              
 c0.output();

  system("pause");
  return 0;                                         
}
