#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);

    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }cout<<endl;


    // lowerbound -> koi bhi element find karna haito ya to vo elemnt ko find karna karega ya usse bade element ko find karega


    // {4 5 5 7 8 25} ye array he to -> lowerbound ye karega ->
    // like hum array me 7 find karna hai to 7 find karlega aur agar 7 nhi hai to vo 8 ko find karega



    // upperbound-> agar vo elemnt present bhi hai to uska agla hi element nikalega
    // so yahna phir hum 7 ka example lete hai upar ke sample array ka to agar uska upperbound find bhi kiya to 7 hoga to bhi vo 8 hi answer dega 7 nhi dega agar element hua bhi to.

    // lekin lowerbound me vo hoga to dedega lekin nhi hua to agla elemnet deta hai usse bada.



    // lower and upper bound ye dono ke dono location return karte hai so * lenge 

    int *ptr=lower_bound(a,a+n,2); // so yahan pehle range dena hota hai so yahan humne range diya start shuru se and end ke liye +n kardiya and find me humne 5 kardiya ki 5 ka lowerboound nikalo
    int *pt=upper_bound(a,a+n,5);
    cout<<*(ptr)<<endl;
    cout<<*(pt)<<endl;


    // agar humne ese value di jo array ke elemnt me badi hai and array me nahi hai to vo + uske aage ka location deta hai to vo garbage value dega isliye hum check laga sakte hai if(ptr==(a+n)) cout<<"not found"; return;
}