#include<bits/stdc++.h>
using namespace std;
int rec(int n){
	if(n==1)return 1;
	if(n==2)return 2;
	if(n==3)return 4;
	return rec(n-1)+rec(n-2)+rec(n-3);
}
int main(){
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	cout<<rec(4);	
	return 0;
}