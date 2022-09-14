#include "stack.h"

int main()
{
    stack S,S2(3);
    S2.push(100);
    S2.push(200);
    S2.push(300);
    cout << "the popped item:" << S2.pop() << endl;
    cout <<"hey peek!" << S2.peek(); 

    cout <<"\n-------------------------------------------------------\n" ;
    stack_ll Sll;
    Sll.push(20);
    Sll.push(40);
    Sll.push(60);
    Sll.push(80);
    Sll.pop();
    cout << "the peek:" << Sll.peek();

    return 0;
}