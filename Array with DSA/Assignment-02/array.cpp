#include<iostream>
#include<stdio.h>
using namespace std;
#define INVALID_CAPACITY
#define EMPTY_ARRAY 2
#define INVALID_INDEX 3
class Array
{
    private:
       int capacity;
       int lastIndex;
       int *ptr;
    public:
      Array(int);
      Array(Array &);
      void createArray(int );
      bool isEmpty();
      void append(int);
      void insert(int,int);
      void edit(int,int);
      void del(int);
      bool isFull();
      int get(int);
      int count();
      ~Array();
      int find(int);
      Array & operator=(Array &);

};
Array::Array(Array &arr)
{
    capacity=arr.capacity;
    lastIndex=arr.lastIndex;
    if(arr.ptr==NULL)
        ptr=NULL;
    
    ptr=new int[capacity];
    for(int i=0; i<=arr.lastIndex;i++)
    ptr[i]=arr.ptr[i];
       
}
Array& Array::operator=(Array &arr)
{
    if(ptr!=NULL)
       delete []ptr;
    capacity=arr.capacity;
    lastIndex=arr.lastIndex;

    if(arr.ptr==NULL)
         ptr=NULL;
    ptr=new int[capacity];
    for(int i=0; i<=arr.capacity;i++)
    ptr[i]=arr.ptr[i];
}
Array::Array(int cap)

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
void Array::createArray(int cap)
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
bool Array::isEmpty()
{
    if(ptr==NULL)
       throw INVALID_CAPACITY;
    return lastIndex==-1;   
}
void Array::append(int data)
{
    if(ptr==NULL)
        throw INVALID_CAPACITY;
    if(isFull())
       cout<<"\nArray Overflow";
    else{
        lastIndex++;
        ptr[lastIndex]=data;
    }       

}
void Array::insert(int index,int data)
{
    int i;
    if(ptr==NULL)
       throw INVALID_CAPACITY;
    if(index<0 || index>lastIndex+1)
       cout<<"\nInvalid Index";
    else if(isFull())
       cout<<"\nArray Overflow";
    else{
        for(i=lastIndex;i>=index; i--)
          ptr[i+1]=ptr[i];
        ptr[index]=data;
        lastIndex++;  
    }   
}
void Array::edit(int index, int newdata)
{
    if(ptr==NULL)
        throw INVALID_CAPACITY;
    if(index<0 || index>lastIndex)
        cout<<"\nInvalid index or Empty";    
    else
       ptr[index]=newdata;
}
void Array::del(int index)
{
    int i;
    if(ptr==NULL)
        throw INVALID_CAPACITY;
    if(index<0 || index>lastIndex)
        cout<<"\nInvalid Index or Empty Array";
    else{
        for(i=index;i<lastIndex;i++)
           ptr[i]=ptr[i+1];
        lastIndex--;   
    }
}
bool Array::isFull()
{
    if(ptr==NULL)
        throw INVALID_CAPACITY;
    if(capacity==lastIndex+1)
       return true;
    else 
       return false;       
}
int Array::get(int index)
{
    if(ptr==NULL)
      throw INVALID_CAPACITY;
    if(lastIndex==-1)
       throw EMPTY_ARRAY;
    if(index<0 || index>lastIndex)
        throw INVALID_INDEX;
    return ptr[index];         
}
int Array::count()
{
    if(ptr==NULL)
       throw INVALID_CAPACITY;
    return lastIndex+1;   
}
Array::~Array()
{
    if(ptr!=NULL)
      delete []ptr;
}
int Array::find(int data)
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
    Array obj(4);
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


