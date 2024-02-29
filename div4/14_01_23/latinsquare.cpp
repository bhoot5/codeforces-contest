#include <bits/stdc++.h>
using namespace std;

int main(){
    int t=0;
    int n;
    cin>>n;
    while(t<n){
        char x;
        
        vector<vector<int>> mat(3);
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                cin>>x;
                mat[i].push_back(x-'A');
            }
        }
        for(int i=0;i<3;i++){
            int sum=0;
            for(int k=0;k<3;k++){
                sum+=mat[i][k];
            }
            if(sum==-1){
                cout<<'C'<<endl;
            }else if(sum==0){
                cout<<'B'<<endl;
            }else if(sum==1){
                cout<<'A'<<endl;
            }     
        }
        t++;
    }
}