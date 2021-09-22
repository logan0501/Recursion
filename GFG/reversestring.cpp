#include<bits/stdc++.h>
using namespace std;
string rev;
void reverse(string s,int i){
	if(i==0)return ;
	rev+=s[i-1];
	reverse(s,i-1);
}
int main(){
	string s="Loganathan";
	reverse(s,s.length());
	cout<<rev;
	return 0;
}