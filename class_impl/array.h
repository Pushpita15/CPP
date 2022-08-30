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
    void display();//default constructor


};
