#include<iostream>
using namespace std;
#define item int


class stack;
class Node;
class stack_ll;

class stack{

    item * arr;
    int rear,size;

    public:
        stack(int size);
        stack();
        bool isfull();
        void push(item data);
        bool isempty();
        item pop();
        item peek();

};


class Node
{
    item val;
    Node * next;
    
    public:
        Node(item data);
        friend stack_ll;
};
class stack_ll
{
    Node * head;

    public:
        friend Node;
        stack_ll();
        bool is_empty();
        void push(item data);
        void pop();
        item peek();

};
