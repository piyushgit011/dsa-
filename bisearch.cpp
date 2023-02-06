#include<bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int size, int key){
    int start=0;
    int end = size-1;
    int mid = start + (end - start)/2;
    while(start<=end){
        if (arr[mid] == key){
            cout << mid<< endl;
             }
        if (arr[mid] < key){
            start = mid + 1;
        }
       else {
           end = mid -1;
       }
        mid = start + (end - start)/2;
 
    }
    
}
int main(){
    int arr1[8]= {1,2,3,4,5,6,7,8};
    int arr2[7]= {1,2,3,4,5,6,7};
    binarySearch(arr1, 8, 7);
    binarySearch(arr2, 7, 3);
  
}