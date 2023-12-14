#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    if(n>=0){
    int ans = 1;
    int sum =0;
    while(n!=0){
        int bit = n&1;
        sum = sum + (ans*bit);
        ans = ans*10;
        n = n>>1;
    }
    cout << sum;
    }else{
        // negative 
    }
}