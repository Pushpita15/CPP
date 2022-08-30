#include "array.h"

int main()
{
    int user;
    //using default constructor
    array a1,a2,res;

    a1.take_input();
    cout << "-----\n";
    a2.take_input();
    cout << "------\n";
    res=a1.add(a2);

    res.display();
    //using parameterized constructor
    cout << "enter the size:" ;
    cin >> user;
    array a3(user),a4(user),res2(user);

    a3.take_input();
    cout << "-----\n";
    a4.take_input();
    cout << "------\n";
    res2=a1.add(a2);

    res2.display();
    return 0;

}