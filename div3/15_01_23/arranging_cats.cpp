#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int j=0;j<t;j++){
        int n,d1=0,d2=0,m=0;
        cin>>n;
        string s1,s2;
        cin>>s1>>s2;
        for(int i=0;i<n;i++){
            if(s1[i]=='1'){
                d1+=1;
            }
            if(s2[i]=='1'){
                d2+=1;
            }
            if(s1[i]!=s2[i]){
                m+=1;
            }
        }
        // if(d1==d2){
        // cout<<"output: "<<m/2<<endl;
        // }else{
            int d=abs(d2-d1);
            cout<<((m-d)/2)+d<<endl;
        // }
    }
}