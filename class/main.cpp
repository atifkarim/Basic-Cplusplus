#include <iostream>
#include <string>
using namespace std;

class Box {
   public:
      double length;   // Length of a box
      double breadth;  // Breadth of a box
      double height;   // Height of a box
      //double volume;
      double volume(){
      return height * length * breadth;}
};

int main() {
   Box Box1;
   Box Box2;// Declare Box1 of type Box
           // Declare Box2 of type Box
      // Store the volume of a box here

   //double length;   // oxLength of a box
  // double breadth;  // Breadth of a box
   //double height;   // Height of a box

   //cin>>length;
   //cin>>breadth;
   //cin>>height;
   cout<<"the h,l,b of box1 is\n";
   cin>>Box1.height;
   cin>>Box1.length;
   cin>>Box1.breadth;


 cout << "Volume of Box1 : " << Box1.volume();

 cout<<"the h,l,b of box2 is\n";
   cin>>Box2.height;
   cin>>Box2.length;
   cin>>Box2.breadth;


   /*  // box 1 specification
   Box1.height = 5.0;
   Box1.length = 6.0;
   Box1.breadth = 7.0;

   // box 2 specification
   Box2.height = 10.0;
   Box2.length = 12.0;
   Box2.breadth = 13.0;
   */
   // volume of box 1
  // volume = Box1.height * Box1.length * Box1.breadth;



  //  volume of box 2
  //volume = Box2.height * Box2.length * Box2.breadth;
   cout << "Volume of Box2 : " << Box2.volume();
   return 0;
}
