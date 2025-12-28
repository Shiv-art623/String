#include<bits/stdc++.h>
using namespace std;

bool isPangram(string &sentense){
    vector<bool> alpha(26,0);
    for(int i =0; i<sentense.size(); i++){
        alpha[sentense[i]-'a'] = 1;
    }
    for(int i =0; i<26; i++){
        if(alpha[i] == 0){
            return 0;
        }
    }
 return 1;
}
int main(){
    string s = "thequickbrownfoxjumpsoverthelazydog";
    cout<<isPangram(s);
    return 0;
}
//TC = O(N)+O(26) approx = O(N)
//SC = O(26) approx = O(1)
