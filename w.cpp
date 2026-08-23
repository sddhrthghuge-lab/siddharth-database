#include<iostream>
using namespace std;
int main()
{
    int a[2][2][2],b[2][2][2],c[2][2][2],i,j,k;
    cout<<"entre the first array"<<endl;
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            for(int k=0;k<2;k++)
            {
                cin>>a[i][j][k];
            }
        }
    }
    cout<<"entre second array"<<endl;
    for(int i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            for(int k=0;k<2;k++)
            {
                cin>>b[i][j][k];
            }
        }
    }
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            for(int k=0;k<2;k++)
            {
                c[i][j][k]=a[i][j][k]+b[i][j][k];
            }
        }
    }


    cout<<"the addition is"<<endl;
    for (i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            for(k=0;k<2;k++)
            {
                cout<<" "<<c[i][j][k];
            }
            cout<<endl;
            
            
        }
        
    }
    
    return 0;
}
