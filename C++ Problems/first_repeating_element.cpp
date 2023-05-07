#include<bits/stdc++.h>
using namespace std;

// approach & problem statement
/* given an array of size n.the task is to find the first repeating element in the array of integers
   

   ex: [1 5 3 4 3 5 6] output: 2
   explain : 5 and 3 are repaeating but we have to find the smallest index at which the number is repeating


 	so we'll make an array with -1 all the elements and will will make minidx=INT_MAX 
   now we will iterate in array and will update the index value to that iteration number or i loop value and if we go to same number again we'll update the minindx and will run as the loop.
   

   for ex: at i=0 [1 5  3  4  3  5  6]
        index[]= [-1 0 -1 -1 -1 -1 -1 -1] // pehle array me 1 aaya to index array me 1 wale index pe 0 se update kardiya
   
   for i=1 [1 5  3  4  3  5  6]
 index[]= [-1 0 -1 -1 -1  1 -1 -1] // pehle array me 5 aaya to indx array me 5th posi pe us index se update kardiya

   lekin jab koi repeated element aayega to uske index me -1 nhi hoga aur aur koi value hogi tab hum apne minindex ki value update kardenge and use update kardenge so usme sirf minindex ki value aajayegi.
*/


int main(){
	  int n;
     cin>>n;

     int a[n];
     for (int i = 0; i < n; ++i)
     {
        cin>>a[i];
     }

     // now we'll make index array.
     const int N=1e5+4;
     int idx[N];
     for (int i = 0; i < N; ++i)
     {
        idx[i]=-1; // index array me pehle hi sab -1 se initialise kardiya
     }
   int minidx=INT_MAX;
   
   for (int i = 0; i < n; ++i)
     {
        if(idx[a[i]]!=-1){
         minidx=min(minidx,idx[a[i]]);
        }
        else{
         idx[a[i]]=i;
        }
     }  

   if(minidx==INT_MAX){
      cout<<"-1"<<"\n";
   }else{
      cout<<(minidx+1)<<endl;
   }
}