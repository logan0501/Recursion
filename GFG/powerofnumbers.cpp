#include<bits/stdc++.h>
using namespace std;
int reverseNumber(int n){
	int sum=0;
	while(n<=0){
		int digit = sum%10;
		sum=sum*10+digit;
		n/=10;
	}
	return sum;
}
int main(){
	cout<<reverseNumber(1);
	return 0;
}