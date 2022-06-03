#include <bits/stdc++.h>
using namespace std;
void maxarray(int arr[],int n)
{
    int max=arr[0];
    for(int i=0;i<n;i++)
    {
        if(max<arr[i])
        {
            max=arr[i];
        }
    }
    cout<<"largest element in the array\n"<<max;
}
void minarray(int arr[],int n)
{
    int min=arr[0];
    for(int i=0;i<n;i++)
    {
        if(min>arr[i])
        {
            min=arr[i];
        }
    }
        cout<<"minimum element in the array\n"<<min;

}
 int main()

  {
    int n;
    cout<<"enter array size";
    cin>>n;
    int *arr =new int(n);
    for(int i=0;i<n;i++)
    {
       cin>>arr[i];
    }
    maxarray(arr,n);
    minarray(arr,n);
    return 0;

}