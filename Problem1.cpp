//Write a program to access class and object. keep one variable as a private
//********CLASS and OBJECT*********
//class is a collection of data member and member functions.
//Class is a blueprint / Class is a template.
//An object is a instance of class.
//. is used to access

//Like if we are creating a string as a private then we have to create a fucntion inside the class and pass it a new variable then
//at the input declare the variable and use it.
#include<iostream>
using namespace std;
 class Students{
     string name;
     public:
     int age;
     bool gender;

     void setName(string s){
      name=s;
     }

     void printInfo() {
      cout<<"Name =";
      cout<<name<<endl;
      cout<<"Age =";
      cout<<age<<endl;
      cout<<"Gender";
      cout<<gender<<endl;
     }

 };
int main() {
    Students arr[3];
    for(int i=0 ; i<3 ; i++){
        string s;
        cin>>s;
        arr[i].setName(s);
        cin>>arr[i].age;
        cin>>arr[i].gender;
    }
    for(int i=0 ; i<3 ; i++){
        arr[i].printInfo();
    }
}

//**********OUTPUT********
Name =Shaaz
Age =20
Gender1
Name =Shams
Age =18
Gender1
Name =Sam
Age =21
Gender0

