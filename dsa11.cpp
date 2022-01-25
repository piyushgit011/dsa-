#include<bits/stdc++.h>
using namespace std;
// swapping nearby elements in an array

void printArray(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<< " ";
    }
}

int main(){
    int arr[5]={5,6,7,4,3};
    for(int i=0; i<6; i+=2){
        int j =1;
        j=j+i;
        if (i+1 < 5){
        swap(arr[i], arr[j]);
        }
    }
    printArray(arr , 5);
    
}