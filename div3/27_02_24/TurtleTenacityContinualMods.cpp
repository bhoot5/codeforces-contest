#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int z=0;z<t;z++){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int mod=0;
        int mod1=a[0];
        for(int i=0;i<n-1;i++){
            mod=mod1%a[i+1];
        }
        if(mod==0){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
}