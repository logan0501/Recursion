#include<bits/stdc++.h>
using namespace std;
int productOf2Nums(int x,int y){
	if(y==1)return x;
	return x+productOf2Nums(x,y-1);
}
int main(){
	cout<<productOf2Nums(5,2);
	return 0;
}