#include<iostream>
using namespace std;
struct node
{
    int data;
    node *next;
};
node *head=NULL,*temp,*newnode;
void insert(int a)
{
    newnode=new node;
    newnode->data=a;
    newnode->next=NULL;
    if(head==NULL)
    {
        head=newnode;

    }
    else
    {
        temp=head;
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=newnode;
    }
}
void display()
{
    temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<endl;
        temp=temp->next;
    }
}

int main()
{
    
    insert(10);
    insert(20);
    insert(30);
    insert(40);
    insert(50);
    display();

    return 0;
}


    
