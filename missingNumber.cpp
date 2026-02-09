#include <bits/stdc++.h>
 using namespace std;

 int main(){
    int n=5;
    int arr[5] = {1,2,4,5};

    int sum =0;
    int n_sum = n*(n+1)/2;
    for(int i=0;i<n-1;i++){
        sum+=arr[i];
    }
    int missing_number = n_sum - sum;
    cout << "Missing number is : " << missing_number << endl;
    return 0;
 }