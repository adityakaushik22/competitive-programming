#include<bits/stdc++.h>
using namespace std;

// intitution/ approach
// now  we know that we apply binary search in monotonic fnctions{functions which maintains the order}
	/*now we can also find the root of a number using bs suppose we have to find the root of 4 so we 
	have to find between 1 2 3 4 in this range so its monotonic ,, so hum ab middle pe jayenge and
	check karenge ki middle element root hai ya nhi so maanlo 3 aaya middle elemnt so 3*3 =4 ke hai ya nhi 
	ese check karte jayenge jaisa hum binary search me karte hai.so 3*3 bada aaya to vo so vo 3 se chota hoga


	for ex: we have to find root of 16 [1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16]
		mid ele=1+16/2= 8 so we'll check if 8*8>=16 so if this happens and not equal to 16 then we 
		know root will be smaller than 8 so now  
		so search space [1 2 3 4 5 6 7 8]
		mid = 1+8/2 =4 check if (4*4>=16) so condition true ans =4.

		we can also apply this for smaller inputs like 2 root 2= 1.414 so we can also
		give accuracy to it. like if for 1 digit accuracy search space will be 1 1.1 1.2 ....2
		for 2 digit accuracy [1 1.01 1.02 1.03 .... 2] so in this way we can find the root of a number

	*/  



double eps=1e-6; // if we want the accuracy till 5 digits we use 10^-6.
int main(){
	
	double x;
	cin>>x;
	double low=1,high=x,mid; // double use karenge for root and yahan n-1 nhi karenge high ke liye kyunki puri range me kaam karna hai number ki wahan pe arrray tha isliye n-1 liya tha.
	while(high-low>eps){ // humne pichle case me hi-lo>1 rakha tha lekin yahan rakhne par bahu sari range miss ho jayegi check akrne ke liye isliye humne epsilon eps pehle hi declare kardiya jisme humne aacuracy range rakhi hai.
		mid=(high+low)/2;
		if(mid*mid<x){
			low=mid;
		}else{
			high=mid;
		}
	}
	cout<<low<<endl;

}