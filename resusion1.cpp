#include<iostream>
using namespace std;
int fun(int n)
{
    if(n<1)
    {
       return 0;
    }
     
  
        
        fun(n-1);
        cout<<n;
    
   
}
int main()
{
    int n=5;
    fun(n);
}