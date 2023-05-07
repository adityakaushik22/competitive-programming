#include<bits/stdc++.h>
using namespace std;



int main(){
	
	string s="adityakaushik";

	// s.erase(5,4); // the first argument is from which index we have to delete and the index is included in deletion from where we start,, the 2nd argument is how many letters to delete from that index

	cout<<s.find("kau")<<endl; // it will give the starting index of that word.
	// cout<<s<<endl;

	s.insert(6,"spraygod"); // if we want to insert between strings we can use the insert function, the first argument is which inde we want to add the string we wanted and the 2nd argument is the string we want to add,, here we wanted to add spraygod after aditya so we have aditya is 5 in index(if start from 0) so we will add at 6 so it will be after aditya



	string q=s.substr(6,8); // if we want a substring we use (substr) function so in first argument we give from where to start and 2nd argument is how many letter from that index we want in our substring.

	cout<<s<<endl;
	cout<<q<<endl;  

	// convert string to integer.

	string s1="768";
	int x=stoi(s1); // we can use the (stoi) function and give string as argument so then it will be converted into integer and can perform int operations.
	cout<<x+10<<endl;


	// integer to string

	int y=45;
	cout<<to_string(y)+"9"<<endl; // we can use the (to_string) method to make integer an string and can perform string operation



	// sorting a string
	// "y z x" => "x y z"

	string s2="yzxbder";

	sort(s2.begin(),s2.end()); // so we need to pass the start and end iterators in a sort function. 
	cout<<s2<<endl;

}

