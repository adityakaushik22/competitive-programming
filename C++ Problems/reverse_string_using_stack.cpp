#include<bits/stdc++.h>
using namespace std;

/* yahan hume string ko reverse krna tha to pehle hum stack ke andar saare character daal lenge ab vaise bhi stack me lifo follow hota hai to stack ka top add krdenge to ans and phir use pop se vo nikkal jayega and agal top ban jayega aur ye sab hum jab tak stack empty nhi ho jaata.
 

*/

int main(){

	string str="aditya";
	stack<char> st;
	for(int i=0;i<str.length();i++){
		char ch=str[i];
		st.push(ch);
	}  

	string ans="";
	while(!st.empty()){
		char top=st.top();
		ans+=top;
		st.pop();
	}

	cout<<ans<<endl;
}