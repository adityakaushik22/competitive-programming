#include<bits/stdc++.h>
using namespace std;





int main(){
	int t;
	cin>>t;
	while(t--){
		
		int l,r;
		cin>>l>>r;

		l+=(l&1);

		int condition=l+3;

		if(condition>=r) cout<<-1<<"\n";
		
		for(int i=0;i<=3;i++){
				cout<<l+i<<" ";
			
		}


				
	}  
}