#define mod 1000000007
int subsequence(int index,vector<int> &a,int sum,int n,int p){
    if(index>=n){
        if(sum<=p && sum>=0){
            return 1;
        }
        else return 0;
    }
    int cnt=0;
    if(sum==-1){
        cnt+=subsequence(index+1,a,a[index],n,p);
    }else{
        cnt+=subsequence(index+1,a,sum*a[index],n,p);
    }
    
    

    cnt+=subsequence(index+1,a,sum,n,p);
    
    return cnt%mod;
}



int countSubsequences(vector < int > & a, int n, int p) {
    // Write your code here.
    int res=subsequence(0,a,-1,n,p);
    return res%mod;
}