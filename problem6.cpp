//. Create a class for an electricity board that charges the following rates to users
//a) For first 100 units : 40p per unit
//b) For next 200 units : 50p per unit
//c) Beyond 300 units   : 60p per unit

#include<iostream>
using namespace std;
class Electricity{
    int unit;
    char name[20];

public:
    void accept(){
    cout<<"Enter the Name";
    cin>>name;
    cout<<"Enter the unit";
    cin>>unit;
    }
    void printBill();
};

    void Electricity :: printBill(){
    int bill = 0;
    if(unit>100 && unit<300){
         bill=(500+(unit*0.40));
    }
    else if(unit>300 && unit<500){
         bill=(500+(unit*0.60));
    }
    else if(unit>500 && unit<700){
         bill=(500+(unit*0.80));
    }
    else{

    }
    }
int main() {
    int bill;
    Electricity e1;
    e1.accept();
    e1.printBill();
    cout<<bill;

    return 0;
}
