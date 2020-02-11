#include<iostream>
using namespace std;
long long dp[100001];
long long cal(int n,int tiles){
	if(n<tiles){
		return 1;
	}
	if(n==tiles){
		return 2;
	}
	if(dp[n]!=-1){
        return dp[n];
	}
	long long sum1 = 1+cal(n-1,tiles);//placing row wise
	long long sum2 = 1+cal(n-tiles,tiles);
	return dp[n]=sum1+sum2;
}

int main() {
	int t;
	cin>>t;
	while(t--){
        for(int i=0;i<100001;i++){
            dp[i]=-1;
        }
		int n,m;
		cin>>n>>m;
		cout<<cal(n,m);
	}
	return 0;
}
