#include<bits/stdc++.h>
using namespace std;

int main(){
    string s ;
    getline(cin,s);
    int st = 0, end = s.size()-1;
    while(st<end){
        swap(s[st], s[end]);
        st++;
        end--;
    }
    cout<<s;
    return 0;
}