#include<bits/stdc++.h>
using namespace std;
// using functions 
bool isEven(int a){
    if (a&1){
         return 0;   
    }
    else {
        return 1;
    }
}

int main (){
    int num;
    cin>> num;
    if (isEven(num)){
        cout<< "number is even";
    }
    else {
        cout<<"number is odd";
    }


}
