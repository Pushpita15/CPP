#include<iostream>
using namespace std;
#define item int
class queue;
class Node;
class queue_ll;
class queue
{
    item * arr;
    int size,front,rear;

    public:
        queue(int s);
        bool isempty();
        void enqueue(item data);
        bool isfull();
        item dequeue();
};

class Node 
{
    item val;
    Node * next;

    public:
        friend queue_ll;
        Node (item data);
        friend ostream & operator<<(ostream &,const Node & ob);
};

class queue_ll
{
    Node * ptrear;

    public:
        queue_ll();
        bool is_empty();
        void enq(item data);
        item deq();
};

