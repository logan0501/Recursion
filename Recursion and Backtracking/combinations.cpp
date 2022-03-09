#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> ans;
void helper(int idx,int k,vector<int> &cur,int n){
	if(cur.size()==k){
		ans.push_back(cur);return;
	}
	for(int i=idx;i<=n;i++){
		cur.push_back(i);
		helper(i+1,k,cur,n);
		cur.pop_back();
	}
}
 vector<vector<int>> combine(int n, int k) {
 	vector<int> cur;
    helper(1,k,cur,n);
    return ans;
 }
int main(){
	vector<vector<int>> v = combine(4,2);
	for(auto a:v){for(auto b:a)cout<<b;cout<<endl;}
	return 0;
}