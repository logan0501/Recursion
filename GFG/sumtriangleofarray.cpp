#include<bits/stdc++.h>
using namespace std;
void printTriangleFromArray(int arr[],int n){
	if(n==0)return;
	int temp[n-1];

	for(int i=0;i<n-1;i++){
		temp[i]=arr[i]+arr[i+1];
	}
	printTriangleFromArray(temp,n-1);
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}
int main(){
	int arr[]={1,2,3,4,5};
	printTriangleFromArray(arr,5);
	return 0;
}