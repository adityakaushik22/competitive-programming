#include<bits/stdc++.h>
using namespace std;



int main(){
	int t;
	cin>>t;
	while(t--){
		long long n,k;
		cin>>n>>k;

		if (k == 1) {
        if (n&1) {
            cout << "ODD\n";
        } else {
            cout << "EVEN\n";
        }
    } else if (k == 2) {
        cout << "ODD\n";
    } else {
        cout << "EVEN\n";
    }




}
}