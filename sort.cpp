#include<iostream>
using namespace std;

struct node
{
    int data;
    node *next;
};

node *head = NULL;

// CREATE ORIGINAL LIST
void create(int n)
{
    node *temp;
    node *newnode;

    for(int i = 0; i < n; i++)
    {
        newnode = new node;

        cout << "Enter value to be inserted: ";
        cin >> newnode->data;

        newnode->next = NULL;

        if(head == NULL)
        {
            head = newnode;
            temp = newnode;
        }
        else
        {
            temp = head;

            while(temp->next != NULL)
            {
                temp = temp->next;
            }

            temp->next = newnode;
        }
    }
}

// DISPLAY LIST
void display(node *head)
{
    node *temp = head;

    cout << "Values:\n";

    while(temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }

    cout << "NULL\n";
}

// COPY ORIGINAL LIST
node* copylist()
{
    node *temp = head;

    node *copyhead = NULL;
    node *copytemp = NULL;

    while(temp != NULL)
    {
        node *newnode = new node;

        newnode->data = temp->data;
        newnode->next = NULL;

        if(copyhead == NULL)
        {
            copyhead = newnode;
            copytemp = newnode;
        }
        else
        {
            copytemp->next = newnode;
            copytemp = newnode;
        }

        temp = temp->next;
    }

    return copyhead;
}

// SORT THE COPIED LIST
void sortlist(node *copyhead)
{
    int temp;

    node *i;
    node *j;

    for(i = copyhead; i != NULL; i = i->next)
    {
        for(j = i->next; j != NULL; j = j->next)
        {
            if(i->data > j->data)
            {
                temp = i->data;
                i->data = j->data;
                j->data = temp;
            }
        }
    }
}

int main()
{
    int n;

    cout << "Enter number of nodes: ";
    cin >> n;

    // Create L
    create(n);

    cout << "\nOriginal List L:\n";
    display(head);

    // Create L'
    node *copyhead = copylist();

    cout << "\nCopied List L':\n";
    display(copyhead);

    // Sort L'
    sortlist(copyhead);

    cout << "\nSorted List L':\n";
    display(copyhead);

    return 0;
}