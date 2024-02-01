#include<iostream>
#include<limits>
#include <bits/stdc++.h>
using namespace std;
void threeWayPartition(vector<int>& array,int a, int b)
    {
       int low = 0;
       int mid = 0;
       int high = array.size()-1;
       while(mid<=high){
           if(array[mid] < a){
               swap(array[mid++],array[low++]);
           }else if (array[mid]>=a && array[mid]<=b){
               mid++;
           }else if(array[mid] > b){
               swap(array[mid],array[high--]);
           }
       }
    }
    int main(){
        int array = {1, 4, 3, 6, 2, 1}
    }