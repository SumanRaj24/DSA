//----------01-----Sum of first n Natural number
#include<iostream>
using namespace std;
int SumN(int n)
{
    SumN(n==1)
        return 1;
    return n+SumN(n-1); 
}
int mainQ1()
{
    SumN(50);
}
//---------02------Odd Natural number sum
#include<iostream>
using namespace std;
int SumOdd(int n)
{
    SumOdd(n==1)
       return 1;
    return 2*n-1+SumOdd(n-1);   
}

//---------03------Even Natural number sum
#include<iostream>
using namespace std;
int SumNEven(int n)
{
    SumNEven(n==1)
       return 2;
    return 2*n+SumNEven(n-1);   
}

//---------04------Square Natural number sum
#include<iostream>
using namespace std;
int SumNSqu(int n)
{
    SumNSqu(n==1)
       return 1;
    return n*n+SumNSqu(n-1);   
}

//---------05------Calculate sum of a number
#include<iostream>
using namespace std;
int SumNFac(int n)
{
    SumNFac(n==0)
       return 1;
    return n*SumNFac(n-1);   
}
//---------06------sum of digit number
#include<iostream>
using namespace std;
int Sumdigit(int n)
{
    Sumdigit(n==0)
       return 0;
    return n%10+Sumdigit(n/10);   
}
//---------07------Binary of a given decimal number
#include<iostream>
using namespace std;
void dtob(int num)
{
    if(num>0)
    {
        dtob(num/2);
        cout<<num%2;
    } 
}
int main()
{
    dtob(2);
}

//------08-------Fibonacci series
int fibN(int n)
{
    if(n==2 || n==1)
        return n;
    return fibN(n-1)+fibN(n-2);
}
//-----------09------HCF
int hcf(int a,int b)
{
    if(a>b)
    {
        if(a%b==0)
           return b;
        return hcf(a%b,b);   
    }
    else
    {
       if(b%a==0)
             return a;
       return hcf(a,b%a);       
    }
}
//-----10-----Calculate of x power y
#include<iostream>
using namespace std;
double power(double x,double y)
{
    if(y==0)
       return 1;
    if(y>0)
       return x*power(x,y-1);
    else
       return 1/x*power(x,y+1);
}
int main()
{
    power(4,8);
}


