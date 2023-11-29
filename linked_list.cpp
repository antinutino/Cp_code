#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node* next;

};
node* head=NULL;
void print()
{
    node* temp=head;
    while(temp!=NULL)
    {cout<<temp->data<<" ";
    temp=temp->next;
    }
}

int main()
{
    int x,n,i;
    node* temp1;
    for(int i=0;i<5;i++)
    {
        cin>>x;
        node* temp=(node*)malloc(sizeof(node));
        temp->data=x;
        temp->next=NULL;
        temp1=head;
        if(head==NULL)
        {
            head=temp;
        }
        else{
        while(temp1->next!=NULL)
            {
                temp1=temp1->next;
            }
            temp1->next=temp;
            print();

    }}
    return 0;


}
