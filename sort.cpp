#include<iostream>
using namespace std;
int posOfMax(int arr[], int L)
{
    int max=0;
    for(int i=1;i<L;i++)
    {
        if(arr[max]<arr[i])
        {
            max=i;
        }  
    }
    return max;
}

// int arrayLength(int Arr[]){
//     int i=0;
//     for(i;i<500;i++)
//     {
//         if(Arr[i]=="\0"){break;}
//     }
//     return i;
// }
void sort(int Arr[], int L){
    for(int i=L;i>1;i--)
    {   int temp;
        int maxindex=posOfMax(Arr, i);
        temp=Arr[maxindex];
        Arr[maxindex]=Arr[i-1];
        Arr[i-1]=temp;

    }   
}
int main(){

    int Arr[]={1, 20, 3,4, 5, 61, 2, 31, 50, 6, 7 };
    sort(Arr,11);
    for(int i=0;i<11;i++)
    {cout<<Arr[i]<<" ";}

}
