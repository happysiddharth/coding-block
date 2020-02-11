#include<iostream>
#include<map>
using namespace std;
int main()
{
    long long n;
    map<long ,long> counts;
    cin>>n;
    for(long long i=0;i<n;i++){
        long long temp;
        cin>>temp;
        counts[temp]++;
    }
    long long nQuery;
    cin>>nQuery;
    long long q[nQuery+1];
    for(int i=0;i<nQuery;i++){
        cin>>q[i];
    }
    long long sum[1000000]={0};
    for(long long i=2;i<=n;i++){
        for(long long j=i;j<=n;j+=i){
                sum[i]+=counts[j];
        }
    }
    for(long long i=0;i<nQuery;i++){
        cout<<sum[q[i]]<<endl;
    }

}

