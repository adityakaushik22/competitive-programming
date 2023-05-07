#include<bits/stdc++.h>
using namespace std;



int main(){
	
 	string s="abc";

 	// total power set will be 2^n=2^3=8 so we have run the loop till 7 since 0 is also considered 

 	/*we can do like
 	000
 	001  and we can push the string element where there is 1 means set bit.
 	010
 	0
 	1
 	1
 	1
 	*/ 
 	int n=s.size();
 	int total_sets=(1<<n); // 2^n

 	for(int i=0;i<total_sets;i++){
 		string sub="";
 		for(int j=0;j<s.size();j++){

 			if(i & (1<<j)){
 				sub+=s[j];
 			}

 		}
 		cout<<sub<<endl;
 	}

}