#include<bits/stdc++.h>
using namespace std;
int sumofdigits(int n){
	if(n<=9)return n;
	return n%10 + sumofdigits(n/10);
}
int main(){
	cout<<sumofdigits(124);
	return 0;
}