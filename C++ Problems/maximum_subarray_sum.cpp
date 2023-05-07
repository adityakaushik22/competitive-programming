#include<bits/stdc++.h>
using namespace std;

// now we have to find an subarray whic hhas the maximum sum.

/* for example:: [-1 4 7 2]
so is array me jiska jyada sum hoga woh hume subarray batana hai
so upar ke array me itne subarrays honge:
-1 
-1 4 
-1 4 7 
-1 4 7 2 
4 
4 7 
4 7 2 
7 
7 2 
2 

so we can see the highest sum is 4+7+2=13 and is the amx subarray.

*/

int main(){

	// brute force approach::

	// int n;
	// cin>>n;
	// int arr[n];
	// for (int i = 0; i < n; ++i)
	// {
	// 	cin>>arr[i];
	// }
	// int maxSum=INT_MIN;
	// for(int i=0;i<n;i++){
	// 	for(int j=i;j<n;j++){
	// 		int sum=0;
	// 		for(int k=i;k<=j;k++){
	// 			sum+=arr[k];
	// 		}
	// 		maxSum=max(maxSum,sum);
	// 	}
	// }
	  
	//   cout<<maxSum<<endl;

	//   // time compleity:: 0(n^3).




	// cummuative/prefix sum method.

	int n;
	cin>>n;
	int arr[n];
	for (int i = 0; i < n; ++i)
	{
		cin>>arr[i];
	}

	int currSum[n+1];
	currSum[0]=0;

	for(int i=1;i<=n;i++){
		currSum[i]=currSum[i-1]+arr[i-1];
	}

	int maxSum=INT_MIN;
	for(int i=1;i<=n;i++){
		int sum=0;
		for(int j=0;j<i;j++){
			sum=currSum[i]-currSum[j];
			maxSum=max(maxSum,sum);
		}
	}

	cout<<maxSum<<endl;

}