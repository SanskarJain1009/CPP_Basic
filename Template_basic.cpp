#include <iostream>
using namespace std;

template<class T>
class vector
{
public:
    T *arr;
    int size;
    vector(int m)
    {
        size = m;
        arr = new T[size];
    }

    T dot_product(vector v)
    {
        T d=0;
        for(int i=0;i<size;i++){
            d+=this->arr[i] * v.arr[i];
        }
        return d;
    }
};

int main()
{
    vector<float> v1(3);
    v1.arr[0]=4;
    v1.arr[1]=-2;
    v1.arr[2]=3;

    vector<float> v2(3);
    v2.arr[0]=4.2;
    v2.arr[1]=-1.02;
    v2.arr[2]=2.55;

    float a=v2.dot_product(v1);
    cout<<"FLoat data type dot product is : "<<a<<endl;

    vector<int> v3(3);
    v3.arr[0]=4;
    v3.arr[1]=-2;
    v3.arr[2]=3;

    vector<int> v4(3);
    v4.arr[0]=4;
    v4.arr[1]=-12;
    v4.arr[2]=-25;

    float b=v3.dot_product(v4);
    cout<<"Int data type dot product is : "<<b<<endl;

    return 0;
}