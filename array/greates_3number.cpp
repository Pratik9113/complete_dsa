#include<iostream>
#include<limits>
#include <bits/stdc++.h>
using namespace std;
 int main(){
    int arr[] = {10, 4, 3, 50, 23, 90};
    int n = sizeof(arr) / sizeof(arr[0]);
    int a,b,c;
    a=b=c = INT_MIN;
    for(int i=0;i<n;i++){
       if(arr[i]>a){
        c = b;
        b = a;
        a = arr[i];
       }else if (arr[i]> b && a!=arr[i]){
        c = b;
        b = arr[i];
       }
       else if (arr[i]>c && a!=arr[i]  && b!=arr[i]){
        c = arr[i];
       }
    }
    cout << a << " " << b << " " << c <<  " " << endl;
    return 0;
    
 }