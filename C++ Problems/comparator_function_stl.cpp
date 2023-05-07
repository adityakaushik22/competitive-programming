#include<bits/stdc++.h>
using namespace std;

bool should_i_swap(int a,int b){
	if(a>b) return true;
	return false;
}// so ye humne function bana liya ye hi ek type ka comparator function hai jo swap jaisa karna hai batata hai

// comparator function for pair vector

// this comparator function will work opposite in sort() becasue it only checks false condition and work on that so if we give this function as argument in sort it will work opposite of what we've written so thats why we have to return falase to condition which we wants to execute.

// bool swap_pair(pair<int,int> a,pair<int,int> b){
// 	if(a.first!=b.first){
// 		if(a.first>b.first) return true;
// 		return false;
// 	}else{
// 		if(a.second<b.second) return true;
// 		return false;
// 	}
// }

// so jo hume chhaiye  us condition ko hi direct return me likh sakte he ya hume jo karana hai usme return false so yahan hum
bool swap_pair(pair<int,int> a,pair<int,int> b){
	if(a.first!=b.first){
		return a.first<b.first; // so return me vohi kardiya jo chhaiye isse bhi kaam chal jayega so hume a.first chota chhaiye yaani increasing me to wohi condition deni hai so ye sort function me kaam ho jayega.
	}
	return a.second>b.second;
}



int main(){
	int n;
	cin>>n;
	vector<pair<int,int>> v(n);
	// std::vector<pair<int,int>> v(n);
	for(int i=0;i<n;i++){
		cin>>v[i].first>>v[i].second;
	}  

	// sort function which will sort in ascending order
	// for (int i = 0; i < n; ++i)
	// {
	// 	for (int j = i+1; j < n; ++j)
	// 	{
	// 		if (swap_pair(v[i],v[j])) // ab koi bhi sort algo me ye chiz to hoti hi hai aur ye condition hi hume batati hai kaisa sort hoga ascending ya descending
	// 		{
	// 			swap(v[i],v[j]);
	// 		}
	// 	}
	// }


	sort(v.begin(),v.end(),swap_pair); // so ye sort pehle pair me bhi increasing me sort kardega and dusre pair ko bhi increasing me sort kardega lekin hume agar custom sort cchaiye to hum iss sort me bhi de sakte hai comparator function ki madad se so now yahan hum chhate he ki pehla to increasing me hi sort ho lekin agar first and second ka pair same hua to jo second rahega use ascending me kardo so uske liye upar function likha hai lekin comparator function sort() function me ulta kaam karta hai yaani hume jo usse karwana hai use hume return false me karna hoga yaani jo cheez execute karwani hai use false condition me karna hoga tabhi vo acche se kam karega sort() function me




	//print
	// for(int i=0;i<n;i++){
	// 	cout<<v[i].first<<" "<<v[i].second;
	// }cout<<endl;

	for(auto p: v){
		cout<<p.first<<" "<<p.second<<endl;
	}


}