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
void sortlist(){
    int temp;
    node *i;
    node *j;
    for(i=head;i!=NULL;i=i->next){
        for(j=i->next;j!=NULL;j=j->next){
            if(i->data>j->data){
                temp=i->data;
                i->data=j->data;
                j->data=temp;
            }
        }
    }
}
int main(){
    create(4);
    display(4);
    sortlist();
    cout << "\nSorted list:\n";
    display(4);
    return 0;
}