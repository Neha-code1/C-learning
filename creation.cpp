#include<iostream>
using namespace std;
struct node{
    int data;
    node *next;
};
int main(){
    node *first=new node;
    node *sec=new node;
    node *third=new node;
    first->data=10;
    sec->data=20;
    third->data=30;
    first->next=sec;
    sec->next=third;
    third->next=NULL;
    node *head=first;
    node *temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" -> ";
        temp=temp->next;
    }
}