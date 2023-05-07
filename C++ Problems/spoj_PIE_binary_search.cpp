#include<bits/stdc++.h>
using namespace std;
const int N=1e5+10;
int radius[N];
int n,f;
#define pi 3.1415926535897932384626433832795

bool areaValid(long double mid,long double rad_volume[]){
	
	int count=0;
	if(mid==0) return 0;
	for(int i=0;i<n;i++){
		count+=(int)(rad_volume[i]/mid);
	}
	if(count>=f){
		return true;
	}else{
		return false;
	}
}

int main(){
	std::ios::sync_with_stdio(false);
	int t;
	cin>>t;
	while(t--){
		// int n,f;
		cin>>n>>f;
		f++;
		for(int i=0;i<n;i++){
			cin>>radius[i];
		}
		sort(radius,radius+n);
		long double rad_volume[n];
		for(int i=0;i<n;i++){
			rad_volume[i]=radius[i]*radius[i]*pi;
		}
		long double low=0,high=rad_volume[n-1];
		while(high-low>1e-6){
			long double mid=(high+low)/2;
			if(areaValid(mid,rad_volume)){
				low=mid;
			}else{
				high=mid;
			}
		}
		printf("%.4Lf\n",low);

	}  
}