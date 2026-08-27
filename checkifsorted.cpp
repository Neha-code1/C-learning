#include <iostream>
using namespace std;

int main() {
    int n;
    
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];

    cout << "Enter the elements: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    bool sorted = true;

    for(int i = 0; i < n - 1; i++) {
        if(arr[i] > arr[i + 1]) {
            sorted = false;
            break;
        }
    }

    if(sorted)
        cout << "true";
    else
        cout << "false";

    return 0;
}