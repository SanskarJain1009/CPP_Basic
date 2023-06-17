#include<iostream>
using namespace std;
int main(){
    int a=4;
    int *ptr=&a;
    cout<<"Value of a = "<<*ptr<<endl; 
    int *b=new int[3];
    b[0]=10;
    b[1]=120;
    b[2]=34;
    for(int i=0;i<=2;i++)
    {
        cout<<"Value of array "<<i<<" "<<"is "<<b[i]<<endl;
    }
return 0;
}