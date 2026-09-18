#include<iostream>
using namespace std;
void selection()
{
    float salary[100];
    int n,i,j,temp;
    cout<<"entre how many employee you want to entre"<<endl;
    cin>>n;
    cout<<"entre salary of employee"<<endl;
    for(i=0;i<n;i++)
    cin>>salary[i];
    for(i=0;i<n-1;i++)
    {
        int min=i;
        for(j=i+1;j<n;j++)
        {
            if(salary[j]<salary[min])
            {
                min=j;

             
            }

        }
    
    temp=salary[i];
    salary[i]=salary[min];
    salary[min]=temp;
    }
    cout<<"the selection sort is"<<endl;
    for(i=0;i<n;i++)
    {
        cout<<salary[i]<<" "<<endl;
    }
    cout<<"top five highest salary "<<endl;
    int count=0;
    for(i=n-1;i>=0&&count<5;i--)
    {
        cout<<salary[i]<<" "<<endl;
        count++;
    }

}
void bubble()
{
    float salary[100];
    int n,i,j,temp;
    cout<<"entre how many element you want to entre"<<endl;
    cin>>n;
    cout<<"entre array element"<<endl;
    for(i=0;i<n;i++)
    cin>>salary[i];
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            if(salary[j]>salary[j+1])
            {
                temp=salary[j];
                salary[j]=salary[j+1];
                salary[j+1]=temp;
            }
        }
    }
    cout<<"the bubble sort is"<<endl;
    for(i=0;i<n;i++)
    {
        cout<<salary[i]<<" "<<endl;
    }
    cout<<"top five salary is"<<endl;
    int count=0;
    for(i=n-1;i>=0&&count<5;i--)
    {
        cout<<salary[i]<<" "<<endl;
        count++;
    }
}
int main()
{
    selection();
    bubble();
    return 0;
}


    
