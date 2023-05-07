#include<bits/stdc++.h>
using namespace std;



int main(){
	
	// supppose we have an array in which we have to find the closest one
	/* [3 5 10 15 19 26 29 35]

		suppose x=27,, so we have to find the closeset one,, so we can use binary search here

		we can have low and high pointers
		min i = a[i]>=x so this is the closest element from left for x
		max i = a[i]<=x o this is the closest element from right for x.

		so here we will use some different binary search
		so we'll have 2 pointers l and h and we'll check
		a[l]<x and a[h]>=x;
		so we have to add 2 virtual elements also because if our high pointer is also less than x
		then the condition will break so we'll add -infinity and +infinity to the end
		
         -1 0 1 2  3  4       n-1  n
		[-∞ 3 5 10 15 19 26 29 35 +∞] 
		  l                        h
		these are virtual elements so we'll not put it in array			
		l=-1 and h=n
		m=l+h/2
		so if(a[m]<x) l=m
		else r=m

		return r;

		*/  

	int n,k;
	 cin>>n>>k;
	 vector<int> a(n);
	 for(int i=0;i<n;i++){
	     cin>>a[i];
	 }
	 for(int i=0;i<k;i++){
	     int x;
	     cin>>x;

	     int l=-1,r=n; // a[l] <=x and a[r]>x
	     while(r>l+1){
	     	int m=(l+r)/2;

	     	if(a[m]<=x){ // closest to left condition-> [if(a[m]<=x)] ,, closest to right condition->[if(a[m]<x) and in cout we will write r+1]
	     		l=m;
	     	}else{
	     		r=m;
	     	}
	     }
	     cout<<l+1<<endl;
	 }
}

