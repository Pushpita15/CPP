#include "stack.h"


//sttack using array------------------------------------
stack::stack(int size)
{
    this->arr=new item[size];
    this->size=size;
    this->rear=-1;

}

stack::stack()
{
    this->arr=new item[4];
    this->size=4;
    this->rear=-1;
}
bool stack::isfull()
{
    if(this->rear==this->size-1)
        return true;
    else
        return false;
}
void stack::push(item data)
{
    if(isfull())
        return;
    else
    {
        //this->rear++;
        this->arr[++this->rear]=data;
    }
}

bool stack::isempty()
{
    if(this->rear==-1)
        return true;
    else
        return false;
}

item stack::pop()
{
    item temp;
    if(isempty())
    {
        cout << "empty" << endl;
        return 0;
    }
    else
    {
        temp=this->arr[this->rear];
        this->rear--;
    }
    return temp;

}

item stack::peek()
{
    if(isempty())
        return -1;
    else
        return this->arr[this->rear];
}
//stack using linked list-----------------------------------------------------
Node :: Node(item data)
{
    this->val=data;
    this->next=NULL;
}
stack_ll::stack_ll()
{
    this->head=NULL;
}

bool stack_ll::is_empty()
{
    if(this->head==NULL)
        return true;
    else
        return false;
}
void stack_ll::push(item data)
{
    Node * temp=new Node(data);
    if(is_empty())
    {
        head=temp;
        return;
    }
    else
    {
        temp->next=head;
        head=temp;
    }
}

void stack_ll::pop()
{
    if(is_empty())
        return;
    else
    {
        Node * temp=head->next;
        delete head;
        head=temp;
    }
}

item stack_ll::peek()
{
    if(is_empty())
        return 0;
    else
        return head->val;
}