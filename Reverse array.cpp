#include<bits/stdc++.h>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int N;
    cin>>N;
    
    int arr[N];
    
    for(int i=0;i<N;i++){
        int k;
        cin>>k;
        arr[i]=k;
    }
    
 //   Reverse Array
    
    for(int i=N-1;i>=0;i--){
        cout<<arr[i]<<' ';
    }


    return 0;
}
