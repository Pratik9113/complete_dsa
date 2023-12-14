#include<iostream>
using namespace std;
void reverse(int arr[], int l, int r){
    if(l>r){
        return;
    }
    swap(arr[l],arr[r]);
    reverse(arr,l+1,r-1);
}
bool palindrone(string &s, int l , int r){
        if(s[l]!=s[r]){
            return false;
        }
        palindrone(s,l+1,r-1);
        return true;
}
int fibbo(int n){
    if(n<=1){
        return n;
    }
    return fibbo(n-1)+fibbo(n-2);
}
int main(){
    // int n;
    // cin >> n;
    // int arr[n];
    // int l =0;
    // int r = n-1;
    // for(int i =0;i<n;i++){
    //     cin >> arr[i];
    // }
    // reverse(arr,l,r);
    // for(int i =0;i<n;i++){
    //     cout << arr[i] << " ";
    // }
    // string s = "kanan";
    // int left =0;
    // int right = s.length()-1;
    // bool ans = palindrone(s,left,right);
    // cout << "is palindrone is  : " << ans;
    int fibb;
    cout << "enter the fibbonacci number : ";
    cin >>  fibb;
    int a = 0;
    int b = 1;
    cout << fibbo(fibb);
}
