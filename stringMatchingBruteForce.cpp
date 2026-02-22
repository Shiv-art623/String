#include<bits/stdc++.h>
using namespace std;

int StringMatch( string s1, string s2){
    int n = s1.size(), m = s2.size();
    for(int i =0; i<n; i++){
        int first = i, second = 0;
        while(second<=n-m){
            if(s1[first]!= s2[second]){
                break;
            }
            else first++; second++;
        }
        if (second == m){
            return first- second;
        }
    }
    return -1;
}
int main(){
    string s1 = "abcabdefg";
    string s2 = "def";
    cout<<StringMatch(s1,s2);
    return 0;
}
// TC = O(nm)
//SC = O(1)