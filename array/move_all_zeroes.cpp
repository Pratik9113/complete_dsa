#include<iostream>
#include<limits>
#include <bits/stdc++.h>
using namespace std;
 int main(){
    int arr[] = {1, 2, 0, 4, 3, 0, 5, 0};
    int n = sizeof(arr) / sizeof(arr[0]);
    int count =0;
    for(int i =0 ;i<n;i++){
        if(arr[i]!=0 ){
            swap(arr[i], arr[count++]);
        }
    }
    for(int i =0;i<n;i++){
        cout << arr[i] << " ";
    }
    
 }