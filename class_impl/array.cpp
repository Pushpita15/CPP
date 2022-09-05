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
istream& operator>>(istream & in,array &ob)
{
    for(int i=0;i<ob.size;++i)
    {
        in >> ob.arr[i];
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
array array::operator+(array L)
{
    array result(this->size);
    for(int i=0;i<L.size;++i)
    {
        result.arr[i]=this->arr[i]+L.arr[i];
    }
    return result;
}
array array::operator-(array L)
{
    array sub(this->size);
    for(int i=0;i<L.size;++i)
    {
        sub.arr[i]=this->arr[i]-L.arr[i];
    }
    return sub;
}
array array::operator*(array L)
{
    array mult(this->size);
    for(int i=0;i<L.size;++i)
    {
        mult.arr[i]=this->arr[i]*L.arr[i];
    }
    return mult;
}

void array::display()
{
    for (int i=0;i<this->size;++i)
    {
        cout << this->arr[i] << ' ';
    }
    cout<<endl;
}
ostream& operator<<(ostream& out,array& ob)
{

    for (int i=0;i<ob.size;++i)
    {
        out << ob.arr[i] << ' ';
    }
    out<<endl;
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
istream& operator>>(istream& in,matrix& M)
{
    for(int i=0;i<M.row;i++)
    {
        for(int j=0;j<M.column;++j)
            in >> M.arr[i][j];
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
matrix matrix::operator+(matrix M)
{
    matrix add(this->row,this->column);
    for(int i=0;i<M.row;++i)
    {
        for(int j=0;j<M.column;++j)
            add.arr[i][j]=this->arr[i][j]+M.arr[i][j];
    }
    return add;
}
matrix matrix::operator-(matrix M)
{
    matrix sub(this->row,this->column);
    for(int i=0;i<M.row;++i)
    {
        for(int j=0;j<M.column;++j)
            sub.arr[i][j]=this->arr[i][j]-M.arr[i][j];
    }
    return sub;
}
matrix matrix::operator*(matrix M)
{
    matrix mult(this->row,this->column);
    for(int i=0;i<M.row;++i)
    {
        for(int j=0;j<M.column;++j)
            mult.arr[i][j]=this->arr[i][j]*M.arr[i][j];
    }
    return mult;
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
ostream & operator<<(ostream & out,matrix& M)
{
      for(int i=0;i<M.row;++i)
    {
        for(int j=0;j<M.column;++j)
            cout << M.arr[i][j] << ' ';
        cout << endl;
    }
}