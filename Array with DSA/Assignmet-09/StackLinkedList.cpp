#include<iostream>
using namespace std;
class Node
{
    public:
       int item;
       Node *next;
}; 
class Stack
{
    private:
        Node *top;
    public:   
    Stack(); 
        void push(int);
        void peek();
        void pop();
        bool isEmpty()
        ~Stack();


};

Stack::Stack()
{
    top=nullptr;    
}  
void Stack::push(int data)
{
    Node *n=new Node;
    n->item=data;
    n->next=top;
    top=n;
} 
void Stack::peek()
{
    if(top==nullptr)
        throw STACK_EMPTY;
    return top->item;    
}  
void Stack::pop()
{
    Node *r;
    if(top)
    {
        r=top;
        top=top->next;
        delete r;
    }

}
bool Stack::isEmpty()
{
    return top==nullptr;
}
Stack::~Stack()
{
    while(top)
       pop();
}
Stack * reverseStack(Stack *s)
{
    stack *stkptr=new Stack();
    while(!(s->isEmpty()))
    {
        stkptr->push(s->peek());
    }
    return stkptr;
}