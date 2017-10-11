#include <iostream>
using namespace std;

class Adder {
   public:
      // constructor
      Adder(int i = 0) {
         total = i;
      }

      void calladdNum(int numm){

        addNum(numm);
      }

      // interface to outside world
      /*void addNum(int number) {
         total += number;
      }*/

      // interface to outside world
      int getTotal() {
         return total;
      };

   private:
      // hidden data from outside world
      int total;
      void addNum(int number) {
               total += number;
            }
};

int main() {
   Adder a;

   a.calladdNum(10);
   a.calladdNum(20);
   a.calladdNum(30);

   cout << "Total " << a.getTotal() <<endl;
   return 0;
}
