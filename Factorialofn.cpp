#include<bits/stdc++.h>
using namespace std;

vector <int> Factorial( int n){
    vector <int> ans(1,1);
       while(n>1){
    int carry=0,res,size = ans.size();
    for(int i =0; i<size; i++){
        res = ans[i]*n+carry;
        ans[i] = res%10;
        carry = res/10;;
    }
    while(carry){
        
        ans.push_back(carry%10);
        carry/=10;

    }
    n--;
    }
    reverse(ans.begin(), ans.end());
    return ans;
} 
int main(){
    int n = 8;
    vector<int> ans = Factorial(n);
    for(auto it : ans){
        cout<<it;
    }
    return 0;
}
//TC = O(n*no. of digits)
//SC = O(no. of digits)