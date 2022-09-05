#include "array.h"

int main()
{
    int user;
    //using default constructor
   array a1,a2,res;

    cin >> a1;
    cout << "-----\n";
    cin >> a2;
    cout << "------\n";
    //res=a1.add(a2); 
    res=a1+a2;
    cout << res;
    //res.display(); 
    //using parameterized constructor
    cout << "enter the size:" ;
    cin >> user;
    array a3(user),a4(user),res2(user),sub(user),mult(user);

    cin >> a3;
    cout << "-----\n";
    cin >> a4;
    cout << "------\n";
    //res2=a3.add(a4);
    res2=a3+a4;
    cout << res2;
    sub=a3-a4;
    cout << sub;
    mult=a3*a4;
    cout << mult;
    //res2.display();
    printf("matrix---------------\n");
    //matrix
    int row,col;
    cout << "enter the row and column:" ;
    cin >> row >> col;
    matrix m1(row,col),m2(row,col),sum(row,col);

    //m1.take_inputm();
    cin >> m1;
    //m1.displaym();
    cout << m1;
    cout << "-----\n";
    
    //m2.take_inputm();
    cin >> m2;
    //m2.displaym();
    cout << m2;
    cout << "-------\n";

    //sum=m1.add_m(m2);
    sum=m1+m2;
    sum.displaym();

    matrix m3,m4,multiply;

    m3.take_inputm();
    cout << "-----\n";
    m4.take_inputm();
    cout << "------\n";
    multiply = m3*m4;
    cout << multiply;
    
    
    return 0;

}