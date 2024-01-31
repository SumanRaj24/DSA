//#include<string.h>
#include<iostream>
struct Node
{
	public:
     	int item;
    	Node* next;
	
};
class CLL;
{
	private:
	   Node	*last; 
		
    public:
    	CLL();
    	void insertStart(int);
    	void insertLast(int);
    	Node *search(int);
    	void insertAfter(Node *,int);
    	void deleteFirst(int);
    	void deleteLast(int);
    	void deleteNode(int);
    	~CLL();
        void printCLL();
	   		
};
void CLL::CLL()
{
	last==nullptr;
}
void CLL::insertStart(int)
{
	Node *n=new Node();
	n->item=data;
	if(last==nullptr)
	{
		n->next=n;
		last=n;
	}
	else
	{
		n->next=last->next;
		last->next=n;
		last=n;
	}
	
}
void CLL::insertLast(int)
{
	Node *n=new Node();
	n->item=data;
	if(last==nullptr)
	{
	    n->next=n;
		last=n;	
	}
	else
	{
	   n->next=last->next;
	   last->next=n;	
	}
}
Node *search(int)
{
	Node *t;
	if(t==nullptr)
      return nullptr;	
    t=last->next;
    do{
    	if(t->item==data)
    	  return t;
    	t=t->next;  
	}while(t!=last->next);
	return nullptr;
}
void CLL::insertAfter(Node *,int)
{
	if(temp)
	{
		Node *n=new Node();
		n->item=data;
		n->next=temp->next;
		temp->next=n;
		if(temp==last)
		  last=n;
	}
}
void CLL::deleteFirst(int);
{
	if(last)
	{
		if(last->next==last)
		{
			delete last;
			last=nullptr;
		}
		else
		{
			Node *t;
			t=last->next;
			last->next=last->next->next;
			delete t;
		}
	}
}
void CLL::deleteLast(int);
{
	Node *t;
	if(last)
	{
		if(last->next==last)
	    {
	    	delete last;
	    	last=nullptr;
		}
		else
		{
		  t=last->next;
		  while(t->next!=last)
		    t=t->next;
		  t->next=last->next;
		  delete last;
		  last=t;		
			
		}
	}
}
void CLL::deleteNode(int);
{
	Node *t,*r;
	if(last)
	{
		if(last->next==last)
		{
			if(last->item==data)
			{
				delete last;
				last=nullptr;
			}
		}
		else
		{
			 t=last;
			 do{
			 	if(t->next->item==data)
			 	{
			 		r=t->next;
			 		t->next=r->next;
			 		   last=t;
			 		delete r;
					break;    
				 }
				 t=t-?next;
				 while(t!=last);
			 }
		}
	}
}
CLL::~CLL()
{
	while(start)
	   deleteFirst();
}
void CLL::printCLL()
{
    Node *t;
    t=start;
    while(t)
    {
        cout<<" "<<t->item;
        t=t->next;
    }
}
int main()
{
    CLL.d;
    d.insertStart(45);
    d.insertLast(60);
    d.deleteFirst();
    cout<<endl;
    return 0;

}