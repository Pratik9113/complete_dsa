#include<iostream>
#include<limits>
#include <bits/stdc++.h>
int pivot(int* arr, int n){
    int s = 0;
    int e = n-1;
    int mid = s+(e-s)/2;
    while(s<e){
        if(arr[mid] >= arr[0]){
            s = mid +1;
        }else{
            e = mid;
        }
        mid = s+(e-s)/2;
    }
    return s;
}
using namespace std;
 int main(){
    int arr[]  = {2,1,3,4};
    int n = 4;
    int a = pivot(arr,4);
    cout << a;
    bool ans = false;
    if(arr[n-1]>arr[0]){
        ans = true;
    }
    else if(arr[a]<=arr[0] && arr[a]<=arr[n-1]){
        ans = true;
    }
    cout << ans;
 }