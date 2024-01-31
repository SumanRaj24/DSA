
#include<iostream>
#include<stdio.h>
using namespace std;
#define INVALID_CAPACITY
#define EMPTY_DynArray 2
#define INVALID_INDEX 3
class DynArray
{
    private:
       int capacity;
       int lastIndex;
       int *ptr;
    public:
      DynArray(int);
      void createArray(int );
      bool isEmpty();
      void append(int);
      void insert(int,int);
      void edit(int,int);
      void del(int);
      bool isFull();
      int get(int);
      int count();
      ~DynArray();
      int find(int);

};
DynArray::DynArray(int cap)

{
    try{
        throw INVALID_CAPACITY;
            capacity=cap;
            lastIndex=-1;
            ptr=new int[capacity];

        }
        catch(int e)
        {
            cout<<"INVALID CAPCITY";
            ptr=NULL;
        }
    
}
void DynArray::createArray(int cap)
{
    if(ptr==NULL)
    {
        if(cap<1)
          throw INVALID_CAPACITY;
        capacity=cap;
        lastIndex=-1;
        ptr= new int[capacity];

    }
    else{
        if(cap<1)
          throw INVALID_CAPACITY;
        delete []ptr;
        capacity=cap;
        lastIndex=-1;
        ptr= new int[capacity];  
    }
}
bool DynArray::isEmpty()
{
    if(ptr==NULL)
       throw INVALID_CAPACITY;
    return lastIndex==-1;   
}
void DynArray::append(int data)
{
    if(ptr==NULL)
        throw INVALID_CAPACITY;
    if(isFull())
       cout<<"\nDynArray Overflow";
    else{
        lastIndex++;
        ptr[lastIndex]=data;
    }       

}
void DynArray::insert(int index,int data)
{
    int i;
    if(ptr==NULL)
       throw INVALID_CAPACITY;
    if(index<0 || index>lastIndex+1)
       cout<<"\nInvalid Index";
    else if(isFull())
       cout<<"\nDynArray Overflow";
    else{
        for(i=lastIndex;i>=index; i--)
          ptr[i+1]=ptr[i];
        ptr[index]=data;
        lastIndex++;  
    }   
}
void DynArray::edit(int index, int newdata)
{
    if(ptr==NULL)
        throw INVALID_CAPACITY;
    if(index<0 || index>lastIndex)
        cout<<"\nInvalid index or Empty";    
    else
       ptr[index]=newdata;
}
void DynArray::del(int index)
{
    int i;
    if(ptr==NULL)
        throw INVALID_CAPACITY;
    if(index<0 || index>lastIndex)
        cout<<"\nInvalid Index or Empty DynArray";
    else{
        for(i=index;i<lastIndex;i++)
           ptr[i]=ptr[i+1];
        lastIndex--;   
    }
}
bool DynArray::isFull()
{
    if(ptr==NULL)
        throw INVALID_CAPACITY;
    if(capacity==lastIndex+1)
       return true;
    else 
       return false;       
}
int DynArray::get(int index)
{
    if(ptr==NULL)
      throw INVALID_CAPACITY;
    if(lastIndex==-1)
       throw EMPTY_DynArray;
    if(index<0 || index>lastIndex)
        throw INVALID_INDEX;
    return ptr[index];         
}
int DynArray::count()
{
    if(ptr==NULL)
       throw INVALID_CAPACITY;
    return lastIndex+1;   
}
DynArray::~DynArray()
{
    if(ptr!=NULL)
      delete []ptr;
}
int DynArray::find(int data)
{
    if(ptr==NULL)
       return -1;

    for(int i=0; i<=lastIndex;i++)
      if(ptr[i]==data)
         return i;
    return -1;
}
int main()
{
    DynArray obj(4);
    obj.append(50);
    obj.insert(0,30);
    obj.insert(0,40);
    obj.insert(0,44);
    for(int i=0;i<obj.count();i++)
      cout<<obj.get(i)<<" ";
    obj.del(1);

    cout<<endl;
    for(int i=0;i<obj.count();i++)
      cout<<obj.get(i)<<" ";
    cout<<endl;      
    return 0;
}

