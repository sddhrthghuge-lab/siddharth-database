#include<iostream>
using namespace std;
int main()
{
    int a[20],i,j,n,min,temp;
    cout<<"entre how many element you wnt to entre" <<endl;
    cin>>n;
    cout<<"entre the array element"<<endl;
    for(i=0;i<n;i++)
    {
    cin>>a[i];
    }
for(i=0;i<(n-1);i++)
{
    min=i;
   
    for(j=i+1;j<n;j++)
    {
        
        if(a[j]>a[min])
        {
        min=j;
        
        
        }
    }
    temp=a[i];
    a[i]=a[min];
    a[min]=temp;
}
cout<<"the sorted array is"<<endl;
for(i=0;i<n;i++)
{
    cout<<a[i]<<" "<<endl;
}
return 0;
}
