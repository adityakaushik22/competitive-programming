#include<bits/stdc++.h>
using namespace std;


int binaryTodecimal(int n){
	int ans=0;
	int power=1;

	while(n>0){
		int lstdigit=n%10;
		ans+=lstdigit*power;
		n/=10;
		power*=2;
	}

	return ans;
}

int octalTodecimal(int n){
	int ans=0;
	int power=1;

	while(n>0){
		int lstdigit=n%10;
		ans+=lstdigit*power;
		n/=10;
		power*=8;
	}

	return ans;
}

int hexadecimalTodecimal(string n){
	// isme a to f alphabet bhi aa jaate hai.
	int ans=0;
	int power=1;

	int s=n.size();

	for(int i=s-1;i>=0;i--){
		if(n[i]>='0' && n[i]<='9'){
			ans+=power*(n[i]-'0'); // 0 se isliye kiya taaki character me ans aaye jaise 2-0=2 hi ayega
		}
		else if(n[i]>='A' && n[i]<='F'){
			ans+=power*(n[i]-'A' + 10); // hexadecimal hai isme hume 9 number ke baad a b c d chalu hoti hai to a-a=0 ho jaayega lekin hume value 10 chhaiye kyunki vo 9 ke baad 10 pe a aayega isliye +10 kar diya
		}
		power*=16; // updating power hexadecimal
	}
	return ans;
}
	

int decimalTobinary(int n){
	int ans=0;
	int power=1;

	while(power<=n){
		power*=2;
	}
	power/=2;

	while(power>0){
		int lstdigit=n/power;
		n-=lstdigit*power;
		power/=2;
		ans=ans*10+lstdigit;
	}
	return ans;
}

int main(){
	cout<<binaryTodecimal(101)<<endl; 
	cout<<octalTodecimal(17)<<endl; 
	cout<<hexadecimalTodecimal("1CF")<<endl; 
	cout<<decimalTobinary(10)<<endl; 
	
	
	


}