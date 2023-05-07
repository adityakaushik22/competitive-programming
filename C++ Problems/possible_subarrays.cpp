#include<bits/stdc++.h>
using namespace std;



int main(){
	int arr[]={-1,4,7,2};

	int n=4;

	// hum possible subarrays me starting and ending part start me rakhte hai so woh wahi rahenge so i,j 2 loop uske liye and print ke liye ek aur loop lagana padta hai usse poore subarrays print ho jayenge.
	for(int i=0;i<n;i++){ 
		for(int j=i;j<n;j++){
			for(int k=i;k<=j;k++){
				cout<<arr[k]<<" ";
			}
			cout<<endl;
		}
		
	}  
}