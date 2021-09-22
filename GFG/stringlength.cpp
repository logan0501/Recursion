#include <bits/stdc++.h>
using namespace std;
int stringlength(string s,int i){
	if(s[i]=='\0')return i;
	return stringlength(s,i+1);
}
int main(){
	cout<<stringlength("loganathan",0);
	return 0;
}