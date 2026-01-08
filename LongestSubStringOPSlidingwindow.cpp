#include<bits/stdc++.h>
using namespace std;

int LongestSubString(string s){
    vector <bool> count(256,0);
    int first =0, second =0, len =0;
    while(second<s.size()){
        while(count[s[second]]){
            count[s[first]]=0;
            first++;
        }
        count[s[second]]=1;
        len = max(len,second-first+1);
        second++;
    }
    return len;
}
int main(){
    string s ;
    getline(cin,s);
    cout<<LongestSubString(s);
    return 0;
}
//TC = O(n)
//SC = O(256) ~~ O(1)