#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int j=0;j<t;j++){
        int n;
        cin>>n;
        char arr[n];
        
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int cnt=0;
        for(int i=0;i<n;i++){
            if(arr[i]=='.'){
                continue;
            }
            else if(arr[i]=='@'){
                cnt+=1;
            }
            else if(i<n-1 && arr[i]=='*' && arr[i+1]=='*'){
                break;
            }
        }
        cout<<cnt<<endl;
    }
}