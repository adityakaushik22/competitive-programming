#include<bits/stdc++.h>
using namespace std;


int divide(int dividend, int divisor) {
       if(dividend==1<<31 && divisor==-1) return INT_MAX;
        
        bool sign=(dividend>=0)==(divisor>=0);
        
        long a = abs(dividend);
        long b= abs(divisor);
        long result=0;
        while(a-b>=0){
            int count=0;
            while(a-(b<<1<<count)>=0)
                count++;
            
            result+=(1<<count);
            a-=(b<<count);
        }
        return sign ? result:-result;
    }
// hum yahan divident- divisor karte rahenge jabtak vo greater than 0 hai iske baad ek count variable liya hai phir ek loop jisme hum dekhenge ki dividend -divisor greater than 0 hai ya nahi aur hum vo count ko badhate jayenge ab hum minus karte time divisor ko double karte jayenge isliye count liya hai har loop me woh badhega utni baar double karte jayegnge jabtak vo greater than 0 rahega jab vo ho jaye to hum else part me aayenge aur result me 1<<count add karenge kyunki humne loop me divisor ko double karte rahe the to vo count ko bhi double add karna hoga isliye 1<<count yaani count^2 << matlab multiply by 2 hota hai isliye,,, now ab hume ye karne ke baad yaani jab woh loop khatam hoga uska else part likh rahe the hum to vo loop jab less than 0 hoga to hume divident ko bhi minus karna hoga taaki agla iteration chalu ho aur condition full filled ho to divident me se hum jitni baar divisor double hua utna minus karenge so divisor-=divident<<count; jitna loop chala hoga utna count+ hua hoga isliye usi se divisor ko minus kiya hai divident ke. 


int main(){
    int a,b;
    cin>>a>>b;
    cout<<divide(a,b);
}