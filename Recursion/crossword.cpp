#include<bits/stdc++.h>
using namespace std;
string findWordWithLen(unordered_map<string,string> dict,int len){
    unordered_map<string,string> ::  iterator itr;
    for(itr = dict.begin();itr!=dict.end();itr++){
        if(itr->second.size()<=len){
            return itr->second;
        }
    }
}
void solve(vector<string> cross,int start,int m,unordered_map<string,string> dict)
{
    //solve horizontally
    for(int i=start;i<m;i++)
    {
        int len = m-start;
        int c=0;
        string tmp = findWordWithLen(dict,len);
        for(int j=0;j<tmp.size();j++){
            if(cross[i][j]==tmp[j]){
                c++;
            }
            if(c==tmp.size()-1){
                cout<<tmp<<endl;
            }
        }
    }
}
int main()
{
    int n;
    cin>>n;
    unordered_map<string,string> dict;
    for(int i=0;i<n;i++)
    {
        string temp;
        cin>>temp;
        dict[temp]=temp;
    }

    int m;
    cin>>m;
    vector<string> cross;
    for(int i=0;i<m;i++){
        cin>>cross[i];
    }

    solve(cross,0,m-1,dict);


}
