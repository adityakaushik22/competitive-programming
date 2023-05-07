#include<bits/stdc++.h>
using namespace std;


/*
	PROBLEM STATEMENT

	Given an unsorted array A of size N of non negative integers, find a continuos subarray which adds to a given number S.

	EX: N=5, S=12
	A[]={1 2 3 7 5}

	SO CONTINOUS SUBARRAY BANANI HAI SO ISME SIRF CONTINUOS ELEMNTS DEKHNE HAI JINKA SUM S KE EQUAL HO SO 7 AND 5 HAI 7+5=12
	SO WE HAVE TO RETURN INDEX OF THAT
	ANS:: 2 4


	BRUTE FORCE:: FIND SUM OF ALL POSSIBLE SUBARRAYS AND IF ITS EQUAL TO S, OUTPUT THE START AND END INDEX OF THE SUBARRAY
	SO TIME COMPLEXITY WILL BE :: 0(N^2)

	BUT WE CAN USE TWO POINTER APPROACH.

 	FOR EX: [1 2 3 8] AND S=5	
 	SO WE'LL POINT THE START AND END POINTERS TO STARTING OF THE ARRAY
 	SO WE'LL INCREMENT THE END POINTER TILL THE CURRSUM+ A[END]> S JAB TAK LESS THAN RAHEGA AAGE BADHATE RAHENGE AND AGAR BADA HUA TO LOOP BREAK
 	SO LOOP BREAK YAANI AB START AAGE BADHEGA AND PHIR WAHI CHECK CURRSUM+A[END]=SUM OR NOT JAB HOJAYENGE TO HUM START AND END POINTER RETURN KARDENGE

*/

int main(){
	int n,s;
	cin>>n>>s;


	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}  
	int i=0,j=0; // two pointers
	int start=-1;
	int end=-1;
	int cur_sum=0;

	while(j<n && cur_sum+a[j]<=s){
		cur_sum+=a[j];
		j++;
	}
	if(cur_sum==s){
		cout<<i+1<<" "<<j<<endl;
		return 0;
	}

	while(j<n){
		cur_sum+=a[j];
		while(cur_sum>s){
			cur_sum-=a[i];
			i++;
		}

		if(cur_sum==s){
			start=i+1;
			end=j+1;
			break;
		}
		j++;
	}
	cout<<start<<" "<<end<<endl;
}