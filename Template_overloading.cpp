#include<iostream>
using namespace std;

void func(int a){
    cout<<"Without overloading."<<endl;
    cout<<"Value is : "<<a<<endl;
}
template<class T>                               //Function Overloading.
void func(T a){                                 //Same function but different types one is 
    cout<<"After overloading."<<endl;           //template and other is funciton.
    cout<<"Value is : "<<a<<endl;
}
int main(){
    func(4);            //Exact match takes the highest priority.
    func(12.4);
return 0;
}