#include<iostream>
using namespace std;
int ropecut(int n,int a,int b,int c)
{
    int d;
    if(n==0)
       return 0;
    
   
        if(a<b)
         d=a;
         else if(a>b)
         d=b;
         else if(d<c);
         else if(d>c)
             d=c;
             return 1+ ropecut(n-d,a,b,c);




}
int main()
{
    int a,b,c,n;
    cout<<"enter the length of the rope";
    cin>>n;
    cout<<"enter the length of the pecies";
    cin>>a>>b>>c;
    cout<< ropecut(n,a,b,c);
}