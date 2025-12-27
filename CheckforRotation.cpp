#include<bits/stdc++.h>
using namespace std;

void ClockwiseRotation(string &s){
    char c = s[s.size()-1];
    int index = s.size()-2;
    while(index>=0){
        s[index+1] = s[index];
        index--;
    }
    s[0] = c;
}
void AnticlockwiseRotation(string &s){
    char c = s[0];
    int index = 1;
    while(index<s.size()){
        s[index-1] = s[index];
        index++;
    }
    s[s.size()-1] = c;
}
int main(){
    string s1 = "amazon";
    string s = s1;
    string s2 = "azonam";
    ClockwiseRotation(s1);
    ClockwiseRotation(s1);
    if(s1 == s2) {cout<<"true";}
    else {cout<<"false";}

    AnticlockwiseRotation(s);
    AnticlockwiseRotation(s);
    if(s == s2) {cout<<"true";}
    else {cout<<"false";}

    return 0;
}