#include<bits/stdc++.h>
using namespace std;

int smallestDistinctWindow(string s){
    vector<int> count(256,0);
    int first = 0, second = 0, len = s.size(), diff = 0;

    // Count total distinct characters
    while(first < s.size()){
        if(count[s[first]] == 0){
            diff++;
        }
        count[s[first]]++;
        first++;
    }

    // Reset count array
    for(int i = 0; i < 256; i++){
        count[i] = 0;
    }

    first = 0;

    while(second < s.size()){
        // Expand window
        if(count[s[second]] == 0){
            diff--;
        }
        count[s[second]]++;
        second++;

        // Shrink window
        while(diff == 0){
            len = min(len, second - first);
            count[s[first]]--;
            if(count[s[first]] == 0){
                diff++;
            }
            first++;
        }
    }
    return len;
}

int main(){
    string s = "AABBBCBBA";
    cout << smallestDistinctWindow(s);
    return 0;
}
//TC = O(n)
//SC = O(1)
