#include<iostream>
using namespace std;
int main()
{
    int a[10]={11,22,33,44,55,66,77,88,99,100};
    int v,start,last,mid,flag=0;
    int n=10;
    cout<<"entre the element to search"<<endl;
    cin>>v;
    start=0;
    last=n-1;
    mid=(start+last)/2;
    while(start<=last)
    {
        
        if(a[mid]==v)
        {
            cout<<"element found"<<v<<endl;
            flag=1;
            break;
        }
        if(a[mid]>v)
        {
            last=mid-1;
        }
        else
        {
            start=mid+1;
        }
        mid=(start+last)/2;
    }
    if(flag==0)
    {
        cout<<"element not found"<<v<<endl;
       // flag=0;
    }
    return 0;
}
