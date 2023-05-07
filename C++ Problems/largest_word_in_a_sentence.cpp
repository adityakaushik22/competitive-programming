#include<bits/stdc++.h>
using namespace std;



int main(){
	
	int n;
	cin>>n;
	cin.ignore();

	char s[n+1];
	// cin>>s; this will not work for spaces if we write the sentence thats why we have to use the getline
	cin.getline(s,n);
	cin.ignore();

	int i=0;
	int currLen=0,maxLen=0;

	// for word print
	int st=0,maxst=0;

	while(true){
		if(s[i]==' ' || s[i]=='\0'){
			 if(currLen>maxLen){
			 	maxLen=currLen;
			 	maxst=st; // so yahan humne starting ka pata karliye so ye line me aate hi starting mil jayega big word ka and agr nhi mila yaan vo alag sentence me hoga isliye jab hum curlen = 0 kiya to wohi humne st=i+1 kardiya yaani ab alag sentence pe he isliye print ke time i bhi add kiya hai.
			 }
			 currLen=0;
			 st=i+1;
		}else currLen++; // agar space nhi mila to hum curlen++ karte jayenge agar mila to curlen ko max se compare kareke max me store karwaenge foe every work so usme sirf max hi store hoga to max len hi aayega.
	 	

		
		if(s[i]=='\0')
			break;
		i++;
	}  

	cout<<maxLen<<endl;
	for(int i=0;i<maxLen;i++){
		cout<<s[i+maxst];
	}
}