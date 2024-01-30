#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int max=0;
        for(int i=0;i<n;i++){
            if (max<a[i]){
            max=a[i];}
            
        }
        int smax=0;
        for(int i=0;i<n;i++){
            if (smax<a[i] && a[i]!=max){   //smax!=max This condition is incorrect
                smax=a[i];
            }
        }
        int sum=max+smax;
        cout<<sum<<endl;
        sum=0;
        
        
    }
	// your code goes here

}
