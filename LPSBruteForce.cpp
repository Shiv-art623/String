#include<bits/stdc++.h>
using namespace std;
int LongestPrefixSuffix(string s){
vector <int> lps(s.size(), 0);
int pre =0, suff = 1;
while(suff<s.size()){
    if(s[pre]==s[suff]){
        lps[suff]=pre+1;
        pre++;
        suff++;
    }
    else{
        if(pre==0){
           lps[suff] = 0;
           suff++;
        }
        else{
            pre = lps[pre-1];
        }  
    }
}
return lps[s.size()-1];
}


int main(){
    string s = "ABCDEABCD";
    cout<<LongestPrefixSuffix(s);
    return 0;
}