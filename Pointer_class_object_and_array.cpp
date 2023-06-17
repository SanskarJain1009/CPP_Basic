#include<iostream>
using namespace std;
class shop{
    int id, item;
    public :
    void setdata(int i, int j){
        id=i;
        item=j;
    }
    void getdata(){
        cout<<"Id is "<<id<<endl;
        cout<<"Item no. is "<<item<<endl;
    }
};
int main(){
    shop *ptr=new shop[3];
    int p,q;
    for(int i=0;i<3;i++)
    {   
        cout<<"Enter the value for id- "<<endl;
        cin>>p;
        cout<<"Enter the value for item no. - "<<endl;
        cin>>q;
        (*ptr).setdata(p,q);
        *ptr++;
    }  
    for(int i=0;i<3;i++)
    {
        *ptr--;
        ptr->getdata();
    }  
return 0;
}