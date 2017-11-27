#include <iostream>
#include <fstream>
//#include"robot_communication/test_coordinate.h"

using namespace std;

int main()
{
  ofstream outputFile;
//robot_communication::tes_coordinate coordinate;
	
    int x,y;
    cout<<"enter the value of x is: "<<endl;
    cin>>x;
    cout<<"enter the value of y is: "<<endl;
    cin>>y;

if(x==2 && y==3)
{outputFile.open("program3data.txt");
    outputFile<<"MD"<<endl;
    outputFile<<"Atif"<<endl;
}
else if(x==5 && y==4)
{outputFile.open("program3data.txt");
    outputFile<<"Bin"<<endl;
    outputFile<<"Karim"<<endl;

}
else{
    outputFile<<"something is wrong!!"<<endl;
}

outputFile.close();
cout << "Done!\n";

return 0;
}
