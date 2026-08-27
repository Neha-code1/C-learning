#include <iostream>
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

// REMOVE LOOP
void remloop(node *head)
{
    node *slow = head;
    node *fast = head;

    // Check for loop
    while(slow != NULL && fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;

        // Loop detected
        if(slow == fast)
        {
            slow = head;

            // Find the last node of the loop
            while(slow->next != fast->next)
            {
                slow = slow->next;
                fast = fast->next;
            }

            // Remove loop
            fast->next = NULL;

            return;
        }
    }
}

// MAIN FUNCTION
int main()
{
    int n;

    cout << "Enter number of nodes: ";
    cin >> n;

    create(n);

    cout << "\nOriginal linked list:\n";
    display(head);

    // Creating a loop for testing
    // Example: last node points to second node
    if(head != NULL && head->next != NULL)
    {
        node *temp = head;

        while(temp->next != NULL)
        {
            temp = temp->next;
        }

        temp->next = head->next;
    }

    remloop(head);

    cout << "\nLinked list after removing loop:\n";
    display(head);

    return 0;
}