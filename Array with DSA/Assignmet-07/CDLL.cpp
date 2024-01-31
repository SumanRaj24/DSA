#include<string.h>
#include<iostream>
using namespace std;
struct node
{
	public:
	int item;
	Node *prev;
	Node *next; 
};
class CDLL
{
   private:
     Node *start;
   public:
     CDLL();
	 void insertstart(int);
	 void insertlast(int);
	 Node *search(int);
	 void insertafter(Node*,int);
	 void deletefirst();
	 void deletelast();
	 void deleteNode();
	 ~CDLL();
	 	 
	
};
~CDLL::CDLL()
{
	start==nullptr;
}
void CDLL::insertstart(int data)
{
	Node *n=new Node();
	n->item=data;
	if(start==nullptr)
	{
	   n->prev=n;
	   n->next=n;
	   start=n;
	}
	else
	{
	   n->prev=start->prev;
	   n->next=start;
	   start->prev->next=n;
	   start->prev=n;
	   start=n;	
	}
}
void CDLL::insertlast(int data)
{
	Node *n=new Node();
	n->item=data;
	if(start==nullptr)
	{
		n->prev=n;
		n->next=n;
		start=n;
	}
	else
	{
		n=prev=start->prev;
		n->next=start();
		start->prev->next=n;
		start->prev=n;
	}
	
}
Node *CDLL::search(int data)
{
	if(start==nullptr)
	    return nullptr;
	Node *t;
	t=start; 
	do {
		if(t->item==data)
		    return t;
		t=t->next;    	
	}while(t!=start);
	return nullptr;	
}
void CDLL::insertafter(Node* temp,int data)
{
   if(temp)
   {
   	Node *n=new Node;
   	n->item=data;
   	n->prev=temp;
   	n->next->temp->next;
   	temp->next->prev=n;
   	temp->next=n;
   }
	
}
void CDLL::deletefirst();

{
	if(start)
	{
		if(start->next==start)
		{
			delete start;
			start=nullptr;
		}
		else
		{
			Node *r;
			r=start;
			start->prev->next->next;
			start->next->prev=start->prev;
			start=start->next;
			delete r;
		}	
	}	
}
void CDLL::deletelast()
{
   if(start)
   {
	    if(start->next==start)
		{
		 	delete start;
		 	start nullptr;
		}   
		else
		{
		   Node *r;
		   r=start->prev;	
		   r->prev->next=start;
		   start->prev=r->prev;
		   delete r;
		}	
   }	
}
void CDLL::deleteNode();
{
	if(start)
    {
    	if(start->next==start)
    	{
    		if(start->item==data)
    		{
    			delete start;
    			start=nullptr;
			}
		}
		else
		{
			Node *t,*r;
			t=start;
			do{
				if(t->item==data)
				{
				   t->prev->next=t->next;
				   t->next->prev=t->prev;
				   if(t==start)
				      start->next;
				   delete t;	
				}
				t=t->next;
			}while(t!=start);
			
		}
	 } 
	
}
CDLL::~CDLL()
{
	while(start)
	   deletefirst();

}

