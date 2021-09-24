#include<bits/stdc++.h>
using namespace std;
void insertionsort(int arr[],int i,int n){
	if(i==n)return;
	for(int j=i+1;j<n;j++){
		if(arr[j]<arr[i])swap(arr[j],arr[i]);
	}
	insertionsort(arr,i+1,n);
}
int main(){
	int arr[]={1,5,2,3,9,4,3};
	insertionsort(arr,0,7);
	for(int a:arr)cout<<a;
	return 0;
}