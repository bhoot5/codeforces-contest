#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int z=0;z<t;z++){
        int sum=0;
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        for(int i=0;i<n;i++){
            if(arr[i]<0){
                arr[i]=arr[i]*-1;
            }
        }
        for(int i=0;i<n;i++){
            sum+=arr[i];
        }
        cout<<sum<<endl;
    }
}