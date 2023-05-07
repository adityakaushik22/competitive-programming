#include<bits/stdc++.h>
using namespace std;


bool isPossible(vector<int> v,int dis,int cows){
	int n=v.size();
	int k=v[0];
	cows--; // we'll always put the first cow at first its greedy approach because its the optimal way

	for(int i=1;i<n;i++){
		if(v[i]-k >= dis){
			cows--;
		
			if(!cows){
			return true;
		}
		k=v[i];
	}
} return false;

}



int main(){
  int n=5,cows=3;
  vector<int> v={1,2,8,4,9};
  sort(v.begin(),v.end());
  int maxD=v[n-1] - v[0];
  int ans=0;
  for(int dis=1;dis<=maxD;dis++){
  	if(isPossible(v,dis,cows)){
  		 ans=max(ans,dis);
  	}
  }
  cout<<ans<<"\n";
}