#include<iostream>
#include<limits>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin >> n >> m;
    int arr1[n] = {1,1,2,3,4,6};
    int arr2[m] = {2,3,4,4,5,7};
    set<int>st;
    for(int i = 0;i<m;i++){
        st.insert(arr1[i]);
    }
    for(int i = 0;i<m;i++){
        st.insert(arr2[i]);
    }

    int arr[st.size()];
    int i =0;
    for(auto it : st){
        arr[i] = it;
        i++;
    }

    for(int j=0;j<st.size();j++){
        cout << arr[j] << " ";
    }
}