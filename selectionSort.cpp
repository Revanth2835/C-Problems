#include <bits/stdc++.h>
 using namespace std;

// Time Complexity --> O(n);
// Space Complexity ==> O(n);

 void selectionSort(int arr[] , int n){
    for(int i=0;i<n-1;i++){
        int min_index = i;
        for(int j =i+1;j<n;j++){
            if(arr[j] < arr[min_index]){
                min_index=j ;
            }
        }
        if(min_index!=i){
            int temp = arr[i];
            arr[i] = arr[min_index];
            arr[min_index] = temp;
        }
    }
 }
 int main(){

    int arr[] = {2,343,4534,12,0};

     int n = sizeof(arr) / sizeof(arr[0]);

    int arr2[] =  copy(arr,arr+n,arr2); //   array is considered as a pointer in functions :  (&arr[0] or arr  - start index ,  arr+1 -- stop index , arr2) -- where to copy

   
    selectionSort(arr2,n);
    for(int i =0;i<n;i++){
        cout << arr[i] << " ";
    }

    return 0;
 }