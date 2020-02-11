#include<bits/stdc++.h>
using namespace std;
void print(string s,int open,int close, int pos,int n)
{
    if(pos == 2*n)
    {
        if(n == close)
        {
            cout<<s<<endl;
        }else{
            return;
        }
    }
    if(open>close){
        print(s+")",open,close+1,pos+1,n);
    }
    if(open<n)
    {
        print(s+"(",open+1,close,pos+1,n);
    }
}
int  main()
{
    int n;
    cin>>n;
    print("(",1,0,1,n);
}
