#include<bits/stdc++.h>
using namespace std;



int main(){
	int n;
	cin>>n;
	int arr[n];
	for (int i = 0; i < n; ++i)
	  {
	  	cin>>arr[i];
	  }  


	  // for first 2 elements in array
	  int ans=2;
	  int pd=arr[1]-arr[0]; // pd= previous common difference since array me common difference same hona chhaiye sirf usi ka lenght nikal na hai

	  // for while loop hum 2 se start karenge.
	  int j=2;
	  int curr=2;


	  while(j<n){
	  	if(pd==arr[j]-arr[j-1]) curr++;
	  	else{
	  		pd=arr[j]-arr[j-1];
	  		curr=2;
	  	}

	  	ans=max(ans,curr);
	  	j++;
	  }

	  cout<<ans<<endl;
}