//Write a c++ program for employee salary.
#include<iostream>
using namespace std;
 class Employee{
     int emp_id;
     char emp_name[20];
     float basic_salary, hra, da, i_tax, net_salary;
public:
    void accept_details() {
    cout<<"Enter the employee id:";
    cin>>emp_id;
    cout<<"\n";
    cout<<"Enter the employee Name:";
    cin>>emp_name;
    cout<<"\n";
    cout<<"Enter the employee salary:";
    cin>>basic_salary;
    cout<<"\n";

    hra = 800;
    da = 0.25 * basic_salary;
    i_tax = 0.15 * basic_salary;
    net_salary = basic_salary + da + hra - i_tax;
    }

    void display_details() {
    cout<<"Employee ID:"<<emp_id<<endl;
    cout<<"Employee Name:"<<emp_name<<endl;
    cout<<"Employee Salary:"<<basic_salary<<endl;
    cout<<"Employee HRA :"<<hra<<endl;
    cout<<"Employee DA :"<<da<<endl;
    cout<<"Employee I TAX:"<<i_tax<<endl;
    cout<<"Employee Net Salary:"<<net_salary<<endl;
    }
 };
int main() {

     Employee e1;
     e1.accept_details();
     e1.display_details();

     return 0;
}


//***********OUTPUT*******
Employee ID:410
Employee Name:Shaaz
Employee Salary:50000
Employee HRA :800
Employee DA :12500
Employee I TAX:7500
Employee Net Salary:55800
