 #include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    // cout<<" enter the value of n " <<endl;
    cin >> n;
    int sum= 0;

    for(int i=2; i<n; i++){
        if (n%i == 0){
            cout<<"not a prime number";
            break;
        }
            else{
                cout<<"it is  a prime number ";
            break;
        }

    }

        
}
   
