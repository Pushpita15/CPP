#include "array.h"

int main()
{
    int user;
    //using default constructor
    /*array a1,a2,res;

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

    res2.display();*/
    /*int row,col;
    cout << "enter the row and column:" ;
    cin >> row >> col;
    matrix m1(row,col),m2(row,col),sum(row,col);

    m1.take_inputm();
    m1.displaym();
    cout << "-----\n";
    
    m2.take_inputm();
    m2.displaym();
    cout << "-------\n";

    sum=m1.add_m(m2);
    sum.displaym();*/

    matrix m3,m4,sum2;

    m3.take_inputm();
    cout << "-----\n";
    m4.take_inputm();
    cout << "------\n";
    sum2=m3.add_m(m4);
    sum2.displaym();
    
    
    return 0;

}