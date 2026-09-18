#include<iostream>
using namespace std;
int main()
{
    int a[20],i,j,n,temp;
    cout<<"entre how many element you want entre"<<endl;
    cin>>n;
    cout<<"entre array element"<<endl;
    for(i=0;i<n;i++)
    cin>>a[i];
    for(i=1;i<n;i++)
    {
        temp=a[i];
        for(j=i-1;j>=0;j--)
        {
            if(a[j]<temp)
            {

                a[j+1]=a[j];

            }
            else
            {
                break;
            }
        }
        a[j+1]=temp;
    }
    cout<<"the sorted list is"<<endl;
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";

    }
    return 0;

}
