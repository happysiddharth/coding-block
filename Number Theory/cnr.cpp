#include<iostream>
using namespace std;
long long dp[1000002];
long long fac(long n){
    if(n==0){
        return 1%1000000007;
    }
   return (n)*(fac(n-1))%1000000007;
  //  cout<<dp[n]<<endl;
}
long long fastExpo(long long a,long long b){
    if(b==0){
        return 1;
    }
    long long ans = fastExpo(a,b/2);
    ans = (ans%1000000007)*(ans%1000000007)%1000000007;// added modulo
    if(b&1){
        ans =(ans%1000000007)* (a%1000000007)%1000000007; // added modulo
    }
    return ans;
}
void m(long n,long r){
    //;
    cout<<((fac(n)*fastExpo(fac(r),1000000007-2))%1000000007*fastExpo(fac(n-r),1000000007-2)%1000000007)<<endl; //added extra modulos and passed factorial to fastexpo
}
int main()
{
    long n,r;
    cin>>n>>r;
    m(n,r);
   //cout<<fastExpo(n,r);

}
