#include <iostream>
#include<string>
using namespace std;

class printData {
   public:
      void print(int i) {
        cout << "Printing int: " << i << endl;
      }
      void print(double  f) {
        cout << "Printing float: " << f << endl;
      }
      void print(string m){
        cout << "Printing character: " << m << endl;
      }
};
/*int input1(){
  int h;
  cin>>h;
  return h;
}*/

float input(){
  float h;
  cin>>h;
  return h;
}
/*string mystr(){
  string mystr;
  cin.ignore();
  getline(cin,mystr);
  return mystr;
 }*/



int main(void) {
   printData pd;
    int i;
    string a;
   // Call print to print integer
   //pd.print(input1());
   cin>>i;
   pd.print(i);

   // Call print to print float
   pd.print(input());

   // Call print to print character
   //pd.print("Hello C++");

  // cin.ignore();

     while (a.compare("e")!=0){
       cin.ignore();

       cout<<"write your name";
cin.ignore();
     //getline(cin,a);
   //  cin.ignore();
     getline(cin,a);

      pd.print(a);
      //cin.ignore();

      //cin.ignore();
   }
  ;



   return 0;
}
