#include<bits/stdc++.h>
using namespace std;

/*
	//PROBLEM STATEMENT

	You are given an array of N integers including 0.
	the tasks is to find the smallest positive missing number.


	 for ex:: [0 -9 1 3 -4 5]
	 so here the smallest positive missing number in this array is 2.


	 // so here we will make an array of boolean values and will mark all the values as false and
	 then we'll iterate the array and will mark the elemnts of bool array as true if found then in bool array we need to find the first false value.

	 [0 -9 1 3 -4 5]
	 [T T F T F T]
	  0 1 2 3 4 5   // THIS MEANS 0 IS PRESENT , 1 IS PRESENT IN THE GIVEN ARRAY AND MISSING VALUES AS FALSE.

*/
int main(){
	  int n;
	  cin>>n;

	  int a[n];
	  for (int i = 0; i < n; ++i)
	  {
	  	cin>>a[i];
	  }
	  const int N=1e5+2;
	  bool check[N];
	  // marking check array as false
	  for(int i=0;i<n;i++){
	  	check[i]=false;
	  }

	  for (int i = 0; i < n; ++i)
	  {
	  	if(a[i]>=0){ // only non-negative values we dont have to find the negative values
	  		check[a[i]]=true;
	  	}

	  }
	  int ans=-1;
	  for (int i = 1; i < N; ++i)
	  {
	  	if(check[i]==false){
	  		ans=i;
	  		break;
	  	}
	  }

	  cout<<ans<<endl;
}