#include <iostream>
using namespace std;

    int n;
void revarray(int arr[],int n)
{
    int t;
    for(int i=0;i<n;i++)
    {
        t=arr[i];
        arr[i]=arr[n-1];
        arr[n-1]=t;
        n--;
    }
}
int main()
{

    cin>>n;
    int arr[10];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    revarray(arr,n);
    cout<<"array after reversing";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i];
    }

    return 0;
}
