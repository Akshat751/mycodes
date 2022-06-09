#include<iostream>
using namespace std;
int sum(int n)
{
    if(n==0)
    {
        return 0;
    }
   // return n+ sum(n-1);
    return sum(n*(n+1)/2);
}
int main()
{
    int n,i=0;
    cout<<"how many elements you want to find the sum for";
    cin>>n;
    cout<<sum(n);
    
}