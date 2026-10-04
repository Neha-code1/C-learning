#include <iostream>
using namespace std;

void display(int *arr, int *n) {
    for(int i = 0; i < *n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void create(int *arr, int *n) {
    cout << "Enter size of the array: ";
    cin >> *n;
    for(int i = 0; i < *n; i++) {
        cout << "Enter array element: ";
        cin >> arr[i];
    }
}

int insert(int *arr, int *n, int *pos) {
    int val;
    cout << "Enter value to be inserted: ";
    cin >> val;
    for(int i = *n; i > *pos; i--) {
        arr[i] = arr[i - 1];
    }
    arr[*pos] = val;
    (*n)++;
    return *n;
}

int delp(int *arr, int *n, int *pos) {
    for(int i = *pos; i < *n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    (*n)--;
    return *n;
}

void delv(int *arr, int *n, int *val) {
    int pos = -1;
    for(int i = 0; i < *n; i++) {
        if(arr[i] == *val) {
            pos = i;
            break;
        }
    }
    if(pos != -1) {
        delp(arr, n, &pos);
    } else {
        cout << "Value not found" << endl;
    }
}

void insertBefore(int *arr, int *n, int *val) {
    int pos = -1;
    for(int i = 0; i < *n; i++) {
        if(arr[i] == *val) {
            pos = i;
            break;
        }
    }
    if(pos == -1) {
        cout << "Value not found" << endl;
        return;
    }
    insert(arr, n, &pos);
}

int mergearray(int *arr1, int *arr2, int *arr3, int *n1, int *n2) {
    int i = 0, j = 0, k = 0;
    while(i < *n1 && j < *n2) {
        if(arr1[i] < arr2[j]) {
            arr3[k++] = arr1[i++];
        }
        else if(arr1[i] > arr2[j]) {
            arr3[k++] = arr2[j++];
        }
        else {
            arr3[k++] = arr1[i++];
            arr3[k++] = arr2[j++];
        }
    }
    while(i < *n1) {
        arr3[k++] = arr1[i++];
    }
    while(j < *n2) {
        arr3[k++] = arr2[j++];
    }
    return k;
}

int main() {
    int arr[20], n, pos, val;

    // (i) Create and (ii) Display
    create(arr, &n);
    cout << "\nOriginal Array: ";
    display(arr, &n);

    // (iii) Insert at a given position
    cout << "\nInsert at Given Position\n";
    cout << "Enter position: ";
    cin >> pos;
    pos--;                       // user enters 1-based position
    if(pos < 0 || pos > n) {
        cout << "Invalid position" << endl;
    } else {
        insert(arr, &n, &pos);
        cout << "Array: ";
        display(arr, &n);
    }

    // (iv) Delete a given value
    cout << "\nDelete a Given Value\n";
    cout << "Enter value: ";
    cin >> val;
    delv(arr, &n, &val);
    cout << "Array: ";
    display(arr, &n);

    // (v) Delete at a given position
    cout << "\nDelete at Given Position\n";
    cout << "Enter position: ";
    cin >> pos;
    pos--;
    if(pos < 0 || pos >= n) {
        cout << "Invalid position" << endl;
    } else {
        delp(arr, &n, &pos);
        cout << "Array: ";
        display(arr, &n);
    }

    // (vi) Insert before a given value
    cout << "\nInsert Before a Given Value\n";
    cout << "Enter existing value: ";
    cin >> val;
    insertBefore(arr, &n, &val);
    cout << "Array: ";
    display(arr, &n);

    // (vii) Merge two sorted arrays
    int a[10], b[10], c[20], n1, n2, n3;
    cout << "\nMerge Two Sorted Arrays\n";
    cout << "First array (enter in sorted order)\n";
    create(a, &n1);
    cout << "Second array (enter in sorted order)\n";
    create(b, &n2);
    n3 = mergearray(a, b, c, &n1, &n2);
    cout << "Merged Sorted Array: ";
    display(c, &n3);

    return 0;
}