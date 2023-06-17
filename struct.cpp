#include<iostream>
using namespace std;

typedef struct employee{
    int code;
    int salary;
    char name[10];
}emp;
int main(){

    struct employee one;
    cout<<"Enter the code of the Employee : "<<endl;
    cin>>one.code;
    cout<<"Enter the salary of the Employee : "<<endl;
    cin>>one.salary;
    cout<<"Enter the name of the Employee : "<<endl;
    cin>>one.name;

    cout<<endl<<"Code of Employee : "<<one.code;
    cout<<endl<<"Salary of Employee : "<<one.salary;
    cout<<endl<<"Name of the Employee : "<<one.name<<endl;

    cout<<"Using the typedef"<<endl;

    emp two;
    cout<<"Enter the code of the Employee : "<<endl;
    cin>>two.code;
    cout<<"Enter the salary of the Employee : "<<endl;
    cin>>two.salary;
    cout<<"Enter the name of the Employee : "<<endl;
    cin>>two.name;

    cout<<endl<<"Code of Employee : "<<two.code;
    cout<<endl<<"Salary of Employee : "<<two.salary;
    cout<<endl<<"Name of the Employee : "<<two.name<<endl;
    return 0;
}