#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    float d;
    
    cout<<"Enter the first number= \n";
    cin>>a;
    cout<<"Enter the second number= \n";
    cin>>b;

    //Arithmetic Operator.
    cout<<"Following are the Arithmetic Operator-\n";
    cout<<"(+) Sum is- "<<a+b<<endl;
    cout<<"(-) Subtraction is- "<<a-b<<endl;
    cout<<"(*) Multipication is- "<<a*b<<endl;    
    cout<<"(/) Division is- "<<a/b<<endl;
    cout<<"(%) Modulus is- "<<a%b<<endl;    
    cout<<"(a++) Increment for first number is- "<<a++<<endl;    
    cout<<"(a--) Decrement for first number is- "<<a--<<endl;    
    cout<<"(++a) Increment for first number is- "<<++a<<endl;    
    cout<<"(--a) Decrement for first number is- "<<--a<<endl;    
    cout<<endl<<endl;

    //Comparison Operator.   
    cout<<"Following are the Comparison Operator-\n";    
    cout<<"(<) Less than comparison for a and b is- "<<(a<b)<<endl;
    cout<<"(>) Greater than comparison for a and b is- "<<(a>b)<<endl;
    cout<<"(<=) Less than equal to comparison for a and b is- "<<(a<=b)<<endl;
    cout<<"(>=) Greater than equal to comparison for a and b is- "<<(a>=b)<<endl;
    cout<<"(>=) Equal comparison for a and b is- "<<(a==b)<<endl;
    cout<<endl<<endl;
    
    //Logical Operator.
    cout<<"Following are the Logical Operator-\n";    
    cout<<"(&&) And Operator for [(a<b) && (a==b)] is- "<<((a<b) && (a==b))<<endl;    
    cout<<"(||) Or Operator for [(a<b) || (a==b)] is- "<<((a<b) || (a==b))<<endl;    
    cout<<"(!) Not Operator for !(a<b) is- "<<!(a<b)<<endl;
    
    
    return 0;
}