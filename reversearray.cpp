#include<bits/stdc++.h>
using namespace std;
//reverse an array
// still using functions as it make more easier after 

void reverse(int arr[], int n){
    int start =0;
    int end =n-1;
    while(start<=end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }

}

void printArray(int arr[], int n){
      
      for(int i=0; i<n; i++){
          cout<< arr[i]<< " ";
      }
      cout<< endl;
}

int main(){
    int arr[6]= {1, 2, 3, 4, 5, 6};
    int brr[5]= {7, 8, 9, 10, 33};

    reverse(arr,6);
    reverse(brr,5);

    printArray(arr, 6);
    printArray(brr, 5);
          
}
