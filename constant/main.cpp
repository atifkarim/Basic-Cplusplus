#include <iostream>
using namespace std;

int main() {
    const int  LENGTH = 10;  //you can add const before int from this to next 2 lines
    const int  WIDTH  = 5;
    const char NEWLINE = '\n';
    float area;

   area = LENGTH * WIDTH;
   cout << area;
   cout << NEWLINE;
   return 0;
}
