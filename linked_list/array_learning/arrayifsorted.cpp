#include<iostream>
using namespace std;
int main(){
     int n;
    cout<<"Enter size:\n";
    cin>>n;
    int arr[n],i;
    for(i=0;i<n;i++){
        cout<<"Enter element : ";
        cin>>arr[i];
        cout<<"\n";
    }
    bool sorted=true;
    for(i=0;i<(n-1);i++){
        if(arr[i]>arr[i+1]){
            sorted=false;
            break;
        }
    }
    if(sorted){
        cout<<"Sorted array";
    }
    else{
        cout<<"Not sorted";
    }
    return 0;
}
