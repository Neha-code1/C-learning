#include<iostream>
using namespace std;
int main(){
     int n;
    cout<<"Enter size:\n";
    cin>>n;
    int arr[n],i;
    cout<<"Enter an array\n";
    for(i=0;i<n;i++){
        cout<<"Enter element : ";
        cin>>arr[i];
        cout<<"\n";
    }
    int temp=arr[0];
    for(i=0;i<(n-1);i++){
        arr[i]=arr[i+1];
    }
    arr[n-1]=temp;
    cout<<"Array after left shift by one place is:\n";
    for(i=0;i<n;i++){
        cout<<arr[i];
        cout<<"\n";
    }
}