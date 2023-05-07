#include<bits/stdc++.h>
using namespace std;



int main(){
	//subarray: continous part of the array

	int n;
	cin>>n;
	int arr[n];
	for (int i = 0; i < n; ++i)
	  {
	  	cin>>arr[i];
	  }  


	 // total subsarray= n*(n+1)/2 + n
	  int max1=INT_MIN;
	 for(int i=0;i<n;i++){
	 	int sum=0;
	 	for(int j=i;j<n;j++){
	 		sum+=arr[j];
	 		cout<<sum<<endl; // for all subarray print.
	 		max1=max(max1,sum); // for max subarray
	 	}
	 	
	 }
	 cout<<max1<<endl;
}