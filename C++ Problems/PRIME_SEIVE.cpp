#include<bits/stdc++.h>
using namespace std;

int N=1e7+10;
std::vector<int> v(n,1);
void seive(int n){
	v[0]=v[1]=0;
	
	for(int i=2;i<n;i++){
		if(v[i]==true){
			for(int j=2*i;j<n;j+=i){
				v[j]=0;
			}
		}
	}
}


int main(){
	  
}