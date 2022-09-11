#include<iostream>
using namespace std;
#define item int

class linked_list;
class Node
{
    item data;
    Node * next;

    public:
        Node();
        Node(item val);
        friend linked_list;
        friend ostream& operator <<(ostream & out,const linked_list & ob);
        friend ostream& operator << (ostream & out ,const Node & ob);



};
class linked_list
{
    Node * head;

    public:
        linked_list();
        void append(item val);
        void add_beg(item val);
        void add_n(int n,item val);
        void delend();
        void delbeg();
        Node * deln(int n);
        Node * search_by_pos(int pos);
        Node * search_by_val(item val);
        void reverse();
        void reverse_rec(Node * current);
        void display();// operator << overloaded
        friend ostream& operator <<(ostream & out,const linked_list & ob);
        friend istream& operator >>(istream & in, const linked_list & ob);
        friend Node;
};

