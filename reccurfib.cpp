#include<iostream>
using namespace std;
int reccurfib(int i)
{
    if(i==0||i==1)
    {
        return i;
    }
    return reccurfib(i-1)+reccurfib(i-2);
}
int main()
{
    int i=0, n;
    cout<<"enter numeber";
    cin>>n;
   while(i<n)
   {
      cout<<reccurfib(i);
      i++;

   }
   return 0;
   
}