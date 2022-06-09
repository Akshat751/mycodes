#include<iostream>
using namespace std;
bool ispalin(int start,int end,string &s)
{
    if(start>=end)
        return true;
    
        return (s[start]==s[end])&&ispalin(start+1,end-1,s);
    
    

}
int main()
{
    int n,start=0,end;
    string s;
    cout<<"enter your string you want to check for";
    cin>>s;
    n=s.length();
    end=n-1;
    cout<< ispalin(start,end,s);

    
   
}