#include<iostream>
using namespace std;
int fib(int *a){
    if(*a==1 )
    {return 0;}

    if(*a==2 || *a==3 )
    {return 1;}
    int b=*a-1;
    int c=*a-2;
    return fib(&b)+fib(&c);
}
int main(){
    int a;
    cout<<"Enter the nth term you want to see of Fibonacci Series : ";
    cin>>a;
    int b=a-1;
    cout<<a<<"th term is : "<<fib(&a)<<endl;
    return 0;
}