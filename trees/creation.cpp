#include<iostream>
using namespace std;
struct node{
    int data;
    node* left;
    node* right;
};
node* create(){
    int val;
    cout<<"\nEnter value: \n";
    cin>>val;
    if(val==-1){
        return NULL;
    }
    node* newnode=new node;
    newnode->data=val;
    cout<<"\nEnter value of left node of \n"<<val;
    newnode->left=create();
    cout<<"\nEnter value of right node of \n"<<val;
    newnode->right=create();
    return newnode;
}
void display(node* root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    display(root->left);
    display(root->right);
}
int main(){
    node* root=create();
    cout<<"Memory address of root is "<<root;
    cout << "Preorder Traversal: ";
    display(root);
    return 0;
}