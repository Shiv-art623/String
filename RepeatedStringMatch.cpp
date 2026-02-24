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
int KMP_MATCH(string haystack, string needle){
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
    if(second == needle.size()) { return 1;}
    return -0;
}
int repeatedStringMAtch(string s1, string s2){
    if(s1 == s2) return 1;
    int repeat = 1;
    string temp = s1;
    while(temp.size()<s2.size()){
        temp+=s1;
        repeat++;
    }
    if(KMP_MATCH(temp,s2) == 1) return repeat;
    if(KMP_MATCH(temp+s1, s2) == 1) return repeat+1;
    return -1;
}
int main(){
    string s1= "abcd";
    string s2= "cdabcdab";
    cout<<repeatedStringMAtch(s1,s2);
    return 0;
}