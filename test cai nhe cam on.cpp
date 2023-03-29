#include<iostream>
#include<math.h>
using namespace std;
int giaithua(int n)
{
    if(n==1) return 1;
    return n*giaithua(n-1);
}
float tinhtong(int x,int i,float s=0)
{ 
    s=s+(pow(x,i)/giaithua(i));
   if (i==1)
   return x;
   return s+tinhtong(x,i-1); 
}

 
int main()
{
    cout<<tinhtong(2,3);
    return 0;
}
