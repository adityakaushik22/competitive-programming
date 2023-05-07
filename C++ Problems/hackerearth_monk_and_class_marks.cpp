#include<bits/stdc++.h>
using namespace std;



int main(){
	  map<int,multiset<string>> marks_map;

	  int n;
	  cin>>n;

	  for(int i=0;i<n;i++){
	  	int marks; 
	  	string name;
	  	cin>>name>>marks;

	  	marks_map[marks].insert(name);
	  }
	  // now map me increasing order me save hotahai information lekin hume answer me to decreasing me chhaiye isliye hum ulta traverse karlenge map ko jisse hume decreasing me milenge and wahi hume output karna hai.
	auto it=--marks_map.end(); // -- isliye kiya hai kyunki end pe rahega yaani hamre last element se ek aage isliye last pe laane ke liye ek minus kardiya so ab yeh last element ko point karega
	

	while(true){
		auto &students=(*it).second;
		int marks=(*it).first;

		// now we'll iterate in sets
		for(auto student:students){
			cout<<student<<" "<<marks<<endl;
		}
		// ye hamra infinite loop tha isliye break conditioon bhi deni hogi to hum yagan humne ulta loop chalu kiya tha to agar hum .begin() pe pahunche to break karna hai.
		if(it==marks_map.begin()){
			break;
		}


		it--;


	}	  
}