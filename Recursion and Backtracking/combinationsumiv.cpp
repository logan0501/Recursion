#include<bits/stdc++.h>
using namespace std;
int c=0;
void helper(vector<int> nums,int target,int idx){
	cout<<target<<endl;
		if(target<0)return;
	if(target==nums[idx]){
		c++;
		return;
	}

	for(int i=idx;i<nums.size();i++){
		helper(nums,target-nums[i],i);
	}
}
int combinationSum4(vector<int> nums, int target) {
    helper(nums,target,0);
    return c;    
}
int main(){
	int sum = combinationSum4({1,2},4);
	cout<<sum;
	return 0;
}