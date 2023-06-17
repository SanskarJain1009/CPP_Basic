#include<iostream>
using namespace std;

class base_class{

    public : 
    int base_var;
    void display(){
        cout<<"Base class invoked."<<endl;
        cout<<base_var<<endl;
    }
};
class derived_class : public base_class{
    public : 
    int derived_var;
    void display(){
    cout<<"Derived class invoked."<<endl;
    cout<<base_var<<endl;
    cout<<derived_var<<endl;
    }
};

int main(){
    base_class *base;
    derived_class derived;
    base= & derived;
    base->base_var=45;
    //base->derived_var=44; base class has derived class address but cannot access derived class elements;
    base->display();
    
    derived_class *derived_1;
    derived_class derived_2;
    derived_1= & derived_2;
    derived_1->base_var=1;
    derived_1->derived_var=2;
    derived_1->display();

return 0;
}