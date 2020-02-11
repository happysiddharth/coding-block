#include<iostream>
#include<vector>
#include<math.h>
using namespace std;
long long primeSeive[100001];
void calculateSeive(long long n)
{
	for(long long i=2;i<=n;i++){
		primeSeive[i]=1;
	}
	for(long long i=2;i<=n;i++){
		if(primeSeive[i]){
			for(long long j=i*i;j<=n;j+=i){
				primeSeive[j]=0;
			}
		}
	}

}
void calculateSeiveInrange(long long a,long long b){
	calculateSeive(ceil(sqrt(b)));
	long long arr[b-a+1];

	for(long long i=0;i<=b-a;i++)arr[i]=1;

	for(long long i=2;i<=sqrt(b);i++){
		for(long long j=a;j<=b;j++){
			if(primeSeive[i]){
				if(i==j)continue;
				if(j%i==0){
					arr[j-a]=0;
				}
			}
		}
	}
	long long c=0;
	for(long long i=0;i<=b-a;i++){
		if(arr[i]==1){
			c++;
		}
	}
	cout<<c<<endl;
}
int main() {
	int n;
	cin>>n;
	while(n--){
		long long a,b;
		cin>>a>>b;
		calculateSeiveInrange(a,b);
	}
	return 0;
}
