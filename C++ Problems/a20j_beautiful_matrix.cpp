#include<bits/stdc++.h>
using namespace std;



int main(){
	int s[5][5];
	int row=0,col=0;
	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
			cin>>s[i][j];
			if(s[i][j]==1){
				row=i+1;
				col=j+1;
		}
	}  
}
	// for(int i=0;i<5;i++){
	// 	for(int j=0;j<5;j++){
	// 		if(s[i][j]==1){
	// 			row=i+1;
	// 			col=j+1;
	// 		}
	// 	}

	// }
	// cout<<row<<" "<<col<<endl;

	cout<<abs(3-row)+abs(3-col)<<endl;
}