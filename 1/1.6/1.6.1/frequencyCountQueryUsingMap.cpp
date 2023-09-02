// input

// 8
// 12 1 0 3 3 4 3 8
// 3
// 3 12 0



#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];

    for(int i=0;i<n;i++){
        cin >> arr[i]; 
    }

    // pre-computation

    map<int,int> freqMap;

    for(int i=0;i<n;i++){
        freqMap[arr[i]]++;
    }

    int q;
    cin >> q;
    cout << "number\toccurance" << endl;
    while(q--){
        int number;
        cin >> number;
        // fetch
        cout << number << "\t" << freqMap[number] << endl;
    }

    return 0;
}