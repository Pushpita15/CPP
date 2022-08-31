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
};