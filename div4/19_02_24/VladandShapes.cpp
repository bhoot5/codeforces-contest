#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int z=0;z<t;z++){
        int n;
        cin>>n;
        char arr[n][n];
        int x=0,y=0;
        int cntR=0;
        int cntC=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cin>>arr[i][j];
                if(arr[i][j]=='1'){
                    x=i;
                    y=j;
                }
            }
        }
        for(int i=0;i<n;i++){
            if(arr[i][y]=='1'){
                cntC+=1;
            }
        }
        for(int j=0;j<n;j++){
            if(arr[x][j]=='1'){
                cntR+=1;
            }
        }
        if(cntR==cntC){
            cout<<"SQUARE";
        }
        else{
            cout<<"TRIANGLE";
        }
        cout<<endl;
    }
}