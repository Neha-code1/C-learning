// Online C++ compiler to run C++ program online
#include <iostream>
#include<map>
#include<vector>
#include<algorithm>
using namespace std;
int main() {
    vector<int>v={4,5,1,2,1,4,5};
    map<int,int>freq;
    for(int x : v){
        freq[x]++;
    }
     for (int x : v) {
        if (freq[x] == 1) {
            cout << x;
            break;
        }
    }
    return 0;
}