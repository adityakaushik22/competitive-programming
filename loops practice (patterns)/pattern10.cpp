#include<bits/stdc++.h>
using namespace std;

/* pattern
    1 1 1 1 1
    2 2 2 2 2
    3 3 3 3 3
    4 4 4 4 4

*/

int main(){
    for(int j=1;j<=5;j++){
        char a=64;
        for(int i=j;i>=1;i--){
            cout<<char(a+i)<<" ";
            // a+=i;
         }
         cout<<endl;
    }
}