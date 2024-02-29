#include <bits/stdc++.h>
using namespace std;

int main(){
    long long t;
    cin>>t;
    for(long long j=0;j<t;j++){
        long long n;
        cin>>n;
        long long arr[n];
        for(long long i=0;i<n;i++){
            cin>>arr[i];
        }
        long long curryr=1;
        long long currsign=0;
        while(currsign<n){
            if(curryr%arr[currsign]==0){
                currsign+=1;
                curryr+=1;
            }
            else{
                curryr=(curryr/arr[currsign]+1)*arr[currsign];
            }
        }
        cout<<curryr-1<<endl;
    }
}