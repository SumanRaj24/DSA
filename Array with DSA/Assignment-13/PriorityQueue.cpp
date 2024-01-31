#include<iostream>
#define EMPTY_PRIORITYQUEUE;
using namespace std;
class Node
{
    public:
        int item;
        int pno;
        Node *next;

};
class PriorityQueue
{
    private:
       Node *start;
    public:
       PriorityQueue();
       void insert(int,int);
       void deleteItem();
       bool isEmpty();
       int getHightPriorityItem();
       int getHightPriorityNumber();
       ~PriorityQueue();
};
PriorityQueue::PriorityQueue()
{
    start=nullptr;
}
void PriorityQueue::insert(int p,int data)
{
    Node *n=new Node;
    n->item=data;
    n->pno=p;
    Node *t1,*t2;

    t1=start;
    t2=nullptr;

    while(t1!=nullptr)
    {
        if(t1->pno<p)
           break;
        t2=t1;
        t1=t1->next;
    }
    n->next=t1;
    if(t2==nullptr)
        start=n;
    else
       t2->next=n;    
}
void PriorityQueue::deleteItem()
{
    if(isEmpty())
    {
        throw EMPTY_PRIORITYQUEUE;
        Node *r;
        r=start;
        start=start->next;
        delete r;
    }

}
bool PriorityQueue::isEmpty()
{
    return start==nullptr;
}    
int PriorityQueue::getHightPriorityItem()
{
    if(isEmpty())
       throw EMPTY_PRIORITYQUEUE;
    return start->item;   
}
int PriorityQueue::getHightPriorityNumber()
{
   if(isEmpty())
       throw EMPTY_PRIORITYQUEUE;
   return start->pno;     
}
PriorityQueue::~PriorityQueue()
{
    while(!isEmpty())
       deleteItem();
}