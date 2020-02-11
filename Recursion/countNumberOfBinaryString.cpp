#include<iostream>
using namespace std;
long long ans(int n,int pos,string s)
{
    if(pos==n){
        return 0;
    }
    long long s1 = s[pos-1]=='1'?ans(n,pos+1,s+"0"):1+ans(n,pos+1,s+"1");
    return s1;
}
long long ans2(int n){
    long long dp[n+1][2];
    dp[1][0] = 1;
    dp[1][1] = 1;
    for(int i=2;i<=n;i++)
    {
        dp[i][1] = dp[i-1][0];
        dp[i][0] = dp[i-1][0]+dp[i-1][1];
    }
    return dp[n][0]+dp[n][1];
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        cout<<ans2(n)<<endl;
    }
}
