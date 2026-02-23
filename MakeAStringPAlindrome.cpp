#include<bits/stdc++.h>
using namespace std;

int MinChar(string s){
    int size = s.size();
    string rev = s;
    reverse(rev.begin(), rev.end());
    s+='$';
    s+=rev;
    int n = s.size();
    //We have to calculate lps now
    vector<int> lps(n,0);
    int pre = 0, suff = 1;
    while(suff<n){
        //if matches
        if(s[pre] == s[suff]){
            lps[suff] = pre+1;
            pre++;
            suff++;
        }
        //If not matches
        else{
            if(pre == 0){
               suff++; 
            }
            else{
                pre = lps[pre-1];
            }
        }
    }
    return size- lps[n-1];
}
int main(){
    string s = "aaaotcaakr";
    cout<<MinChar(s);
    return 0;
}
//TC = O(size)
//SC = O(n)
