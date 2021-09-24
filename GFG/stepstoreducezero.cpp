#include <bits/stdc++.h>
using namespace std;
int stepstoreducezero(int n){
	if (n==0)return 0;
	if(n%2==0)return 1+stepstoreducezero(n/2);
	if(n%2) return 1+stepstoreducezero(n-1);
}
int main(){
	cout<<stepstoreducezero(14);
	return 0;
}