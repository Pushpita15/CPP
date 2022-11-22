#include<iostream>
using namespace std;
void merge_sorted_arr(int * arr,int start,int mid,int end)
{
    int i=start,j=mid,k;
    int * res=new int[end+1];
    while(i<mid && j<end)
    {
        if(arr[i]<=arr[j])
        {
            res[k]=arr[i];
            i++;
        }
        if(arr[j]<=arr[i])
        {
            res[k]=arr[j];
            j++;
        }
        k++;
    }
    while(i<mid)
    {
        res[k]=arr[i];
        i++;
        k++;
    }
    while(j<=end)
    {
        res[k]=arr[k];
        k++;
        j++;
    }
}
void merge_sort(int * arr,int start,int end)
{
    int mid;
    if(start<=end)
    {
        mid=(start+end)/2;
        merge_sort(arr,start,mid);
        merge_sort(arr,mid+1,end);
        merge_sorted_arr(arr,start,mid,end);
    }
}
int main()
{
    int arr[]={1,4,3,2};
    merge_sort(arr,0,3);
    for(int i=0;i<4;++i)
    {
        cout << arr[i]<<' ';
    }
    return 0;

}