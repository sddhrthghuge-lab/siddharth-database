#include<iostream>
using namespace std;
int main()
{
    int a[100],n,i,j;
    cout<<"entre how many  elelment you want to entre"<<endl;
    cin>>n;
    cout<<"entre the array elelment"<<endl;
    for(i=0;i<n;i++)
    {
    cin>>a[i];
    }
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            if(a[j]<a[j+1])
            {
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
                
            }
        }
    }
    for(i=0;i<n;i++)
    cout<<a[i]<<" ";
    return 0;

}