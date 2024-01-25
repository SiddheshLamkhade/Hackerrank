#include <bits/stdc++.h>
using namespace std;


int main() {
    int n,q,size,value;
    cin>>n>>q;
    int ind,col;
    
    vector<vector<int>>myvector;
    
    for(int i=0;i<n;i++){
        vector<int>myvector2;
        cin>>size;
        for(int j=0;j<size;j++){
            cin>>value;
        myvector2.push_back(value);
    }
    myvector.push_back(myvector2);
    }
  
    for(int k=0;k<q;k++){
        cin>>ind>>col;
        cout<<myvector[ind][col]<<endl;
    }
    return 0;
}
