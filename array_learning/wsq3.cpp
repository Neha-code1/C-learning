#include <iostream>
using namespace std;

int main() {
    int i, n, arr[100];

    cout << "Enter the size of array: ";
    cin >> n;

    for(i = 0; i < n; i++) {
        cout << "Enter element no. " << i + 1 << ": ";
        cin >> arr[i];
    }

    int largest = arr[0];
    int second = arr[0];

    for(i = 1; i < n; i++) {
        if(arr[i] > largest) {
            largest = arr[i];
        }
    }

    for(i = 0; i < n; i++) {
        if(arr[i] > second && arr[i] < largest) {
            second = arr[i];}
    }

    cout << "Second largest element is: " << second;

    return 0;
}