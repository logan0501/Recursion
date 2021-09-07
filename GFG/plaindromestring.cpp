#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string str,int start,int end){
	if(start>=end)return true;
	return ((str[start]==str[end]) && isPalindrome(str,start+1,end-1));
}
bool checkpalindrome(string str){
	return isPalindrome(str,0,str.length()-1);
}
int main(){
	cout<<checkpalindrome("logan");
	return 0;
}