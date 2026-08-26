#include<iostream>
using namespace std;
int main()
{
    int a[3][3];
    cout<<"the marks is"<<endl;
    for(int i=0;i<3;i++)
    {
        cout<<"the marks of each subject is"<<endl;
        for(int j=0;j<3;j++)
        {
            cin>>a[i][j];
        }
    }
    cout<<"student\tsub1\tsub2\tsub3\ttotal"<<endl;
    for(int i=0;i<3;i++)
    {
        int total=0;
        cout<<i+1<<"\t";
        for(int j=0;j<3;j++)
        {
            cout<<a[i][j]<<"\t";
            total=total+a[i][j];
        }
        cout<<total<<endl;
    }
    cout<<"the total average each student"<<endl;
    for(int j=0;j<3;j++)
    {
        int sum=0;
        for(int i=0;i<3;i++)
        {
            sum=sum+a[i][j];
        }
        float average=(float)sum/3;
        cout<<"float average is "<<average<<endl;
    }
    return 0;
}