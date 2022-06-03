#include<iostream>
using namespace std;
void duplica(int arr[],int n)
{
   for(int i=0;i<n;i++)
   {

           if(arr[i]==arr[i+1])
           {
               cout<<"contains duplicates of this number="<<arr[i+1]<<"\n";
           }
           else{
            cout<<"a";
           }

   }
}
int  main()
{
    int n, arr[10];
    cout<<"enter length";
    cin>>n;
    cout<<"enter array";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
   duplica(arr,n);
   return 0;

}