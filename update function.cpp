#include<bits/stdc++.h>
using namespace std;
void fun(int &a,int &b){
    int k=a+b;
    int m=abs(a-b);
    cout<<k<<endl;
    cout<<m;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
      int a,b;
      cin>>a>>b;
      fun(a,b);
    return 0;
}
