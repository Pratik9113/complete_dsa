#include<iostream>
using namespace std;
int main(){
    int a[]= {0, 2, 1, 2, 0};
    int n =5;
    int zero = 0;
        int one = 0;
        int two = 0;
        for(int i=0;i<n;i++){
            if(a[i]==0){
                zero++;
            }
            if(a[i]==1){
                one++;
            }
            if(a[i]==2){
                two++;
            }
        }
        //cout << zero <<  " " << one <<" " << two << endl; 
        int ab = zero;
        int bb = one;
        while(zero >0){
            a[--zero] = 0;
        }
        
        while(one >0){
            a[ab + --one] = 1;
        }
        while(two>0){
            a[ab + bb + --two] = 2;
        }
        // for(int i =0;i<n;i++){
        //     cout << a[i] << " ";
        // }
}