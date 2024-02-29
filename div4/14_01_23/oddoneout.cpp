#include <bits/stdc++.h>
using namespace std;

int main(){
    int t=0;
    int n;
    cin>>n;
    while(t<n){
        int a,b,c;
        cin>>a>>b>>c;
        // if(a==b){
        //     cout<<c<<endl;
        // }
        // else if(b==c){
        //     cout<<a<<endl;
        // }else{
        //     cout<<b<<endl;
        // }
        int x=a^b^c;
        cout<<x<<endl;
        t++;
    }
}