#include<iostream>
#include<limits>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[n] = {0,1,0,1,0,1,99};
    for(int i =0;i<n;i++){
        int flag = 0;
        for(int j =0;j<n;j++){
            if(i!=j && arr[i]==arr[j]){
                flag =1;
                break;
            }
        }
        if(flag ==0){
            cout << "array is : "<< arr[i];
            break;
        }
    }
}