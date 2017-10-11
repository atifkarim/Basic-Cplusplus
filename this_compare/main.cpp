#include<iostream>
using namespace std;

class Volume{
      protected:
         int width;
         int height;
         int length;
         int a,b,c;
         //int perimeter;

      public:
         void setWidth(int w) {
            width = w;
         }
         void setHeight(int h) {
            height = h;
         }
         void setLength(int l) {
            length = l;
         }
        void setA(int a1) {
            a = a1;
         }
         void setB(int b1) {
            b = b1;
         }
         void setC(int c1) {
            c = c1;
         }
         double Volume() {
            return length * width * height;
         }
         int compare(Box box) {
            return this->Volume() > box.Volume();
         }


};

class Volu: public Volume {
   public:
      int getVolume1() {
         return (width * height*length);
      };
      int getVolume2() {
         return (a*b*c);
      };
};



int input(){
  int h;
  cin>>h;
  return h;
}
int main(void) {
   Volu Box1,Box2;


   cout<<"the width of Box1 is: ";
   Box1.setWidth(input());
   cout<<"the height of Box1 is: ";
   Box1.setHeight(input());
   cout<<"the length of Box1 is: ";
   Box1.setLength(input());
   cout<<"the side1 of Box2 is: ";
   Box2.setA(input());
   cout<<"the side2 of Box2 is: ";
   Box2.setB(input());
   cout<<"the side3 of Box2 is: ";
   Box2.setC(input());


   // Print the area of the object.
   cout << "Total volume of Box1 is: " << Box1.getVolume1() << endl;
   cout<<"Total volume of Box2 is: "<<Box2.getVolume2()<<endl;

   if(Box1.compare(Box2)) {
      cout << "Box2 is smaller than Box1" <<endl;
   } else {
      cout << "Box2 is equal to or larger than Box1" <<endl;
   }


  // cout << "Total perimeter triangle: " <<trng.getperimeter() << endl;
  // cout << "Total volume of trinagle: " << trng.getvolume(trng.getperimeter()) << endl;
   return 0;
}

