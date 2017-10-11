#include<iostream>
#include<cmath>

using namespace std;

int mul(int a,int b)
{

  int multiplication;
  multiplication=a*b;
  return multiplication;

}

int main()
{ int a,b;
  cout<<"the value of first digit: ";
  cin>>a;
  cout<<"the value of second digit:";
  cin>>b;

  int result;
  result=mul(a,b);
  cout<<"the result is: "<<result<<endl;
  return 0;
}
