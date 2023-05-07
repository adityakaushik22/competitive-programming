#include<bits/stdc++.h>
using namespace std;


bool sum_k(int index,std::vector<int> &ds,std::vector<int> &arr,int initial_sum,int target_sum,int n){
	if(index==n){

		// condition satisfied

		if(initial_sum==target_sum){
			for(auto it:ds){
				cout<<it<<" ";

			}
			cout<<endl;
			return true;
		}// not satisfied
		else return false;
	}

	ds.push_back(arr[index]);
	initial_sum+=arr[index];

	if(sum_k(index+1,ds,arr,initial_sum,target_sum,n)==true){
		return true; // by this we're making a check that it only runs once and does not do future recursion calls so we'll get the required answer.
	}

	ds.pop_back();
	initial_sum-=arr[index];

	if(sum_k(index+1,ds,arr,initial_sum,target_sum,n)==true){
		return true;
	}

	return false;

}


int main(){
	
	std::vector<int> arr={1,2,1};

	int sum=2;
	int n=arr.size();

	std::vector<int> ds;

	sum_k(0,ds,arr,0,sum,n);  
} 		