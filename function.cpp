#include<iostream>
using namespace std;
int sum(int a, int b){
    return a+b;
}
void swap(int *a, int *b){
    int temp=*a;
    *a=*b;
    *b=temp;

}
int main(){
    int a,b;
    cout<<"This is the Call by Value function to find sum of two variables."<<endl<<endl;
    cout<<"Enter the first number : "<<endl;
    cin>>a;
    cout<<"Enter the second number : "<<endl;
    cin>>b;
    cout<<"Sum of the numbers : "<<sum(a,b)<<endl;

    int c,d;
    cout<<"This is the Call by Reference function to swap values."<<endl<<endl;
    cout<<"Enter the first number : "<<endl;
    cin>>c;
    cout<<"Enter the second number : "<<endl;
    cin>>d;
    cout<<"Value of numbers before swapping : "<<c<<" "<<d<<endl;
    swap(&c,&d);
    cout<<"Value of numbers before swapping : "<<c<<" "<<d<<endl;

    return 0;
}