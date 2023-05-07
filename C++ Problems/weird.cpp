#include<bits/stdc++.h>
using namespace std;

const int N=2e5+10;

int main(){
	long long n;
	cin>>n;
	int array_sum=0;
	int arr[n-1];
	int frequency_array[N]={0};
	for(int i=0;i<n-1;i++){
		cin>>arr[i];
		array_sum+=arr[i];
	}
	int sum=(n*n+n)/2;
	cout<<(sum-array_sum);
}