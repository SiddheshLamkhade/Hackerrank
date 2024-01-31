#include<iostream>
using namespace std;
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int N;
        cin>>N;
        int Arr[N];
        for(int i=0;i<N;i++)
        {
            cin>>Arr[i];
        }
        
        
        
        int ans=0;
        for(int i=0;i<N;i++)
        {
            ans^=Arr[i];// xor operation..... 1^2^4^2^1=4.    ans=ans^Arr[i] 
            
            //in XOR the duplicate elements cancel each other to zero  
            //  ^ is symbol of xor    
            //And hece only elements will be printed which are not repeated and repeated elements went to 0.
        }
        cout<<ans<<endl;
    }
}
