#include <bits/stdc++.h>

using namespace std;


void bubbleSort(int arr[] , int n){
    for(int i=0;i<n;i++){
        for(int j =0;j<n-i-1;j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}
int main(){
    int arr[] ={23,1,0,435,2};
    int n = sizeof(arr) / sizeof(arr[0]) ;
    int arr2 [5] ;
    copy(arr,arr+n,arr2);
    
    bubbleSort(arr2,n);

    for(int i=0;i<n;i++){
        cout << arr2[i] << " ";
    }
    return 0;
}