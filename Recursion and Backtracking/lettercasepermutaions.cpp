#include<bits/stdc++.h>
using namespace std;
vector<string> letterCasePermutation(string S) {
        vector<string> res;
        backtrack(S, 0, res);
        return res;
}
void backtrack(string &s,int l,vector<string> &res){
    if(l==s.size()){
        res.push_back(s);
        return;
    }
    backtrack(s,l+1,res);
    if(isalpha(s[l])){
        s[l]^=32;
        backtrack(s,l+1,res);
    }
}
int main(){

    return 0;
}