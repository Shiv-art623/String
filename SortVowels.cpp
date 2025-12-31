#include<bits/stdc++.h>
using namespace std;

string sortVowels(string &s){
    vector<int> lower(26,0);
    vector<int> upper(26,0);
    for(int i =0; i<s.size(); i++){ //O(N)
        if(s[i] == 'a'|| s[i]=='e'|| s[i]=='i'|| s[i]=='o'|| s[i]=='u'){
            lower[s[i]-'a']++;
            s[i] = '#';
        }
      else  if(s[i] == 'A'|| s[i]=='E'|| s[i]=='I'|| s[i]=='O'|| s[i]=='U'){
            upper[s[i]-'A']++;
            s[i] = '#';
    }
}
string ans;
for(int i =0; i<26; i++){ //O(N)
    char c = 'A'+i;
    while(upper[i]){
        ans+=c;
        upper[i]--;
    }
}
for(int i =0; i<26; i++){ //O(N)
    char c = 'a'+i;
    while(lower[i]){
        ans+=c;
        lower[i]--;
    }
}
int first =0, second =0;
while(second<ans.size()){ //O(N)
    if(s[first] == '#'){
        s[first] = ans[second];
        second++;
    }
    first++;
}
return s;
}
int main(){
    string s = "lEetcOde";
    cout<<sortVowels(s);
    return 0;
}
//TC = O(N)
//SC = O(N)