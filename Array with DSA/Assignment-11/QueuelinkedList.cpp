#include<iostream>
#define EMPTY_QUEUE 1;
using namespace std;
class Node
{
    public:
       int item;
       int *next;
};
class Queue
{
    private:
        int *front, *real;
        int count;
    public:
        Queue();
        void enqueue(int);
        void getFront();
        void getRear();
        void dequeue();
        ~Queue();
        int countitems();

};
Queue::Queue()
{
    front=real=nullptr;
    count=0;
}
void Queue::enqueue(int data)
{
    Node *n=new Node;
    n->item=data;
    n->next=nullptr;
    if(real==nullptr)
    {
        front=real=n;
    }
    else
    {
        real->next=n;
        real=n;
    }
    count++;
}
void Queue::getFront()
{
    if(front==nullptr)
        throw EMPTY_QUEUE;
    return front->item; 
}
void Queue::getRear()
{
    if(rela==nullptr)
        throw EMPTY_QUEUE;
    return real->item;    
}
void Queue::dequeue()
{
    Node *r;
    if(front!=nullptr)
    {
        r=front;
        if(front==real)
            front=real=nullptr;
        else
            front=front->next;
        delete r;
        count--;        
    }
}
Queue::~Queue()
{
    while(front)
       dequeue();
}
int Queue::countitems()
{
    return count;
}


int main()
{
    Queue<n> s1;
    s1.enqueue(34);
    s1.enqueue(44);
    s1.dequeue();
    cout<<"Queue";
    return 0;

}