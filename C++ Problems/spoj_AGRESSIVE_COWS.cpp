#include<bits/stdc++.h>
using namespace std;

// approach and problem statement....

/*Farmer John has built a new long barn, with N (2 <= N <= 100,000) stalls. The stalls are located along a straight line at positions x1,...,xN (0 <= xi <= 1,000,000,000).

His C (2 <= C <= N) cows don't like this barn layout and become aggressive towards each other once put into a stall. To prevent the cows from hurting each other, FJ wants to assign the cows to the stalls, such that the minimum distance between any two of them is as large as possible. What is the largest minimum distance?

now hame us array ke beech me cows ka max distance pe rakhna hai and vo puri cows bhi us array me aajani chhaiye

now we know that agar hum predicate function bna le to aur aasan binary search se ho jayega

TTTTFFFF,FFFFTTTT...... - PREDICATE FN

suppose we have stalls [3 5 8 12 20]
and cows=3

now we'll take min distance now we'll start from min distance and go till it can place cows n that stalls array

so min distance =0 so ,[3 5 8 12 20] T
						c c c
min distance=1 so, [3 5 8 12 20] T
					c c c (5-3=2>1 so true dega ye bhi and 8-5 bhi 1 se bada so ye bhi true dega)

min distance=2 so, [3 5 8 12 20] T
					c c c

min distance=5 so, [3 5 8 12 20] T
					C   C     C

		SO YAHAN 5 KE CASE ME 5-3=2 SO YE KAM HE DISTANCE COWS KA SO HUM AUR AAGE CHECK KARENGE AND 8-3 POOSIBLE HAI TO RAKHENGE AND 12-8=4 TO WAHAN COW NHI RAKH SAKTE SO ISS TARAH KARNA HAI COWS KO
	BUT ESA DISTANCE BHI AAYEGA JAB WO ARRAY ME NHI RAKH PAYENGE SO VO FALSE DEGA AND HUME BAS LAST TRUE NIKALNA HAI WAHI HAMRA MAX DIFFERENCE HOGA COWS KA US ARRAY KE LIYE.


FUNCTION(X)-> WILL GIVE TRUE/FALSE.
*/

const int N=1e5+10;
int n,cows;
int positions[N];

// monotonic(order maintained) predicate(true/false) function
bool isPossible(int mindis){
	int last_cow_pos=-1; // ye pehla cow ka count hai taaki loop me ye initialise ho jaye and if condition me bhi likhna hog taki ye cows minus ho jaaye. ye hamesha pehle nmber pe initilaise ho jayega kyunki humne update kiya hai loop ke andar
	int cows_cnt=cows;
	for(int i=0;i<n;i++){
		if((positions[i]-last_cow_pos)>=mindis || last_cow_pos==-1){ //
			cows_cnt--;
			last_cow_pos=positions[i];
		}
		if(cows_cnt==0) break;
	}
	return cows_cnt==0;
	
}

int main(){
	  int t;
	  cin>>t;
	  // for(int q=1;q<=t;q++){
	  while(t--){
	  	cin>>n>>cows;
	  	for(int i=0;i<n;i++){
	  		cin>>positions[i];
	  	}
	  	sort(positions,positions+n);
	  	int low=0,high=positions[n-1]-positions[0];
	  	while(high-low>1){
	  		int mid=(low+high)/2;
	  		if(isPossible(mid)){
	  			low=mid;
	  		}else{
	  			high=mid-1;
	  		}
	  	}
	  	if(isPossible(high)){
	  		cout<<high<<endl;
	  	}else{
	  		cout<<low<<endl;
	  	}

	  }
}