#include<bits/stdc++.h>
using namespace std;
int funmax(int a,int b,int c ,int d){
    int arr[4]={a,b,c,d};
    int max=0;
    for(int i=0;i<4;i++){
       if(arr[i]>max){
           max=arr[i];
       }
    }
    return max;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int a,b,c,d;
    cin>>a;
    cin>>b;
    cin>>c;
    cin>>d;
    int result=funmax(a,b,c,d);
    cout<<result;
    return 0;
}
