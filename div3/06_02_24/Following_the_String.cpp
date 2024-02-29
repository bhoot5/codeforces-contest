#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int j=0;j<t;j++){
        int len;
        cin>>len;
        vector <int> a(len);
        vector <int> ans(len);
        for(int i=0;i<len;i++ ){
            cin>>a[i];
        }
        int abc=65;
        map <int,int> m;
        for(int i=0;i<len;i++){
            if(m.count(a[i])==0){
                m[a[i]]=0;
                ans.push_back(0);
            }
            else{
                m[a[i]]+=1;
                ans.push_back(m[a[i]]);
            }
        }
        for(int i=0;i<len;i++){
            cout<<ans[i]<<" ";
        }
    }
}