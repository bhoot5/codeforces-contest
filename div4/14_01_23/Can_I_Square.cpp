#include <bits/stdc++.h>
using namespace std;

int main(){
    int t=0;
    int n;
    cin>>n;
    while(t<n){
        int b,x;
        int sum=0;
        cin>>b;
        for(int i=0;i<b;i++){
            cin>>x;
            sum+=x;
        }
        int squ=floor(sqrt(sum))*floor(sqrt(sum));
        if(squ==sum){
            cout<<"yes"<<endl;
        }else{
            cout<<"no"<<endl;
        }
        t++;
    }
}