#include<bits/stdc++.h>
using namespace std;
// using functions into functions
long int factorial(int a){
     long int n =1;
      for(int i=1; i<=a; i++){
              n =n*i;
      }
      return n;
}

int nCr(int n, int r){
    int num = factorial(n);
    int denom = factorial(r) * factorial(n-r);
    int ans = num/denom;
    
    return ans;
}

int main(){
    int x , y;
    cout<<"type upper and lower number"<<endl;
   cin>>x>>y;
   cout<< nCr(x,y);


}