#include<bits/stdc++.h>
using namespace std;

int main(){
     long int n;
    cin >> n;

     int ans = 0;
     long int i =0 ;
    while(n != 0){

        long int bit = n & 1;
        ans = ans + (bit * pow(10, i) )  ;
        n = n >> 1;
        i++;
    }
    cout<< "answer is " << ans <<endl;
    

}