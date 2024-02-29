#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int j=0;j<t;j++){
        int x,y,d;
        
        vector<pair<int,int>> mat(4);
        for(int i=0;i<4;i++){
            cin>>x>>y;
            mat[i]={x,y};
        }
        for(int i=1;i<4;i++){
            if(mat[i].first==mat[0].first){
                d=mat[i].second-mat[0].second;
                cout<<d*d<<endl;
                break;
            }
        }   
        
       
    }
}