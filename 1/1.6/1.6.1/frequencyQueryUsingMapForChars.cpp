// input

// aezakmihesoYamddyyesteryear
// 4
// a
// y
// Y
// h


#include <bits/stdc++.h>

using namespace std;

int main() {
    string str;
    cin >> str;
    cout << str << endl;

    // pre-computation

    map<char,int> charFreqMap;

    for(char ch : str){
        charFreqMap[ch]++;
    }


    int q;
    cin >> q;
    cout << "char\toccurance" << endl;
    while(q--){
        char ch;
        cin >> ch;
        // fetch
        cout << ch << "\t" << charFreqMap[ch] << endl;
    }

    return 0;
}