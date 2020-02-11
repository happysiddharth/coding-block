#include <bits/stdc++.h>
using namespace std;


#define MAX_SIZE 1000005
#define MOD 1000000007

void SieveOfEratosthenes(vector<int> &primes)
{
    bool IsPrime[MAX_SIZE];
    memset(IsPrime, true, sizeof(IsPrime));
    for (int p = 2; p * p < MAX_SIZE; p++)
    {
        if (IsPrime[p] == true)
        {
            for (int i = p * p; i <  MAX_SIZE; i += p)
                IsPrime[i] = false;
        }
    }

    for (int p = 2; p < MAX_SIZE; p++)
       if (IsPrime[p])
            primes.push_back(p);

}
map<int ,int> ans;
void calculatePrimeFactor(long long n)
{
	for(long long i=2;i<=n;i++)
	{
		if(n%i==0){
			int flag =1;
			while(n%i==0){
                ans[i]++;
                n/=i;
			}
		}
	}
}
int main()
{
    long x;
    cin>>x;
    long arr[x];
    for(long i=0;i<x;i++)
    {
        cin>>arr[i];
    }
    vector<int> primes;
    SieveOfEratosthenes(primes);
    long a=1;
    for(long i=1;i<=x;i++){
        long long p = primes[i-1];
       // cout<<"p ->"<<primes[i-1];
        a *= pow(primes[i-1],arr[i-1]);

    }
        //cout<<a<<endl;

       long long finalAns=1;

       for(long long i=1;i<=a;i++){
        if(a%i==0){
            finalAns*=i;
        }
       }
       calculatePrimeFactor(finalAns);
       finalAns = 1;
        for(auto a:ans){
                finalAns*=(a.second+1);


        }
        cout<<finalAns%MOD;



}
