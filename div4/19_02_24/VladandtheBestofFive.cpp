#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int j=0;j<t;j++){
        int cntA=0;
        int cntB=0;
        string s;
        cin>>s;
        for(int i=0;i<5;i++){
            if(s[i]=='A'){
                cntA+=1;
            }
            else if(s[i]=='B'){
                cntB+=1;
            }
            
        }
        if(cntA>cntB){
            cout<<'A'<<endl;
        }else{ 
            cout<<'B'<<endl;
        }
    }
}