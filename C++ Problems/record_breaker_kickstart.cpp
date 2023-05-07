#include<bits/stdc++.h>
using namespace std;



int main(){
	
	/*record breaking day conditions:
	i) strictly greater than previous values
	ii) strictly greater than following(next) value
	
	[1 2 0 7 2 0 2 2]
	
	so here first value it is forst so no need to check the previous values as they will not be there
	but the second condition 2 is bigger than 1 so 1 is not a breaking day

	so 2nd element 2: 2 is bigger than previous i.e 1 and also next so its record breaking
	so 3rd: nahi hai 0
	4th: 7 sabse bada hai previous all me and next se bhi so record breaking
	5th: 2 so no because 7 bigger in previous elements
	6th: no
	7th: no
	8: no


	optimised approach:

	step 1: we can check if as a[i]> {a[i-1],a[i-2]...a[0]}
	or we can say if a[i]> max({a[i-1],a[i-2]...a[0]})

	for this we can have a variable mx and store the max till a[i]
	then we can check
	if a[i]>mx; // first condition
	if a[i]> a[i+1] // second { if i+1<n}
	 and update mx=max(mx,a[i]);

	*/

	int t;
	cin>>t;
	

	for(int q=1;q<=t;q++){

	int n;
	cin>>n;

	vector<int> a(n+1,-1);

	for (int i = 0; i < n; ++i)
	{
		cin>>a[i];
	}

	if(n==1){
	cout<<"1"<<endl;
	 return 0;} 

	int ans=0;
	int mx=-1;

	for (int i = 0; i < n; ++i)
	{
		if(a[i]>mx && a[i]>a[i+1]){
			ans++;
		}
		mx=max(mx,a[i]);
	}

	cout<<"Case #"<<q<<": "<<ans<<endl;

}

}









/*
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#ifdef tabr
#include "library/debug.cpp"
#else
#define debug(...)
#endif

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int tt;
    cin >> tt;
    for (int qq = 1; qq <= tt; qq++) {
        int n;
        cin >> n;
        vector<int> v(n + 1, -1);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
        int mx = -1, ans = 0;
        for (int i = 0; i < n; i++) {
            if (mx < v[i] && v[i] > v[i + 1]) {
                ans++;
            }
            mx = max(mx, v[i]);
        }
        cout << "Case #" << qq << ": ";
        cout << ans << '\n';
    }
    return 0;
}*/

