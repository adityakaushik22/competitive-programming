#include<bits/stdc++.h>
using namespace std;


bool isPossible(int arr[],int n,int cows,int mindistance){
	int l=arr[0];
	int cnt=1;

	for (int i = 1; i < n; ++i)
	{
		if(arr[i]-l >= mindistance){
			cnt++;
			l=arr[i];
		}
	}
	if(cnt >= cows) return true;
	return false;  
}



int main(){
	  int n=5,cows=3;
	  int arr[]={1,2,8,4,9};
	  sort(arr,arr+n);

	  int low=1,high=arr[n-1]-arr[0];

	  while(low <= high){
	  	int mid=(low+high)>>1;
	  	if(isPossible(arr,n,cows,mid)){
	  		low=mid+1;
	  	}else{
	  		high=mid-1;
	  	}
	  }
	  cout<<high<<"\n";
}