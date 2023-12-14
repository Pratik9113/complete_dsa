#include<iostream>
#include<climits>
#include<math.h>
using namespace std;
int main(){
    
    int n;
    cin >> n;
    int a[n] ={1,2,1,3};
    int k =2;
    int sum =0;
    int maxo =0;
    int count =0;
    for(int i =0;i<n;i++){
        sum+=a[i];
        count++;
        if(sum == k){
            maxo = max(maxo,count);
            sum=0;
            count=0;
        }else if()
    }
    cout << "n " <<  maxo;
}