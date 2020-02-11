#include<iostream>
#include<string>
#include<math.h>
using namespace std;


char primeSeive[5000000];
char result[5000000];
void calculatePrimeSeive(long long n,long long m)
{
	for(long long i=0;i<=n;i++)
	{
		primeSeive[i]='1';
	}
	primeSeive[0]='0';
	primeSeive[1]='0';


    for(long long i=2;i<=n;i++){
        if(primeSeive[i]){
                for(long long j=i*i;j<=n;j+=i){
                primeSeive[j]=0;
            }
        }

    }

long long j=0;
for(long long i=2;i<=n;i++){
	if(primeSeive[i]=='1' )
	{
	    if(m==j)
           {
                cout<<i;

           }

            j++;



	}

}
}
//2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43 and 47.
int main() {
	long long n;
	cin>>n;

	calculatePrimeSeive(5000000,n-1);
	return 0;
}
