#include<bits/stdc++.h>
using namespace std;

bool palindrome(int i,string &s,int n){

	if(i>=n/2) return true;

	if(s[i]!=s[n-i-1]) return false;

	return palindrome(i+1,s,n);
}

int main(){

	ios::sync_with_stdio(0);
	cin.tie(0);
	
	string s="madam";
	int n=s.length();
	cout<<palindrome(0,s,n)<<endl;  
}
