#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int j=0;j<t;j++){
        int len;
        cin>>len;
        string wb;
        cin>>wb;
        int cntfirst,cntlast;
        for(int i=0;i<len;i++){
            if(wb[i]=='B'){
                cntfirst=i;
                break;
            }
        }
        for(int i=len-1;i>=0;i--){
            if(wb[i]=='B'){
                cntlast=i;
                break;
            }
        }
        cout<<cntlast-cntfirst+1<<endl;
    }
}