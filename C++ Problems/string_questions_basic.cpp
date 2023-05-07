#include<bits/stdc++.h>
using namespace std;



int main(){
	
	string str="ajbdjsddfassad";

	//1. convert into uppercase

	// a-'A'= 32,, so agar hum sab characters ko 32 character peeche karde to vo capital me ban jayengi kyuni small letters capital se 32 aage rehte hai ascii table me

	 for(int i=0;i<str.size();i++){
	 	if(str[i]>='a' and str[i]<='z'){
	 		str[i]-=32;
	 	}
	 }  

	 cout<<str<<endl;


	 //2. convert to lowercase

	 // A-'a'

	 for(int i=0;i<str.size();i++){
	 	if(str[i]>='A' and str[i]<='Z'){
	 		str[i]+=32;
	 	}
	 }
	 cout<<str<<endl;



	 // 3. form the biggest number from the numeric string
	 // "53214" -> "54321";

	 string s_big="45697532";

	 sort(s_big.begin(),s_big.end(),greater<int>());
	 cout<<s_big<<endl;


	 //4. count the most occuring alphabet in string
	 // so we will make an array for 26 letters and will update the size for corresponding chars in the string and will give the biggest one.

	 string s_ocuuring="sdaldjljjljsjdad";
	 int freq[26];
	 for(int i=0;i<26;i++){
	 	freq[i]=0;
	 }

	 for(int i=0;i<s_ocuuring.size();i++){
	 	freq[s_ocuuring[i]-'a']++; // ye -a isliye kiya hai kyunki hume indexing maintain rakhni hai freq array me so jaise  s[i] me a aaya so a-a =0 yaani a pe 0 index me ++ ho jayega,, agar b aaya to b-a=1 so 1 index pe ++ ho jaayega and so on so indexing bhi aplhabet ke anusar set ho jayegi 0-a ,1-b, 2-c,3-d ......etc

	 }


	 char ans;
	 int maxfreq=0;

	 for(int i=0;i<26;i++){
	 	if(freq[i]>maxfreq){
	 		maxfreq=freq[i];
	 		ans=i+'a';
	 	}
	 }
	 cout<<maxfreq<<" "<<ans<<endl;

}
