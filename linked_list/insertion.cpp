#include<iostream>
using namespace std;
struct node{
    int data;
    node *next;
};
node *head=NULL;
void create(int n){
    node *temp;
    node *newnode;
    for(int i=0;i<n;i++){
        newnode=new node;
        cout<<"Enter value to be inserted\n";
        cin>>newnode->data;
        newnode->next=NULL;
        if(head==NULL){
            head=newnode;
            temp=newnode;
        }
        else{
            temp=head;
            while(temp->next!=NULL){
                temp=temp->next;
            }
            temp->next=newnode;
        }
    }
}
void display(int n){
    node *temp;
    temp=head;
    cout<<"Values:\n";
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"\nAddress:\n";
    temp=head;
    while(temp!=NULL){
        cout<<temp<<"->";
        temp=temp->next;
    }
}
void insatbeg(){
    node *newnode;
    newnode=new node;
    cout<<"Enter value to be inserted\n";
    cin>>newnode->data;
    newnode->next=head;
    head=newnode;
}
void insatend(){
    node *newnode;
    newnode=new node;
    node *temp=head;
    cout<<"Enter value to be inserted\n";
    cin>>newnode->data;
    newnode->next=NULL;
    if(head == NULL){
    head = newnode;
    return;
    }
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=newnode;
}
void insatpos(int n)
{
    node *newnode;
    newnode=new node;
    node *temp=head;
    cout<<"Enter value to be inserted\n";
    cin>>newnode->data;
    newnode->next=NULL;
    if(n==1){
    newnode->next = head;
    head = newnode;
    return;}
    for(int i=1;i<n-1;i++){
        temp=temp->next;
    }
    newnode->next=temp->next;
    temp->next=newnode;
}
int main(){
    cout<<"\nCreation of linked list\n";
    cout<<"Enter size of linked list:";
    int size;
    cin>>size;
    create(size);
    cout<<"\nDisplaying linked list\n";
    display(size);
    cout<<"\nInsertion at beginning\n";
    insatbeg();
    display(size+1);
    cout<<"\nInsertion at end\n";
    insatend();
    display(size+2);
    cout<<"\nInsertion at given position\n";
    int val;
    cout<<"Enter position you want to insert the value:\n";
    cin>>val;
    insatpos(val);
    display(size+3);
    cout<<"\nAddress of head : "<<head<<"\n";
    return 0;
}