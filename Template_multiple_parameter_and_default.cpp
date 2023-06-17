#include<iostream>
using namespace std;

template <class T1=int, class T2=float, class T3=char>
class employee
{
    public :
    T1 x;
    T2 y;
    T3 z;

    employee(T1 a, T2 b, T3 c){
        cout<<"The value of a is : "<<a<<endl;
        cout<<"The value of b is : "<<b<<endl;
        cout<<"The value of c is : "<<c<<endl;
    }
};

int main(){
    employee <float, char, int> sanskar (1.5, 'A', 12);    //Multiparameter. 

    employee <> sambhav (4, 4.2,'S');                       //Default Parameter.
    
return 0;

}