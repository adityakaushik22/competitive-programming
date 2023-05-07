#include<bits/stdc++.h>
using namespace std;



int main(){
	
	int n;
	cin>>n;

	int count=0;

	for (int i = 2; i*i < n; ++i)
	  {
	  	if(n%i==0){
	  		cout<<i<<" ";
	  		count++;
	  	}
	  	if(n/i!=i){
	  		cout<<n/i<<" ";
	  		count++;
	  	}
	  }
	  cout<<"\n"<<count<<endl;

}