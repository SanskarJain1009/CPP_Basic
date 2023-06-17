#include<iostream>
#include<string>
using namespace std;
class complex{
    int r;
    int i;
    public :
    void setnumber(int q, int w)
        {
            r=q;
            i=w;
        }
    void input();
    void output();
    friend complex sum(complex o, complex p);
};
 
void complex :: input()
{
    cout<<"Enter the complex number real part : ";
    cin>>r;
    cout<<"Enter the complex number complex part : ";
    cin>>i;
}
void complex :: output(){
    if(i>0)
    {
        cout<<"Complex number is "<<r<<" + "<<i<<"i"<<endl;
    }
    else
    {
        cout<<"Complex number is "<<r<<""<<i<<"i"<<endl;
    }
}
complex sum(complex o, complex p){
    complex z;
    z.setnumber((o.r+p.r), (o.i+p.i));
    return z;
}
int main()
{
    complex a,b,c;
    a.input();
    b.input();
    a.output();
    b.output();
    c=sum(a,b);
    c.output();
    cout<<endl;
    return 0;
}