#include <bits/stdc++.h>
using namespace std;
int digitalRoot(int n){
	if(n<10)return n;
	int sum = n%10+digitalRoot(n/10);
	return digitalRoot(sum);
}
int main(){
	cout<<digitalRoot(1);
	return 0;
}