#include <bits/stdc++.h>
using namespace std;

int sum1(int n){
    int sum=0;
    while(n>0){
        sum+=n%10;
        n/=10;
    }
    // sum+=n%10;
    return sum;
}

int main(){
    int t;
    cin>>t;
    for(int j=0;j<t;j++){
        int n;
        cin>>n;
        int sum=0;
        for(int i=1;i<=n;i++){
            sum+=sum1(i);
        }
        cout<<sum<<endl;
    }
}