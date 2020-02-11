#include<iostream>
using namespace std;
int main()
{
    long long int product=1;
    int num,rem;
    cin>>num>>rem;
    int num[num],rem[rem];
    for(int i=0;i<num;i++){
        cin>>num[i];
    }
    for(int j=0;j<rem;j++){
        cin>>rem[i];
    }
    for(int i=0;i<num;i++){
        product*=num[i];
    }

}
