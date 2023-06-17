#include<iostream>
using namespace std;
int fac(int *a)
{
    int b=*a;
    if(b==0 || b==1)
    {return 1;}
    int c=*a-1;
    return b * fac(&c);

}
int main(){ 
    int a;
    cout<<"Enter the number whose factorial you want : ";
    cin>>a;
    cout<<"Factorial of "<<a<<" "<<": "<<fac(&a)<<endl;
    
    return 0;
}
