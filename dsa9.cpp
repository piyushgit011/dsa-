#include<bits/stdc++.h>
using namespace std;
//linear search
bool search(int arr[], int size, int key){
    for(int i =0; i<size; i++){
        if(arr[i] == key){
            return 1;
        }
    }
    return 0;
}

int main(){
    int arr[10] ={5, 7, -2, 10, 24, 56, 76, 44, 67, 78};

    cout << "enter the element to search for"<<endl;
    int key;
    cin>> key;

    int found = search(arr, 10, key);
    if (found == 1) {
        cout<< "key is present"<<endl;
    }
    else{
        cout<< "key is absent"<< endl;    }
}