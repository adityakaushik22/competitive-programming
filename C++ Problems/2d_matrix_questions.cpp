#include<bits/stdc++.h>
using namespace std;



int main(){
	  
	  // int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};



	  // problem 1: transpose of a matrix
	  // for (int i = 0; i < 3; ++i)
	  // {
	  // 	for (int j = i; j < 3; ++j)
	  // 	{
	  // 		int temp=a[i][j];
	  // 		a[i][j]=a[j][i];
	  // 		a[j][i]=temp;
	  // 	}
	  // }



	  //problem 2:: matrix multipication:

		int n1,n2,n3;
		cin>>n1>>n2>>n3;
		int m1[n1][n2];
		int m2[n2][n3];

		// input m1 matrix:
		for(int i=0;i<n1;i++){
			for(int j=0;j<n2;j++){
				cin>>m1[i][j];
			}
		}
		// input m2
		for(int i=0;i<n2;i++){
			for(int j=0;j<n3;j++){
				cin>>m2[i][j];
			}
		}
		int ans[n1][n3];
		// filling ans matrix with 0;
		for(int i=0;i<n1;i++){
			for(int j=0;j<n3;j++){
				ans[i][j]=0;
			}
		}


		for(int i=0;i<n1;i++){// pehle matrix ki saari rows pe iterate kar rhe
			for(int j=0;j<n3;j++){ // isse hum 2nd matrix ke columns pe iterate karrhe hai.
				// ab dono me iterate karne ke baad hume multiply karna hai
				// now ab hume pata hai ki hamara ans matrix kis tarah aaayega we know that in 2d matrix a*b=b*c then the resulatant matrix will be a*c so from m1 and m2 we have 
				// so jo equal hai ab usme iterate karenge
				for(int k=0;k<n2;k++){
					ans[i][j]+=m1[i][k]*m2[k][j];
				}
			}
		}

		for(int i=0;i<n1;i++){
			for(int j=0;j<n3;j++)
				cout<<ans[i][j]<<" ";
			cout<<endl;
		}





	  //print
	  // for (int i = 0; i < 3; ++i)
	  // {
	  // 	for(int j=0;j<3;j++){
	  // 		cout<<a[i][j]<<" ";
	  // 	}
	  // 	cout<<endl;
	  // }
}