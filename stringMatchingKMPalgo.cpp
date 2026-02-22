#include<bits/stdc++.h>
using namespace std;

void Findlps( vector<int> &lps, string s ){
    int pre= 0, suff = 1;
    while(suff< s.size()){
        //IF match
        if(s[pre] == s[suff]){
            lps[suff]= pre+1;
            pre++;
            suff++;
        }
        // IF not match
        else{
            if(pre == 0){
             lps[suff] = 0;
             suff++;
            }
            else{
                pre = lps[pre-1];
            }
        }
    }
}
int StringMatch(string haystack, string needle){
    vector <int> lps(needle.size(), 0);
    Findlps(lps, needle);
    int first =0, second =0;
    while(second< needle.size() && first< haystack.size()){
        // If match
        if(needle[second] == haystack[first]){
            second++;
            first++;
        }
        //IF nOt
        else{
            if(second == 0){
                first++;
            }
            else{
                second = lps[second-1];
            }
        }
    }
    //ans exist
    if(second == needle.size()) { return first-second;}
    return -1;
}
int main(){
    string s1 = "onionionson";
    string s2 = "onions";
    cout<<StringMatch(s1,s2);
    return 0;
}
//TC = O(n+m)
//sc = O(m)