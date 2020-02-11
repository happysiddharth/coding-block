#include<iostream>
#include<map>
#include<math.h>
#define MOD 1000000007
using namespace std;
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
int main() {
    long long n;
    int t;
    cin>>t;
    while(t--)
    {
        int term;
        cin>>term;
        for(int i=0;i<term;i++){
            cin>>n;
            calculatePrimeFactor(n);
        }
        long long finalAns=1;
        for(auto a:ans){
                finalAns*=(a.second+1);

           cout<<a.first<<"->"<<a.second<<endl;
        }
        cout<<finalAns%MOD;

    }

	return 0;
}
