#include<iostream>
using namespace std;
//factorial with positive numbers
int fact(int n)
{
    if(n==0)
    {
        return 1;
    }
   return fact(n-1)*n;

}
int main()
{
    int n=3;
     cout<<fact(n);
    return 0;
}