#include<bits/stdc++.h>
using namespace std;



int main(){
	
	int speed;
	cin>>speed;
	int x;
	cin>>x;

	vector<vector<int>> ans(x,vector<int> (2));

	for(int i=0;i<x;i++){
		for(int j=0;j<2;j++){
			cin>>ans[i][j];
		}
	}
	float max_dist=INT_MIN;
	for(int x1=0;x1<x;x1++){
		float dist=0;
		for(int x2=x1;x2<2;x2++){
			dist=sqrt(pow(x2 - x1, 2) + pow((x2+1) - (x1+1), 2) * 1.0);
			max_dist=max(max_dist,dist);
		}

	}
	cout<<max_dist<<endl;


}