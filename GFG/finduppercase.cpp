#include<bits/stdc++.h>
using namespace std;
char firstUpper(string s,int i){
	if(s[i]=='\0')return 0;
	if(isupper(s[i]))return s[i];
	return firstUpper(s,i+1);
}
int main(){

	cout<<firstUpper("lOgan",0);
	return 0;
}