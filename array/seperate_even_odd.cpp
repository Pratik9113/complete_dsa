#include<iostream>
#include<limits>
#include <bits/stdc++.h>
using namespace std;
//5..................... count the number of possible triangle 
  int solve(vector<int>&arr, int n){
    sort(arr.begin(),arr.end());
    int k =0;
    int count = 0;
    int a = k;
    for(int i=n-1;i>=2;i--){
        for(int j = n-2;j>=1;j--){
            if(j==k){
                
                break;
            }
            else if( (arr[i]+arr[j])> arr[k]){
                count++;
                k++;
            }
        }
    } 
    cout << "number of count " <<  count << endl; 
    return count;
  }
 int main(){
    // for simple array 
    // int arr[] = {2,5,3,1,4};
    // int n = sizeof(arr)/sizeof(arr[0]);
    // // according to arr and vector the size condition statement changes
    vector<int>arr = { 10, 21, 22, 100, 101, 200, 300};
    int n = arr.size();
    int d;
    // cout << " enter the d : ";
    // cin >> d;
    // d = d%n;
// 1................. first reverse the whole array
    /*
    int j = n-1;
    int i =0;
    while(i<j){
        swap(arr[i++],arr[j--]);
    }
    int k =0;
    int l = d-1;
    int m = d;
    int o = n-1;
    while(k<l){
        swap(arr[k++],arr[l--]);
    }
    while(m<o){
        swap(arr[m++],arr[o--]);
    }
    for(int i =0;i<n;i++){
        cout << arr[i] << " ";
    }*/
// 2................... using stl 
   /* reverse(arr.begin(),arr.end());
    reverse(arr.begin(),arr.begin()+d);
    reverse(arr.begin()+d,arr.end());
    for(int i =0;i<n;i++){
        cout << arr[i] << " ";
    }*/

//3................... using left rotation array 
    /*int k = n-d;
    reverse(arr.begin(),arr.end());
    reverse(arr.begin(),arr.begin()+k);
    reverse(arr.begin()+k,arr.end());
    for(int i =0;i<n;i++){
        cout << arr[i] << " ";
    }*/

//4.................... sort an array which contain 1 to n values  2 3 1 4 5
    /*int i =0;
    while(i<n){
        int correct = arr[i]-1;
        if(arr[correct]== arr[i]){
            i++;
        }else{
            swap(arr[correct], arr[i]);
        }
    }
    for(int i =0;i<n;i++){
        cout << arr[i] << " ";
    }*/

//5..................... count the number of possible triangle 
solve(arr,n);
}