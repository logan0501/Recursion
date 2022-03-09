#include<bits/stdc++.h>
using namespace std;
vector<string> res;
void generate(string s,int i,string cur){
	if(i==s.size()){res.push_back(cur);return;}
	generate(s,i+1,cur+s[i]);
	generate(s,i+1,cur);
}
int main(){
	string s="abc";
	generate(s,0,"");
	for(auto a:res)cout<<a<<endl;
	return 0;
}