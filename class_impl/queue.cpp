#include "queue.h"

queue::queue(int s)
{
    this->arr=new item[s];
    this->size=s;
    this->front=this->rear=-1;
}

bool queue::isempty()
{
    if(this->front==-1)
        return true;
    else
        return false;
}

bool queue::isfull()
{
    if(this->rear==size-1 && this->rear==this->front-1)
        return true;
    else
        return false;
}

void queue::enqueue(item data)
{
    if(isfull())
        return;
    else
    {
        if(front==-1)
            rear=front=0;
        else if(rear==size-1 && front!=0)
            rear=0;
        else
            ++rear;
        arr[rear]=data;
    }
}

item queue::dequeue()
{
    if(isempty())
        return 0;
    else
    {
        item val=arr[front];
        if(front==rear)
            front=rear=-1;
        else if(front==size-1)
            front=0;
        else
            front++;
        return val;
    }
}
//queue using circular linked list-------------------------------------------

Node::Node(item data)
{
    this->val=data;
    this->next=NULL;
}
queue_ll::queue_ll()
{
    this->ptrear=NULL;
}
bool queue_ll::is_empty()
{
    if(this->ptrear==NULL)
        return true;
    else
        return false;
}
void queue_ll::enq(item data)
{
    Node * temp=new Node(data);
    if(is_empty())
    {
        temp->next=temp;
        //return;
    }
    else
    {
        temp->next=ptrear->next;
        ptrear->next=temp;
    }
    ptrear=temp;

}

item queue_ll::deq()
{
    Node * ptfront;
    if(is_empty())
    {
        return 0;
    }
    else
    {
        item data=ptrear->next->val;
        ptfront=ptrear->next;
        if(ptfront==ptrear)
            ptfront=NULL;
        else
        {
            ptrear->next=ptfront->next;
        }
        delete ptfront;
        return data;
    }
}