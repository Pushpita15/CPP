#include "queue.h"

int main()
{
    queue Q(4);

    Q.enqueue(2);
    Q.enqueue(4);
    Q.enqueue(6);
    Q.enqueue(8);
    cout << Q.dequeue() << endl ;
    cout << Q.dequeue() << endl;
    cout << Q.dequeue() << endl;

    cout << "implementing queue using circular ll--------------\n" ;
    queue_ll Qll;
    Qll.enq(20);
    Qll.enq(100);
    Qll.enq(5);
    Qll.enq(10);
    cout <<  Qll.deq() << endl;
    cout <<  Qll.deq() << endl;
    return 0;
}