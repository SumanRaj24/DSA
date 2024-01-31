//recursion n natural number--------01-------
#include<iostream>
using namespace std;
void f1(int n)
{
    if(n>0)
    {
       f1(n-1);
        cout<<" "<<n;
    }

}
int mainQ1()
{
    f1(100);
}

//---------------2---------Reverse N natural number-------
#include<iostream>
using namespace std;
void f2(int n)
{
    if(n>0)
    {
        cout<<" "<<n;
        f2(n-1);
    }
}
int mainQ2()
{
    f2(50);
}
//------------03-------------natural Odd number; 
#include<iostream>
using namespace std;
void f3(int n)
{
    if(n>0)
    {
        f3(n-1);
        cout<<" "<<2*n-1;
    }
}
int mainQ3()
{
    f3(50);
}

//------04------Reverse n Odd natural number
#include<iostream>
using namespace std;
void f4(int n)
{
    if(n>0)
    {
        cout<<" "<<2*n-1;
        f4(n-1);
    }
}
int mainQ4()
{
    f4(50);
}

//----05------N Even natural number
#include<iostream>
using namespace std;
void f5(int n)
{
    if(n>0)
    {
        f5(n-1);
        cout<<" "<<n*2;
    }
}
int mainQ5()
{
    f5(50);
}
//-----06--- Reverse N Even natural number
#include<iostream>
using namespace std;
void f6(int n)
{
    if(n>0)
    {
        cout<<" "<<n*2;
        f6(n-1);
    }
}
int mainQ6()
{
    f6(50);
}

//-----07----Square N Natural number
#include<iostream>
using namespace std;
void f7(int n)
{
    if(n>0)
    {
        f7(n-1);
        cout<<" "<<n*n;
    }
}
int mainQ7()
{
    f7(5000);
}

//-----08----Revise Square N Natural number
#include<iostream>
using namespace std;
void f8(int n)
{
    if(n>0)
    {
        cout<<" "<<n*n;
        f8(n-1);
        
    }
}
int mainQ8()
{
    f8(50);
}
//-----09---- Queue N Natural number
#include<iostream>
using namespace std;
void f9(int n)
{
    if(n>0)
    {
        
        f9(n-1);
        cout<<" "<<n*n*n;
        
    }
}
int mainQ9()
{
    f9(50);
}

//-----10---- Queue Reverse N Natural number
#include<iostream>
using namespace std;
void f10(int n)
{
    if(n>0)
    {
        cout<<" "<<n*n*n;
        f10(n-1);  
    }
}
int main()
{
    f10(50);
}

