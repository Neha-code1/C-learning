#include <iostream>
using namespace std;

void push(int *stack, int *top, int size) {
    int val;
    if(*top == size - 1) {
        cout << "Stack Overflow" << endl;
        return;
    }
    cout << "Enter value to be inserted: ";
    cin >> val;
    stack[++(*top)] = val;          // add 1 first, then store
    cout << val << " was pushed into stack" << endl;
}

void pop(int *stack, int *top) {
    if(*top == -1) {
        cout << "Stack Underflow" << endl;
        return;
    }
    cout << stack[*top] << " was popped" << endl;
    (*top)--;
}

void peek(int *stack, int top) {
    if(top == -1) {
        cout << "Stack is empty" << endl;
        return;
    }
    cout << "Element at top: " << stack[top] << endl;
}

void display(int *stack, int top) {
    if(top == -1) {
        cout << "Stack is empty" << endl;
        return;
    }
    for(int i = top; i >= 0; i--) {
        cout << stack[i] << endl;
    }
}

int main() {
    int stack[10];
    int top = -1;
    int choice;

    do {
        cout << "\nStack Menu\n";
        cout << "1. Push\n2. Pop\n3. Peek\n4. Display\n5. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch(choice) {
            case 1: push(stack, &top, 10); break;
            case 2: pop(stack, &top); break;
            case 3: peek(stack, top); break;
            case 4: display(stack, top); break;
            case 5: cout << "Exit" << endl; break;
            default: cout << "Invalid" << endl;
        }
    } while(choice != 5);

    return 0;
}