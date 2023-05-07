#include<bits/stdc++.h>
using namespace std;
const int M=1e9+7;
const int N=1e5+10;
long long fact[N];
// constraints t=10^5 and n=10^5.

int main(){
	fact[0]=fact[1]=1;
	for (int i = 2; i < N; ++i)
	{
		fact[i]=fact[i-1]*i;
	}
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		// long fact=1;
		// for(int i=1;i<=n;i++){
		// 	fact=(fact*i)%M;
		// }
		cout<<fact[n]<<"\n";
	}  

	// now if we use this code it will reach tle because complexity is 0(t*n) so 10^10 so it will reach tle so we have to optimize this code.
	// so we can use precomputation here and can use the precomputed value
	// so we can precompute the factorial already before using it. so will make an array to store it. 
	// now we dont need to run the loop for calculating factorial here we have already precomputed the values in it.
	// so the new complexity will be 0(n)+0(t)=0(n) [loop ke andar loop nhi chal rhi isliye + kiya hai]
}