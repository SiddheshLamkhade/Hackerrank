/*
Input Format
    The first line of input will contain a single integer TT, denoting the number of test cases. The description of the test cases follows.
    Each test case consists of 22 lines of input.
        The first line contains a single integer NN, the number of problems solved by the students
        The second line contains NN space-separate integers, the difficulty ratings of the problems attempted by the students in order.
Output Format
    For each test case, output in a new line “Yes” if the problems are attempted in non-decreasing order of difficulty rating and “No” if not. The output should be printed without the quotes.

Each letter of the output may be printed in either lowercase or uppercase. For example, the strings yes, YeS, and YES will all be treated as equivalent.

Explanation:
Test case 11: 1≤2≤31≤2≤3. The students have solved problems in increasing order, and so the answer is "Yes".

Test case 22: 1≤1≤21≤1≤2. The students have solved problems in non-decreasing order, and so the answer is "Yes".

Test case 33: 400>350400>350, but the students have solved a 400400-difficulty level problem before solving a 350350-difficulty problem. The students have not solved problems in non-decreasing order, and so the answer is "No".

Test case 44: 5000>30005000>3000, but the students have solved a 50005000-difficulty level problem before solving a 30003000-difficulty problem. The students have not solved problems in non-decreasing order, and so the answer is "No".


*/




#include <iostream>
using namespace std;
void solve(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=1;i<n;i++){
        if(arr[i]<arr[i-1]){
            cout<<"no\n";return;
        }
    }
    cout<<"yes\n";
}
int main() {
    int T;
    cin>>T;
    while(T-- && T>=0){
        solve();
    }
	return 0;

}
