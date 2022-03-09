#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> res;
void generate(vector<int> &v,int i,vector<int> &cur){
	if(i==v.size()){
		res.push_back(cur);
		return;
	}
	cur.push_back(v[i]);
	generate(v,i+1,cur);
	cur.pop_back();
	generate(v,i+1,cur);
}
int main(){
	vector<int> v={1,2,3};
	vector<int> cur;
	generate(v,0,cur);
	for(auto a:res){
		for(auto b:a)cout<<b;
		cout<<endl;
	}
	return 0;
}