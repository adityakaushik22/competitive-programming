#include<bits/stdc++.h>
using namespace std;



int main(){
	  int n;
	  cin>>n;
	  std::vector<int> v(n);
	  for (int i = 0; i < n; ++i)
	  {
	  	cin>>v[i];
	  }

	  int target;
	  cin>>target;
	  int low=0,high=n-1;
	  int mid;

		while(high-low>1){
			int mid=low+(high-low)/2;

			if(v[mid]<target){
				low=mid+1;
			}else{
				high=mid;		
			}
		} 
		if(v[low]==target) cout<<low<<endl;
		else if(v[high]==target) cout<<high<<endl;
		else cout<<"not found\n"; 
}

// complezity : 0(log(N));



