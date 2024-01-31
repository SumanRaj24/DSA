#include<iostream>
#define DEQUE_EMPTY 1;
using namespace std;
class Node
{
	public:
		Node *prev;
		int item;
		Node *next;
	
};
class Deque
{
	private:
		Node *front,*real;
	public:
		Deque();
		void insertFront(int);
		void insertReal(int);
		void deleteFront();
		void deleteReal();
		void getFront();
		void getReal();
		~Deque();
		bool isEmpty();
	
};
Deque::Deque()
{
	front=real=nullptr;
	
}
void Deque::insertFront(int data)
{
	Node *n=new Node;
	n->prev=nullptr;
	n->item=data;
	n->next=front;
    if(front==nullptr)
    {
    	front=n;
    	real=n;
	}
	else
	{
		front->prev=n;
		front=n;
	}
}
void Deque::insertReal(int data)
{
	Node *n=new Node;
	n->prev=real;
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
}
void Deque::deleteFront()
{
	Node *r;
	if(front)
	{
		if(front=real=nullptr)
		{
			delete front;
			front=real=nullptr;
		}
		else
		{
			r=fornt;
			front=front->next;
			front=prev=nullptr;
			delete r;
		}
	}
}
void Deque::deleteReal()
{
	Node *r;
	if(real)
	{
	   if(real->prev==nullptr)
	   {
	   	   delete real;
	   	   front=real=nullptr;
		}
		else
		{
			r=real;
		    real=real->prev;
		    real->prev=nullptr;
			delete r;
		}	
	}
	
}
void Deque::getFront()
{
	if(front==nullptr)
	 	throw EMPTY_DEQUE;
	 return front->item;
	
}
void Deque::getReal()
{
	if(real==nullptr)
	    throw EMPTY_DEQUE;
	return real->item;    
}
Deque::~Deque()
{
	while(front)
	    deleteFront();
}
bool Deque::isEmpty()
{
	return front==nullptr;
}

int main()
{
	Deque<4> s1;
	s1.insertFront(43);
	s1.insertFront(23);
	s1.deleteFront();
	cout<<"Deque";
	return 0;
}
