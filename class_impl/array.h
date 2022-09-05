#include<iostream>
using namespace std;
class array{

    int * arr;
    int size;

    public:

    array(); //default constructor
    array(int size);//parameterized constructor
    void take_input();
    array add(array L);
    void display();
    array operator+(array L);
    array operator-(array L);
    array operator*(array L);
    friend ostream &operator<<(ostream &out,array &ob);
    friend istream &operator>>(istream &in,array &ob);


};

class matrix{

    int  **arr,*p;
    int row,column;

    public:

    matrix();
    matrix(int row,int coln);
    void take_inputm();
    matrix add_m(matrix M);
    void displaym();
    matrix operator+(matrix M);
    matrix operator-(matrix M);
    matrix operator*(matrix M);
    friend ostream& operator << (ostream& out ,matrix& M);
    friend istream& operator >> (istream& in , matrix& M);
};