#include<bits/stdc++.h>
using namespace std;
// palindrome pyramid
int main(){
    int n;
    cin>>n;
    int i =1;
    while(i<=n){
       int j =1;
        while(j<=n-i){
        cout<<" ";
         j=j+1;
        }
        int k =1;
        while(k<=i){
            cout<<k;
            k=k+1;
           
        }
        int l=1;
        while(l<=i-1){
            cout<<i-l;
            l=l+1;
        }
        i=i+1;
        cout<<endl;
    }
}