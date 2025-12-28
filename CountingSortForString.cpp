#include<bits/stdc++.h>
using namespace std;

string CountSort(string &s){
vector<int> alpha(26,0);
for(int i =0; i<s.size(); i++){
    alpha[s[i]-'a']++;
}
string ans;
for(int i =0; i<26; i++){
    char c = 'a'+i;
    while(alpha[i]){
        ans+=c;
        alpha[i]--;
    }
}
return ans;
}
int main(){
    string s;
  getline(cin,s);
  cout<<CountSort(s);
  return 0;
}
//TC = O(N)+O(N) approx O(N)
//SC = O(N)  we can improve this