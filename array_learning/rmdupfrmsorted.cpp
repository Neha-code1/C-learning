#include<iostream>
using namespace std;
int main(){
     int n;
    cout<<"Enter size:\n";
    cin>>n;
    int arr[n],i;
    cout<<"Enter sorted array with duplicates is fine\n";
    for(i=0;i<n;i++){
        cout<<"Enter element : ";
        cin>>arr[i];
        cout<<"\n";
    }
    for(i=0;i<(n-1);i++){
        if(arr[i]==arr[i+1]){
            int temp;
            for(temp=i;temp<(n-1);temp++){
                arr[temp]=arr[temp+1];
            }
             n=n-1;
             i=i-1;
        }
    }
    cout<<"After removing duplicates:\n";
    for(i=0;i<n;i++){
        cout<<arr[i];
        cout<<"\n";
    }
}