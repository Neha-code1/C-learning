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
int main(){
    create(4);
    display(4);
    cout<<"\nAddress of head : "<<head<<"\n";
    return 0;
}