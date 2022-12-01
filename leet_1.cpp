/*You are given the head of a linked list.

Remove every node which has a node with a strictly greater value anywhere to the right side of it.

Return the head of the modified linked list.

 */
#include<iostream>
#include<vector>
using namespace std;

  //Definition for singly-linked list.
  struct ListNode {
      int val;
     ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };

class Solution {
public:
    ListNode* reverse(ListNode *pthead)
    {
        if(pthead==NULL)
            return NULL;
        else
        {
            ListNode * succ=pthead,*prev=NULL,*curr=pthead;
            while(curr!=NULL)
            {
                succ=curr->next;
                curr->next=prev;
                prev=curr;
                curr=succ;
                
            }
            pthead=prev;
        }
        return pthead;
    }
    ListNode* removeNodes(ListNode* head) {
        
        
        if(head==NULL || head->next==NULL)
            return head;
        else
        {
            ListNode * temp=new ListNode(0),*rev;
            rev=reverse(head);
            
            ListNode * curr=rev,*res=temp;
            int max=0;
            while(curr!=NULL)
            {
                max=max>curr->val?max:curr->val;
                if(max==curr->val)
                {
                    temp->next=new ListNode(max);
                    temp=temp->next;
                    
                }
                curr=curr->next;
            }
            
            return reverse(res->next);
        }
        
    }
};