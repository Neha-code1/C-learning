#include <iostream>
using namespace std;

int main() {

    int n;

    cout << "Enter size:\n";
    cin >> n;

    int arr[n], i, j, temp;

    // Input
    for(i = 0; i < n; i++) {
        cout << "Enter element 0, 1 or 2: ";
        cin >> arr[i];
    }

    // Sorting
    for(i = 0; i < n; i++) {

        for(j = i + 1; j < n; j++) {

            if(arr[i] > arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    // Output
    cout << "Sorted array: ";

    for(i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}