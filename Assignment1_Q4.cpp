
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int Max_sum_subarray(int arr[], int n){
    int sum= 0, maxsum= 0;;
    for(int i=0; i< n; i++){
        sum= max(sum+arr[i], arr[i]);
        maxsum= max(sum, maxsum);
    }

    return maxsum;
}

int main(){
    int n= 8;
    int arr[]= {-2, -5, 6, -2, -3, 1, 5, -6};
    cout<<"Maximum sum of subarray is: "<<Max_sum_subarray(arr, n);
    return 0;
}
