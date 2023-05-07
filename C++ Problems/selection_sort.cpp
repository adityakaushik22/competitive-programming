#include<bits/stdc++.h>
using namespace std;



int main(){
	int n;
	cin>>n;
	int a[n];
	for (int i = 0; i < n; ++i)
	  {
	  	cin>>a[i];
	  }  

	  // selection sort me hum pehle sabse chota element nikalte hai and uske alag rakhte hai phir baaki array me sabse chota and phir use add kardete hai pichle chote wale element me and phir baaki me se chota and so on.. in this way wo judte judte sorted array ho jaati hai

	  // sabse pehle chota index humne i wale yaani starting ko maana and iseharbaar change hona isliye for loop me likha hai phir use baaki se compare me i+1 ka ek aur loop chalaya so compare karenge agar hua to minindex change kardenge aur j waale ko bana denge phir jab minindex mila phir loop khatam ke baad swap kardenge elements ko to swap ho jayega.
	  for (int i = 0; i < n; ++i)
	  {
	  	int minindex=i;

	  	for(int j=i+1;j<n;j++){
	  		if(a[j]<a[minindex]){
	  			minindex=j;
	  		}
	  	}
	  	swap(a[i],a[minindex]);
	  }


	  for (int i = 0; i < n; ++i)
	  {
	  	cout<<a[i]<<" ";
	  }

}