#include<iostream>
using namespace std;
int n;
void revrsearray(int A[],int beg,int end)
{
   int temp;
    for(int i=beg;i<end;i++)
    {
         temp = A[beg];
        A[beg]=A[end];
        A[end]=temp;
        end--;
        beg++;
    }
}
int main()
{
    int A[1000];
    
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }
    int beg=0,end=n-1;
    if(n<=1000)
    revrsearray(A,beg,end);
    else
    exit(0);
    for(int i=0;i<n;i++)
    {
        cout<<A[i]<<" ";
    }
    return 0;
}