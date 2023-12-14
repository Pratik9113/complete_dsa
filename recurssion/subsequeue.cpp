/*#include<iostream>
#include<vector>
using namespace std;
void sumsequn(int index, vector<int>& ds,int &s, int sum,int arr[],int n){
    if(index==n){
        if(s==sum){
            for(auto it :ds) cout << it << " ";
            cout << endl;
        }
        return;
    }
    // take 
    ds.push_back(arr[index]);
    s +=arr[index];
    sumsequn(index+1,ds,s,sum,arr,n);
    // don't take 
    ds.pop_back();
    s -=arr[index];
    sumsequn(index+1,ds,s,sum,arr,n);
}
int main(){
    int arr[] = {1,2,1};
    int n =3;
    int sum =2;
    vector<int>ds;
    int s =0;
    sumsequn(0,ds,s,sum,arr,n);
    
}*/
/*#include<iostream>
#include<vector>
using namespace std;
// here i am using global variable in output there is only one array 
bool check = false;
void sumsequn(int index, vector<int>& ds,int &s, int sum,int arr[],int n){
    if(index==n){
        if(s==sum && check ==false){
            check = true;
            for(auto it :ds) cout << it << " ";
            cout << endl;
        }
        return;
    }
    // take 
    ds.push_back(arr[index]);
    s +=arr[index];
    sumsequn(index+1,ds,s,sum,arr,n);
    // don't take 
    ds.pop_back();
    s -=arr[index];
    sumsequn(index+1,ds,s,sum,arr,n);
}
int main(){
    int arr[] = {1,2,1};
    int n =3;
    int sum =2;
    vector<int>ds;
    int s =0;
    sumsequn(0,ds,s,sum,arr,n);
    
}*/
// here i didn't want to use global variable
// #include<iostream>
// #include<vector>
// using namespace std;
// bool sumsequn(int index, vector<int>& ds,int &s, int sum,int arr[],int n){
//     if(index==n){
//         if(s==sum){
//             for(auto it :ds) cout << it << " ";
//             cout << endl;
//             return true;
//         }
//         return false;
//     }
//     // take 
//     ds.push_back(arr[index]);
//     s +=arr[index];
//     if(sumsequn(index+1,ds,s,sum,arr,n)==true){
//         return true;
//     }
//     // don't take 
//     ds.pop_back();
//     s -=arr[index];
//     if(sumsequn(index+1,ds,s,sum,arr,n)==true){
//         return true;
//     }
//     return false;
// }
// int main(){
//     int arr[] = {1,2,1};
//     int n =3;
//     int sum =2;
//     vector<int>ds;
//     int s =0;
//     sumsequn(0,ds,s,sum,arr,n);
    
// }


// here i just want to find the number of count 
#include<iostream>
#include<vector>
using namespace std;
int sumsequn(int index, vector<int>& ds,int &s, int sum,int arr[],int n){
    if(index==n){
        if(s==sum){
            for(auto it :ds) cout << it << " ";
            cout << endl;
            return 1;
        }
        return 0;
    }
    // take 
    ds.push_back(arr[index]);
    s +=arr[index];
    int left = sumsequn(index+1,ds,s,sum,arr,n);
    // don't take 
    ds.pop_back();
    s -=arr[index];
    int right = sumsequn(index+1,ds,s,sum,arr,n);
    return left+right;
}
int main(){
    int arr[] = {1,2,1};
    int n =3;
    int sum =2;
    vector<int>ds;
    int s =0;
    cout << sumsequn(0,ds,s,sum,arr,n);
    
}