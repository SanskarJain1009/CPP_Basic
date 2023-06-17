#include<iostream>
using namespace std;
int main(){
    int *b;
    int a[4];
    b=&a[0];
    cout<<"Enter any Value : "<<endl;
    cin>>*b;
    cout<<"Enter any Value : "<<endl;
    cin>>*(b++);
    cout<<"Enter any Value : "<<endl;
    cin>>*(b++);
    cout<<"Enter any Value : "<<endl;
    cin>>*(b++);
    cout<<"Enter any Value : "<<endl;
    cin>>*b;

    cout<<"Entered Number 5 : "<<*b<<endl;
    cout<<"Entered Number 4 : "<<*(--b)<<endl;
    cout<<"Entered Number 3 : "<<*(--b)<<endl;
    cout<<"Entered Number 2 : "<<*(--b)<<endl;
    cout<<"Entered Number 1 : "<<*(--b)<<endl;

    
    return 0;
}