#include<bits/stdc++.h>
using namespace std;
void bubbleSort(int arr[],int n){
	if(n==1)return;
	for(int i=0;i<n-1;i++){
		if(arr[i]>arr[i+1])swap(arr[i],arr[i+1]);

	}
	bubbleSort(arr,n-1);
}
int main(){
	int arr[]={1,4,2,6,3};
	bubbleSort(arr,5);
	for(int a:arr)cout<<a<<endl;
	return 0;
}