#include "array.h"


array::array()    
{
    int size=4;
    arr=new int[size];
    this->size=size;
}

array::array(int size)
{
    this->arr=new int[size];
    this->size=size;

}

void array::take_input()
{
    for(int i=0;i<this->size;++i)
    {
        cin >> arr[i];
    }
}

array array::add(array L)
{
    array res(this->size);
    for(int i=0;i<L.size;++i)
    {
        res.arr[i]=this->arr[i]+L.arr[i];
    }
    return res;
}
void array::display()
{
    for (int i=0;i<this->size;++i)
    {
        cout << this->arr[i] << ' ';
    }
    cout<<endl;
}