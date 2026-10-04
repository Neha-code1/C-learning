#include<iostream>
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
    int target;
    cout<<"Enter a traget no.:";
    cin>>target;
    for(i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j]==target){
                cout<<"YES";
                return 0;
            }
        }
    }
    cout<<"NO";
    return 0;
}