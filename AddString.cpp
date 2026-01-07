#include<bits/stdc++.h>
using namespace std;

string addString(string s1, string s2){
    int index1 = s1.size()-1;
    int index2 = s2.size()-1;
    string ans; int carry =0, sum;
    //As of now let s1>=s2
    while(index2>=0){
        sum = s1[index1]-'0'+s2[index2]-'0'+carry;
        carry = sum/10;
        char c = '0'+sum%10;
        ans+=c;
        index2--;
        index1--;
    }
    //as we assume earlier that s1>s2 then
    while(index1>=0){
        sum = s1[index1]-'0'+carry;
        carry = sum/10;
        char c = '0'+sum%10;
        ans+=c;
        index1--;
}
if(carry){
    ans+=carry+'0';
}
    reverse(ans.begin(), ans.end());
    return ans;
}

string add(string s1, string s2){
    if(s1.size()<s2.size()){
        return addString(s2,s1);
    }
    else{
        return addString(s1, s2);
    }
}
int main(){
    string s1 = "1234";
    string s2 = "456789";
    cout<<add(s1,s2);
    return 0;
}
//TC = O(max(s1,s2))
//SC = = O(max(s1,s2))