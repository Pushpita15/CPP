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

matrix::matrix()
{
    int row=4,col=4;
    this->row=row;
    this->column=col;
    this->arr=new int*[row];
    this->p=new int[row*col];
    for(int i=0;i<row;++i)
    {
        this->arr[i]=p+i*col;
    }
}

matrix::matrix(int row,int coln)
{
    this->row=row;
    this->column=coln;
    this->arr=new int*[row];
    this->p=new int[row*coln];
    for(int i=0;i<row;++i)
    {
        this->arr[i]=p+i*coln;
    }
}

void matrix::take_inputm()
{
    for(int i=0;i<this->row;i++)
    {
        for(int j=0;j<this->column;++j)
            cin >> this->arr[i][j];
    }
}

matrix matrix::add_m(matrix M)
{
    matrix sum(this->row,this->column);
    for(int i=0;i<M.row;++i)
    {
        for(int j=0;j<M.column;++j)
            sum.arr[i][j]=this->arr[i][j]+M.arr[i][j];
    }
    return sum;
}

void matrix::displaym()
{
    for(int i=0;i<this->row;++i)
    {
        for(int j=0;j<this->column;++j)
            cout << this->arr[i][j] << ' ';
        cout << endl;
    }
}