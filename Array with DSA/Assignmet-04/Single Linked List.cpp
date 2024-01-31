#include<stdio.h>
#include<iostream>
using namespace std;
class node
{
   int item;
   node *next;
};
class SLL
{
    private:
      node *start;
    public: 
       SLL();  
       void insertAtStart(int);
       void insertAtlast(int);
       node* search(int);
       void insertAfter(node*,int);
       void deleteAtFirst();
       void deleteAtlast();
       void deleteNode(int);
       ~SLL();
};
SLL::SLL()
{
    start=NULL;
}
void SLL::insertAtStart(int data)
{
    node *n=new node();
    n->item=data;
    n->next=start;
    start=n;

}
void SSL::insertAtlast(int data)
{
   node *t;
   node *n=new node();
   n->item=data;
   n->next=NULL;
   if(start==NULL)
       start=n;
   else
   {
        t=start;
        while(t->next!=NULL)
            t=t->next;
   }    
}
void SLL::search(int data)
{
    node *t;
    t=start;
    while(t)
    {
        if(t->item==data)
            return t;
        t=t->next;    
    }
    return NULL;
}
void SLL::insertAfter(node*temp,int data)
{
    Node *n;
    if(temp)
    {
        n=new Node();
        n->item=data;
        n->next=temp->next;
        temp->next=n;
    }
}
void SLL::deleteAtFirst(int data)
{
    Node *r;
    if(start)
      {
        r=start;
        start=start->next;
        delete r;
      }
}
void SLL::deleteAtlast(int data)
{
   Node *r;
   if(start)
   {
      if(start->next==NULL)
      {
        delete start;
        start=NULL;  
      }
      else{
          r=start;
          while(r->next->next!=NULL)
              r=r->next;
          delete r->next;
          r->next=NULL;
      }
   }
}
void SLL::deleteNode(int data)
{
    Node *t1,*t2;
    if(start)
    {
        t1=start;
        t2=NULL;
        while(t1)
        {
            if(t1->item==data)
              break;
            t2=t1;
            t1=t1->next;  
        }
        if(t1)
        {
            if(t2==NULL)
            {
                start=t1->next;
                delete t1;
            }
            else
            {
                t2->next=t1->next;
                delete t1;
            }
        }
    }
}
SLL::~SLL()
{
    while(start)
       deletefirst();
}
int main()
{
    Node obj;
    Node =new Node(10);
    obj.insertAtStart(4);
}