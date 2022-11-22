#include<iostream>
using namespace std;
void Bubble_sort(int * arr,int n)
{
    int swapped;
    for(int i=0;i<n-1;++i)
    {
        swapped=0;
        for(int j=0;j<n-i-1;++j)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j+1],arr[j]);
                swapped=1;
            }
            
        }
        if(swapped==0)
        {
            break;
        }
    }
}
int main()
{
    int arr[]={1,4,3,2};
    Bubble_sort(arr,4);
    for(int i=0;i<4;++i)
    {
        cout << arr[i]<<' ';
    }
    return 0;
}