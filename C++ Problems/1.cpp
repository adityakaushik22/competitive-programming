#include<bits/stdc++.h>
using namespace std;
const int N=2e5+10; // range given in question.
int hsh[N];
int multiples_cnt[N]; // array whis will tell the count in the array for queries
 
int main(){
  int n;
  cin>>n;
  for(int i=0;i<n;i++){
      int x;
      cin>>x;
      hsh[x]+=1;// is array ke andar array ke element ka count store kar liya hai.


  }
  for(int i=1;i<N;i++){
      for(int j=i;j<N;j += i){
          multiples_cnt[i] += hsh[j];
      }
  }		
  int q;
  cin>>q; // queries ka input
  while(q--){
      int p,q;
      cin>>p>>q;
      long long lcm=((p*1LL*q)/(__gcd(p,q))); // since we know 1st number * 2nd num = lcm * hcf
      long ans=multiples_cnt[p]+multiples_cnt[q];
       if(lcm<N) ans-=multiples_cnt[lcm];
       cout<<ans<<"\n";

  }
  return 0;
}








