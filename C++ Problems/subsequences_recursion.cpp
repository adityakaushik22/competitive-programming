#include<bits/stdc++.h>
using namespace std;

void subsequences(int index,vector<int> &ds,vector<int> v,int n){

	if(index==n){
		for(auto it:ds){
			cout<<it<<" ";
		}
		if(ds.size()==0){
			cout<<"{}"<<" ";
		}
		cout<<endl;
		return;
	}

	// subsequences(index+1,ds,v,n); if we want to print the not take part permuttaion first we can use this ondition above take condition and can comment the 24th line.

	ds.push_back(v[index]);
	subsequences(index+1,ds,v,n); // this is the take condition

	ds.pop_back();

	subsequences(index+1,ds,v,n); // so this is not take condition ,, os if we want to print the not take permutation of sequence we can put this tatement above all of these condition example above in comments.
}



int main(){
	 
	 std::vector<int> v={3,1,2};

	 int n=v.size();

	 //empty array in which elements will be added.
	 vector<int> ds;

	 subsequences(0,ds,v,n);

}