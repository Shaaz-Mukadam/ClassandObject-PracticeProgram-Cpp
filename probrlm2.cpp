//write a program to find the space of room using class and object.
#include<iostream>
using namespace std;
 class Room{
  public:
      int length;
      int breadth;
      int height;

      int calculateArea() {
       return length * breadth;
      }

      int calculateVolume() {
       return length * breadth * height;
      }
 };
int main() {

    Room r1;
    r1.length=40;
    r1.breadth=30;
    r1.height=20;

    cout<<"Area of room is "<<r1.calculateArea()<<endl;
    cout<<"Volume of room is "<<r1.calculateVolume()<<endl;
}

//*********OUTPUT********
Area of room is 1200
Volume of room is 24000
