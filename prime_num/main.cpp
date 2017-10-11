#include <cstdlib>
#include <iostream>

using namespace std;

int main()
{
    int number;


   cout <<"Enter an integer:";
   cin>> number;
for(int i=2; i < number; i++)

 if (number%i==0)
 cout << "number is not prime" << endl;

 else
 if(number%i!=0)
  cout << "number is prime" << endl;

    system("PAUSE");
    return (0);
}
