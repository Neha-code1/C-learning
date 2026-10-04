// Online C++ compiler to run C++ program online
#include <iostream>
#include<unordered_map>
#include<vector>
#include<algorithm>
using namespace std;
int main() {
    vector<int> v = {3, 2, 4, 3, 6};
    int target = 6;
    unordered_map<int,int>uno;
    for(int i=0;i<v.size();i++){
        int needed=target-v[i];
        if(uno.find(needed)!=uno.end()){
            cout<<"["<<i<<","<<uno[needed]<<"]"<<endl;
            return 0;
        }
        uno[v[i]]=i;
    }
    cout<<"No element found";
    return 0;
}