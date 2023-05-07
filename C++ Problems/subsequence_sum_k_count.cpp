#include<bits/stdc++.h>
using namespace std;


int sum_k(int index,std::vector<int> &arr,int initial_sum,int target_sum,int n){
	if(index==n){

		// condition satisfied

		if(initial_sum==target_sum){
			return 1;
		}// not satisfied
		else return 0;
	}
	initial_sum+=arr[index];

	int l=sum_k(index+1,arr,initial_sum,target_sum,n);

	initial_sum-=arr[index];

	int r=sum_k(index+1,arr,initial_sum,target_sum,n);

	return l+r;

}


int main(){
	
	std::vector<int> arr={1,2,1};

	int sum=2;
	int n=arr.size();

	cout<<sum_k(0,arr,0,sum,n)<<endl;  
} 		