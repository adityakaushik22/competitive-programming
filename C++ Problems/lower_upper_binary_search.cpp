#include<bits/stdc++.h>
using namespace std;

int lower_bound(std::vector<int> &v,int element){
	// lower bound yaani agar ye elemnt us vector me present he to wahi index return karna hai and agar nahi hai present to hume usse agla bada element print karna hai.
	
	int low=0,high=v.size()-1;
	int ans=-1;
	while(high-low>1){
		int mid=low+(high-low)/2;

		if(v[mid]<element){ // hamara answer agar nhi hua to mid me nhi ho sakta to isliye mid ko search space se bahar nikal diya low=mid+1 se kyunki agar element mila to wohi nahi to aage waala hoga
			low=mid+1;
		}else{
			high=mid;
		}
	}

	if(v[low]>=element){ // is condition me = bhi check kiya kyunki lower bound me usse ek bada bhi answer ho sakta hai isliye >= karenge lower me  lekin upperme sirf usse bada hi consider karte hai isliye > hi karenge upper bound function me.
		return low; 
	} else if( v[high]>=element){
		return high;
	}else{
		return ans;
	}
}

int upper_bound(std::vector<int> &v,int element){
	int low=0,high=v.size()-1;
	int ans=-1;
	while(high-low>1){
		int mid=low+(high-low)/2;

		if(v[mid]<=element){ // is condition ka matlab hamara < bhi answer nhi hona chhaiye and = bhi nhi kyunki upper bound he isliye <= nhi hona chhaiye so isliye low part ko search space se nikal diya low=mid+1 karke yaani us part me nhi hi hoga answer for upper_bound
			low=mid+1;
		}else{
			high=mid;
		}
	}

	if(v[low]>element){
		return low;
	} else if( v[high]>element){
		return high;
	}else{
		return ans;
	}
}

int main(){
	int n;
	cin>>n;
	std::vector<int> v(n);
	for (int i = 0; i < n; ++i)
	  {
	  	cin>>v[i];
	  }  

	  int element;
	  cin>>element;

	  cout<<lower_bound(v,element)<<endl;
	  cout<<upper_bound(v,element)<<endl;
}