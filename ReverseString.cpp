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
    cout<<s<<endl;;

    //find a size of a string without .size() function
    int size = 0;
    while(s[size]!= '\0'){
        size++;
    }
    cout<<size;

    //Check for Palindrome
    int start = 0, en = s.size()-1;
    while(start<en){
        if(s[start]!= s[en]) {
        cout<<"Not a palindrome"<<endl;
        return 0;
        }
        start++;
        en--;
    }
    cout<<"A palindrome";
    return 0;
}