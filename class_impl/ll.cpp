#include "ll.h"

Node ::Node()
{
    this->next=NULL;
}
Node::Node(item val)
{
    this->data=val;
    this->next=NULL;
}

linked_list::linked_list()
{
    this->head=NULL;
}
ostream & operator << ( ostream & out,const Node & ob)
{
    out << ob.data;
    return out;
}

void linked_list::append(item val)
{
    Node * temp=new Node(val);
    Node * current=head;
    if(head==NULL)
    {
        head=temp;
        return;
    }
    else
    {
        while(current->next!=NULL)
            current=current->next;
        current->next=temp;
    }

}

void linked_list::add_beg(item val)
{
    Node * temp=new Node(val);
    if(head==NULL)
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
void linked_list::add_n(int n,item val)
{

    Node * temp=new Node(val);
    Node * curr=head;
    Node * tmp;
    if(head==NULL)
    {
        head=temp;
        return;
    }
    else
    {
        for(int i=1;i<n-1;++i)
        {
            curr=curr->next;
        }
        temp->next=curr->next;
        curr->next=temp;
    }

}

void linked_list::delbeg()
{
    if(head==NULL)
        return ;
    else
    {
        Node * temp=head->next;
        delete head;
        head=temp;
    }
}

void linked_list::delend()
{
    Node * curr=head;
    if(head==NULL)
        return;
    else{

        while (curr->next->next!=NULL)
        {
            curr=curr->next;
        }
        curr->next=NULL;
        delete curr->next;
        
    }
}

ostream& operator<<(ostream &out,const linked_list&ob )
{
    Node * current=ob.head;
    while(current!=NULL)
    {
        out << current->data << ' ';
        current=current->next;

    }
    return out;
}


Node * linked_list::search_by_pos(int pos)
{
    Node * curr=head;
    Node * temp=head;
    int i,count=0;
    if(head==NULL)
        {
            cout << "NULL" << endl;
            return 0;
        }
    if(pos<=0)
    {
        cout << "invalid position" << endl;
        return 0;
    }
    while(temp!=NULL)
    {
        count++;
        temp=temp->next;
    }
    if(pos>count)
    {
        cout << "invalid position" << endl;
        return 0;
    }
    for(i=0;i<pos-1;++i)
    {
        curr=curr->next;
    }

    return curr;
}

Node * linked_list::deln(int n)
{
    Node * prev=search_by_pos(n-1);
    Node * del_n=search_by_pos(n);
    Node * temp=del_n;
    prev->next=temp->next;
    delete del_n;
}

void linked_list::reverse()
{
    //Node * temp=head;
    if(head==NULL)
        return ;
    else
    {
        Node * curr=head,*prev=NULL,*succ;
        while(curr!=NULL)
        {
            succ=curr->next;
            curr->next=prev;
            prev=curr;
            curr=succ;
        }
        head=prev;
        
    }
}
void linked_list::reverse_rec(Node * current)
{
    current=head;
    if(current->next!=NULL)
            reverse_rec(current->next);
    cout << current->data <<' ';
}


