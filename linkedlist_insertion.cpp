#include<iostream>
using namespace std;
struct node{
    int data;
    node *next;
};
struct node *head=NULL;
void insert_beg(){
        node *newnode=new node;
        cout<<"Enter data to be stored:\t\n";
        cin>>newnode->data;
        newnode->next=head;
        head=newnode;
}
void insert_end(){
    node *newnode=new node;
    cout<<"Enter data to be inserted:\n";
    cin>>newnode->data;
    node *temp;
    temp=head;
    if(head==NULL){
        newnode->next=NULL;
        head=newnode;
        return;
    }
    while(temp->next!=NULL){
        temp=temp->next;
    }
    newnode->next=NULL;
    temp->next=newnode;
}
void display(){
    node *temp=head;
    while(temp!=NULL){
        cout<<"Current address : "<<temp;
        cout<<"\n";
        cout<<"Data : "<<temp->data;
        cout<<"\n";
        cout<<"Next address : "<<temp->next;
        cout<<"\n";
        cout<<"-------------------------------";
        cout<<"\n";
        temp=temp->next;
    }
}
int main()
{
    int choice;

    do
    {
        cout << "\n===== LINKED LIST MENU =====\n";
        cout << "1. Insert at Beginning\n";
        cout << "2. Insert at End\n";
        cout << "3. Display\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                insert_beg();
                break;

            case 2:
                insert_end();
                break;

            case 3:
                display();
                break;

            case 4:
                cout << "Program Exited Successfully." << endl;
                break;

            default:
                cout << "Invalid Choice!" << endl;
        }

    } while(choice != 4);

    return 0;
}