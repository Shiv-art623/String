#include<bits/stdc++.h>
using namespace std;
int smallestWindow(string s){
    int n = s.size();
    
    unordered_set<char> unique;
    for(char c : s){
        unique.insert(c);
    }
    int totalUnique = unique.size();
    int minlen = n;
    for(int i =0; i<n; i++){
        unordered_set<char> temp;
        for(int  j =i; j<n; j++){
           temp.insert(s[j]);
           if(temp.size() == totalUnique){
            minlen = min(minlen, j-i+1);
            break;
           }
        }

    } 
    return minlen;
}
int main(){
    string s ;
    getline(cin,s);
    cout<<smallestWindow(s);
    return 0;
}
//TC = o(n^3)