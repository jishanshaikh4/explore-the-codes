// Problem name: Staircase (hackerrank/algorithms/warmup/)
// Solution by: Jishan Shaikh (@jishanshaikh)

#include <bits/stdc++.h>

using namespace std;

void staircase(int n){
   n--;
   int i=n-1, j=0;
   while(i<=n && j<=n && i+j==n-1){
       for(int temp=i; temp>=0; temp--){
           cout << " ";
       }
       for(int temp=j; temp>=0; temp--){
           cout << "#";
       }
       cout << endl;
       i--;
       j++;
   }
}

int main(){
    int n;
    cin >> n;
    staircase(n);
    return 0;
}
