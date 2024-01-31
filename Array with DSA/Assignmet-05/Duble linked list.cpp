//teacher ke code
#include<stdio.h>
#include<iostream>
using namespace std;
struct Node
{
    Node *prev;
    int item;
    Node *next;
};
class DLL
{
    private:
        Node *start;
    public:
        DLL();
        void insertAtStart(int);
        void insertAtLast(int);
        Node* search(int);
        void insertAfter(Node *,int);
        void deleteFirst();
        void deleteLast();
        void deleteNode(int);
        ~DLL();
        void printDLL();
};
DLL::DLL()
{
    start=NULL;
}
void DLL::insertAtStart(int data)
{
    Node *n=new Node();
    n->prev=NULL;
    n->item=data;
    n->next=start;
    if(start!=NULL)
        start->prev=n;
    start=n;
}
void DLL::insertAtLast(int data)
{
    Node *t;
    Node *n=new Node();
    n->item=data;
    n->next=NULL;
    if(start==NULL)
    {
        n->prev=NULL;
        start=n;
    }
    else
    {
        t=start;
        while(t->next!=NULL)
            t=t->next;
        t->next=n;
        n->prev=t;
    }
}
Node* DLL::search(int data)
{
    Node *t;
    t=start;
    while(t)
    {
        if(t->item==data)
            return t;
        t=t->next;
    }
    return NULL;
}
void DLL::insertAfter(Node *temp,int data)
{
    Node *n;
    if(temp)
    {
        n=new Node();
        n->item=data;
        n->prev=temp;
        n->next=temp->next;
        if(temp->next)
            temp->next->prev=n;
        temp->next=n;
    }
}
void DLL::deleteFirst()
{
    if(start)
    {
        if(start->next)
        {
            start=start->next;
            delete start->prev;
            start->prev=NULL;
        }
        else
        {
            delete start;
            start=NULL;
        }       
    }
}
void DLL::deleteLast()
{
    Node *t;
    if(start)
    {
        if(start->next==NULL)
        {
            delete start;
            start=NULL;
        }
        else
        {
            t=start;
            while(t->next->next!=NULL)
                t=t->next;
            delete t->next;
            t->next=NULL;            
        }
    }
}
void DLL::deleteNode(int data)
{
    Node *t;
    if(start)
    {
        t=start;
        while(t)
        {
            if(t->item==data)
            {
                if(t==start)
                    deleteFirst();
                else
                {
                    if(t->next)
                        t->next->prev=t->prev;
                    t->prev->next=t->next;
                    delete t;
                }
            }
            t=t->next;
        }
    }
}
DLL::~DLL()
{
    while(start)
        deleteFirst();
}
void DLL::printDLL()
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
	DLL d1;
	d1.insertAtStart(45);
	d1.insertAtLast(34);
	d1.deleteFirst();
	d1.insertAfter(d1.search(34),76);
	d1.printDLL();

	cout<<endl;
	return 0;
}








//int main()
//{
////    DLL d;
////    d.insertAtStart(10,44);
////    d.insertAtLast();
////    d.insertAfter(d.search(20),30);
////    d.deleteLast();
////    d.deleteNode();
////    d.printDLL();
////    
////    cout<<endl;
////    return 0;
//}









































// #include<string.h>
// #include<iostream>
// using namespace std;
// struct Node
// {
//    Node *prev;	
//    int item;
//    Node *next;	
// };
// class DLL
// {
// 	private:
// 	   Node start;
// 	public:	
// 	   DLL();
// 	   void insertStart(int);
// 	   void insertLast(int);
// 	   Node* search(int);
// 	   void insertAfter(node*,int);
// 	   void deleteFirst(int);
// 	   void deleteLast(int);
// 	   void deleteNode();
// 	   ~DLL();
// };
// DLL::DLL()
// {
// 	start==NULL;
// }
// void DLL::insertStart(int data)
// {
//     Node* n= new Node;
//       n->prev=NULL:
//       n->item=data;
// 	  n->next=start;
// 	  if(start!=NULL)
// 	  	start->prev=n;
// 	  start=n;	  
// }
// void DLL::insertLast(int data)
// {
// 	Node *t;
// 	Node*n=new Node;
// 		n->item=data;
// 		n->next=start;
// 		if(start==NULL)
// 		{
// 			n->prev=NULL;
// 			start=n;
			
// 		}
// 		else
// 		{
// 			t=start;
// 			while(t->next!=NULL)
// 			  t=t->next;
// 			t->next=n;
// 			n->prev=t;  
			
// 		}
// }
// Node DLL::search(int data)
// {
// 	Node *t;
// 	t=start;
// 	while(t)
// 	{
// 		if(t->item==data)
// 		   return t;
// 		t=t->next;   
// 	}
// 	return NULL;
// }
// void DLL::insertAfter(Node *temp,int data)
// {
// 	Node *n;
// 	if(temp)
// 	{
// 		n=new Node();
// 		n->item=data;
// 		n->prev=temp;
// 		n->next=temp->next;
// 		if(temp=next)
// 		   temp->next->prev=n;
// 		temp->next=n;   	
// 	}
// }
// void DLL::deleteFirst(int data)
// {
// 	if(start)
// 	{
// 		if(start->next)
// 		{
// 			start=start->next;
// 			delete start->prev;
// 			start->prev=NULL;
// 		}
// 		else
// 		{
// 			delete start;
// 		    start NULL;
// 		}
// 	}
// }
// void DLL::deleteLast(int data)
// {
// 	Node *t;
// 	if(start)
// 	{
// 		if(start->next==NULL)
// 		{
//            delete start;
// 		   start NULL;			
// 		}
// 		else
// 		{
// 			t=start;
// 			while(t->next->next!=NULL)
// 			    t=t->next;
// 			delete t->next;
// 			t->next=NULL;    
// 		}
// 	}
	
// }
// void DLL::deleteNode()
// {
// 	Node *t;
// 	if(start)
// 	{
// 		t=start;
// 		while(t)
// 		{
// 			if(t->item==data)
// 			   deleteFirst();
// 			else
// 			{
// 				if(t->next)
// 				    t->next->prev=t->prev;
// 				t->prev->next=t->next;
// 				delete t;    
// 			   }   
// 		}
// 		t=t->next;
		
// 	}
// }
// DLL::~DLL()
// {
// 	while(start)
// 	    deleteFirst();
// }