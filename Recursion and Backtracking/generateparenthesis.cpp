#include<bits/stdc++.h>
using namespace std;
vector<string> res;
void helper(string &&cur,int n,int open,int close,int i){
	if(i==2*n){res.push_back(cur);return;}
	if(open<n)helper(cur+'(',n,open+1,close,i+1);
	if(close<open)helper(cur+')',n,open,close+1,i+1);
}
vector<string> generateParenthesis(int n) {
	helper("",n,0,0,0);
	return res;
}
int main(){
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	generateParenthesis(3);
	for(auto a:res)cout<<a<<endl;
	return 0;
}