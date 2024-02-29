#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int j=0;j<t;j++){
        int n,m;
        cin>>n>>m;
        int arr[n];
        int product=1;
        int cnt=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i]!=0){
                product*=arr[i];
            }
            else{
                cnt+=1;
            }
        }
        string LR;
        cin>>LR;
        int L=0,R=n-1;
        for(int i=0;i<n;i++){
            if(cnt!=0){
                    cout<<0<<" ";
            }
            else{
                cout<<product%m<<" ";
            }    
            if(LR[i]=='L'){
                if(arr[L]==0){
                    cnt--;
                }    
                else{
                    product=product/arr[L];
                }
                L++;
            }
            else{
                if(arr[R]==0){
                    cnt--;
                }
                else{
                    product=product/arr[R];
                }
                R--;
            }              
        }
        cout<<endl;
    }
}