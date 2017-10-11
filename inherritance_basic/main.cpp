#include <iostream>

using namespace std;

// Base class
class Shape {
   protected:
      int width;
      int height;
      int length;
      //int perimeter;
      int side1,side2,side3;
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
     /* void setPerimeter(int s) {
         perimeter=s;
      }*/
      void setSide1(int a) {
         side1=a;;
      }
      void setSide2(int b) {
         side2=b;;
      }
      void setSide3(int c) {
         side3 = c;
      }

};

// Derived class
class Rectangle: public Shape {
   public:
      int getArea() {
         return (width * height);
      }
      int getVolume() {
         return (width * height*length);
      }
};


class Triangle:public Shape{
    public:
        int getperimeter() {
           return ((side1+side2+side3)/2);

                            }
         int getvolume(int peri){

          return  (peri*(peri-side1)*(peri-side2)*(peri-side3));
                            }
};
int input(){
  int h;
  cin>>h;
  return h;
}
int main(void) {
   Rectangle Rect;
   Triangle trng;


   cout<<"the width of rect is: ";
         Rect.setWidth(input());
   cout<<"the height of rect is: ";
   Rect.setHeight(input());
   cout<<"the length of rect is: ";
   Rect.setLength(input());
   cout<<"the side1 of trng is: ";
   trng.setSide1(input());
   cout<<"the side2 of trng is: ";
   trng.setSide2(input());
   cout<<"the side3 of trng is: ";
   trng.setSide3(input());


   // Print the area of the object.
   cout << "Total area: " << Rect.getArea() << endl;
   cout<<"Total volume of Rect"<<Rect.getVolume()<<endl;
   cout << "Total perimeter triangle: " <<trng.getperimeter() << endl;
   cout << "Total volume of trinagle: " << trng.getvolume(trng.getperimeter()) << endl;
   return 0;
}
