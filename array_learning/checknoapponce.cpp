#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter size:\n";
    cin >> n;

    int arr[n], i, j;

    // Input
    for(i = 0; i < n; i++) {
        cout << "Enter element: ";
        cin >> arr[i];
        cout << "\n";
    }

    // Find element appearing once
    for(i = 0; i < n; i++) {
        int count = 0;

        for(j = i; j < n; j++) {
            if(arr[i] == arr[j]) {
                count += 1;
            }
        }

        if(count == 1) {
            cout << "Number appearing once: " << arr[i];
        }
    }

    return 0;
}