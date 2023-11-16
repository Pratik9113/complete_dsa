#include<iostream>
#include<limits>
#include <bits/stdc++.h>
using namespace std;
 int main(){
    int arr[] = {7, 2, 9, 4, 6, 1, 3, 8, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int d;
    cout << " enter the d : ";
    cin >> d;
    // first reverse the whole array
    int j = n-1;
    int i =0;
    while(i<j){
        swap(arr[i++],arr[j--]);
    }
    int k =0;
    int l = d-1;
    int m = d+1;
    int o = n-1;
    while(k<l){
        swap(arr[k++],arr[l--]);
    }
    while(m<o){
        swap(arr[m++],arr[o--]);
    }
    for(int i =0;i<n;i++){
        cout << arr[i] << " ";
    }
 }