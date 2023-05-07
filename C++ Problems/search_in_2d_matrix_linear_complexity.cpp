#include<bits/stdc++.h>
using namespace std;

	// the 2d matrix is given in a sorted order we have to find the key/target elemrnt in the 2d array

	// so hum yeh problem simple linear search se bhi kar sakte hai but time complexity 0(n^2) rahegi
/*isliye hum yahan ek trick lagayenge agar humare paas sorted diya hai 2d matrix in ascending order 1 2 3..
so hum yahan ek approach lagaenge

		TRICK:: SO HUM APNI ITERTAION TOP RIGHT CORNER SE LAGAYENGE SO AGAR HUMARA ELEMENT CHOTA AAYA TO HUME AAGE BADHNA HAI YAANI HUM AGR CHOTA HIA TOP RIGHT ELEEMNT TO HUM NEECHE AAYENGE YAANI ROW++ NHI TO BADA HUA TO HUM PEECHE JAYENGE YAANE COL--.


*/

int main(){
	  
	  int n,m;
	  cin>>n>>m;
	  int target;
	  cin>>target;
	  int mat[n][m];

	  for(int i=0;i<n;i++){
	  	for(int j=0;j<m;j++){
	  		cin>>mat[i][j];
	  	}
	  }


	  // top right position
	  int r=0,col=m-1; // so ye top right ki position hai
	  int pos,pos1;
	  bool found=false;
	  while(r<n && col>=0){
	  		if(mat[r][col]==target){
	  			found=true;
	  			pos=r;
	  			pos1=col;
	  		}
	  		if(mat[r][col]>target){
	  			col--;
	  		}else{
	  			r++;
	  		}
	  }

	  if(found){
	  	cout<<"element found at: "<<pos<<" "<<pos1<<endl;
	  }else{
	  	cout<<"not found"<<endl;
	  }

}
