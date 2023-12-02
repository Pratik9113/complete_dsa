#include<iostream>
#include<climits>
#include<math.h>
using namespace std;

void optimize(int arr[], int n){
    int maxo = INT_MIN;
    int count = 0;
    for(int i =0;i<n;i++){
        if(arr[i]==1){
            count++;
            maxo = max(maxo,count);
        }else{
            count=0;
        }
    }
    cout << "optimize the number of count : " << maxo;
}
int main(){
    int n;
    cin >> n;
    int arr[n]= {1,1,0,1,1,1};
    int maxo = INT_MIN;
    for(int i =0;i<n;i++){
        int count =0;
        for(int j=i;j<n;j++){
            if( arr[i]==1 && arr[i]==arr[j]){
                count++;
                maxo = max(maxo,count);
            }else{
                break;
            }
        }
    }
    cout << "max consecutive one " << maxo << endl;
    optimize(arr,n);
}