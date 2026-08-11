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
    int max=arr[0];
    for(i=1;i<n;i++){
        if(arr[i]>max){
        max=arr[i];
    }}
    cout<<"Max element is\t\n"<<max;
}