#include<iostream>
using namespace std;
int main(){
    int a=1;
    int *b;
    b=&a;
    cout<<"Value at a "<<a<<endl;
    cout<<"Address of a"<<&a<<endl;
    cout<<"Address of a"<<b<<endl;
    cout<<"Value of a"<<*b<<endl;
    return 0; 
}