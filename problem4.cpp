//Write a C++ program to find the area of circle using class circle which have following details:
//a. Accept radius from the user
//b. Calculate the area
//c. Display the result
#include<iostream>
using namespace std;
class Circle{
 float radius , area;

public:
    Circle(){
    cout<<"Enter the value of radius:";
    cin>>radius;
    }
    void calculate();
    void display();
};

void Circle::calculate() {
  area = 3.14* radius*radius;
}
void Circle::display() {
    cout<<"Area of circle is :"<<area;
}
int main() {
    Circle c1;
    c1.calculate();
    c1.display();

    return 0;
}

//*********OUTPUT*********
Enter the value of radius:20
Area of circle is :1256
