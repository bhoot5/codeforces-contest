#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int z=0;z<t;z++){
        int cnt1=0;
        int cnt2=0;
        int sum=0;
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
            sum+=a[i];
            if(a[i]%3==1){
                cnt1++;
            }
            else if(a[i]%3==2){
                cnt2++;
            }
        }
        int ans=0;
        if(sum%3==0){
            ans=0;
        }
        else if(sum%3==1){
            if(cnt1>0){
                ans=1;
            }
            else{
                ans=2;
            }
        }
        else{
            
                ans=1;
            
        }
        cout<<ans<<endl;
    }
}