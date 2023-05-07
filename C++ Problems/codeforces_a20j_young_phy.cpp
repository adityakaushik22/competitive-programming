#include<bits/stdc++.h>
using namespace std;



int main(){
	int t;
	cin>>t;
	int sum=0;
	while(t--){
		
		int x,y,z;
		cin>>x>>y>>z;
		sum+=x+y+z;
		
	}

	if(sum==0) cout<<"YES\n";
	else cout<<"NO\n";  
}