#include<iostream>
#include<math.h>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>ans;
    int i =0;
    while(n!=0){
        int bit = n&1;
       ans.push_back(bit);
       n = n>>1;
    }
    reverse(ans.begin(),ans.end());
    for (int i =0;i<ans.size();i++){
        cout << ans[i] << " ";
    }

}